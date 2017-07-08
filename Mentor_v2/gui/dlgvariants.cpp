#include "dlgvariants.h"
#include "ui_dlgvariants.h"
#include "../quiz/render/script/print/printscriptrenderer.h"
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>
#include "../utils/txttobmp.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "../quiz/render/image/imagerenderer.h"
#include "../gui/dlgvariant.h"
#include <QMessageBox>
#include "../quiz/render/web/webrenderer.h"
#include <QFileDialog>
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>
#include "../gui/dlgtestgenprogress.h"
//#include "../quiz/render/script/print/printscriptrenderer.h"
#include "../quiz/render/web/convert_to_tex.h"

dlgVariants::dlgVariants (Quiz *quiz, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dlgVariants)
{
    ui->setupUi(this);
    if (quiz->variants().count() > 0)
        ui->spnGroups->setValue(quiz->variants().count()),
        ui->spnVariants->setValue(quiz->variants().at(0).count());
    _quiz = quiz;
    fillView();
    startTimer(300);
    this->setAttribute(Qt::WA_DeleteOnClose);
}

void dlgVariants::timerEvent (QTimerEvent *)
{
    ui->btnWebTests->setEnabled(!quiz()->variants().isEmpty());
    ui->btnSelectAll->setEnabled(!quiz()->variants().isEmpty());
    ui->btnSelectNone->setEnabled(!quiz()->variants().isEmpty());
    ui->btnViewVariant->setEnabled(!quiz()->variants().isEmpty());
    ui->btnPrintSelected->setEnabled(!quiz()->variants().isEmpty() && !ui->tblVariants->selectedItems().isEmpty());
}

dlgVariants::~dlgVariants()
{
    delete ui;
}

Quiz *dlgVariants::quiz()
{
    return _quiz;
}

void dlgVariants::on_btnGenerate_clicked()
{
    quiz()->generate(ui->spnVariants->value(), ui->spnGroups->value());
    fillView();
}

void dlgVariants::fillView()
{
    ui->tblVariants->clear();
    ui->tblVariants->setRowCount(0);
    ui->tblVariants->setColumnCount(0);
    if (quiz()->variants().count()==0 || quiz()->variants().at(0).count()==0)
        return;
    ui->tblVariants->setRowCount(quiz()->variants().count());
    ui->tblVariants->setColumnCount(quiz()->variants().at(0).count());

    for(int i=0; i<quiz()->variants().count(); ++i)
        for(int j=0; j<quiz()->variants().at(i).count(); ++j)
        {
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setText(QString::number(j+1));
            item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
            ui->tblVariants->setItem(i, j, item);
            ui->tblVariants->setRowHeight(i, 20);
        }
}

void dlgVariants::on_btnViewVariant_clicked()
{
	
	
    QList<QTableWidgetItem *> list = ui->tblVariants->selectedItems();
    if (!list.isEmpty())
        (new dlgVariant(
                quiz()->variants().at(list[0]->row())
                .at(list[0]->column()))
        )->show();
}

void dlgVariants::on_btnbox_accepted()
{
    accept();
}


void dlgVariants::on_btnSelectAll_clicked()
{
    ui->tblVariants->selectAll();
}

void dlgVariants::on_btnSelectNone_clicked()
{
    QList<QTableWidgetItem *> items = ui->tblVariants->selectedItems();
    for(int i=0; i<items.count(); ++i)
        items[i]->setSelected(false);
}

void dlgVariants::on_btnWebTests_clicked()
{
    if (quiz()->variants().isEmpty())
    {
        QMessageBox::critical(this, "Ошибка", "Не сгенерировано ни одного варианта.");
        return;
    }

    QString dir = QFileDialog::getExistingDirectory(
            this,
            tr("Путь к тестам"),
            QString(),
            QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
    );
    if (dir == QString()) return;

    dlgTestGenProgress dlg(quiz(), dir, this);
    dlg.setModal(true);
    dlg.exec();

    //WebRenderer::instance()->render(quiz(), dir);
}

void dlgVariants::on_btnPrintSelected_clicked()
{
    Quiz *quiz = this->quiz();
    QPrinter printer;
    QPrintDialog printDialog(&printer);
    if (printDialog.exec() == QDialog::Accepted)
    {
        QPainter paintr(&printer);
        int pointsize = TxtToBmp::instance()->font().pointSize();

        QFont &f = TxtToBmp::instance()->font();
        f.setPixelSize(QFontInfo(f).pixelSize() * (printer.pageRect().width() / 1024));
        f.setPointSize(QFontInfo(f).pointSize());

        for(int g=0; g<quiz->variants().count(); ++g)
        {
            for(int var=0; var<quiz->variants().at(g).count(); ++var)
            {
                if (!ui->tblVariants->item(g, var)->isSelected()) continue;

                QuizVariant *variant = quiz->variants().at(g).at(var);
                QList<PrintScript> list = PrintScriptRenderer::instance()->getVariant(variant);//->number(), variant->generated());
                int y = 20;

                for(int task=0; task<list.count(); ++task)
                {
                    for(int i=0; i<list[task].task.count(); ++i)
                    {
                        QImage img = TxtToBmp::instance()->convert(list[task].task[i]);
                        if (y + img.height() > printer.pageRect().height())
                            printer.newPage(), y = 20;
                        paintr.drawImage(20, y, img);
                        y += img.height();
                    }
                }

                printer.newPage();
            }
        }

        if (ui->chkPrintSolutions->isChecked())
        {
            int y = 20;
            for(int g=0; g<quiz->variants().count(); ++g)
            {
                for(int var=0; var<quiz->variants().at(g).count(); ++var)
                {
                    if (!ui->tblVariants->item(g, var)->isSelected()) continue;

                    QuizVariant *variant = quiz->variants().at(g).at(var);
                    QList<PrintScript> list = PrintScriptRenderer::instance()->getVariant(variant);//->number(), variant->generated());
                    list[list.count()-1].solution.append("String( )");

                    for(int task=0; task<list.count(); ++task)
                    {
                        for(int i=0; i<list[task].solution.count(); ++i)
                        {
                            QImage img = TxtToBmp::instance()->convert(list[task].solution[i]);
                            if (y + img.height() > printer.pageRect().height())
                                printer.newPage(), y = 20;
                            paintr.drawImage(20, y, img);
                            y += img.height();
                        }
                    } // task loop
                } // variant loop
            } // group loop
        } // solution?

        TxtToBmp::instance()->font().setPointSize(pointsize);
    }
}

#include "dlgvariant.h"
#include "ui_dlgvariant.h"
#include "../quiz/render/image/imagerenderer.h"
#include <QBuffer>
#include <QFile>
#include <QDebug>

dlgVariant::dlgVariant(QuizVariant *var, QWidget *parent)
    : variant(var)
    , QDialog(parent)
    , ui(new Ui::dlgVariant)
{
    ui->setupUi(this);
    updateView();
    this->setWindowTitle("Вариант " + QString::number(var->number()));
    this->setAttribute(Qt::WA_DeleteOnClose);
}

dlgVariant::~dlgVariant()
{
    delete ui;
}

QString readfile (const QString &name)
{
    QFile f(name);
    if (f.open(QIODevice::ReadOnly))
        return f.readAll();
    return QString();
}

void dlgVariant::updateView()
{
    QList<QImage> list = ImageRenderer::instance()->getVariant(
                variant,
                ui->chkViewTestAnswers->isChecked(),
                ui->chkViewSolutions->isChecked()
    );
    QString html;
    html += readfile(":/html/variantview_header.html");
    QString imgtag = readfile(":/html/variantview_image.html");
    for(int i=0; i<list.count(); ++i)
    {
        QBuffer buffer;
        list.at(i).save(&buffer, "JPG");
        html += QString().sprintf(imgtag.toLatin1().data(), (QString("data:image/jpeg;base64,")+buffer.data().toBase64()).toLatin1().data());
    }
    html += readfile(":/html/variantview_footer.html");
    ui->webView->setHtml(html);
    ui->webView->update();
}

void dlgVariant::on_btnUpdateView_clicked()
{
    updateView();
}

void dlgVariant::on_btnRegenerate_clicked()
{
    variant->regenerate();
    updateView();
}

void dlgVariant::on_btnClose_clicked()
{
    this->close();
}

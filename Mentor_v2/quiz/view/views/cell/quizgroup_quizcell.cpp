#include "quizgroup_quizcell.h"
#include "ui_quizgroup_quizcell.h"
#include "../../../quizgroup.h"
#include <QDrag>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QDragLeaveEvent>
#include <QMimeData>
#include "../utils/utils.h"
#include <QDateTime>

QuizGroupCell::QuizGroupCell (QuizNode *item, QWidget *parent) :
	QuizCell(item, parent),
	ui(new Ui::QuizGroupCell)
{
	ui->setupUi(this);
	QuizGroup *g = (QuizGroup *)item;
    updateNotify();
    connect(item, SIGNAL(updateNotify()), this, SLOT(updateNotify()));
}

void QuizGroupCell::updateNotify()
{
    ui->lblTitle->setText(((QuizGroup *)this->node())->title());
    ui->lblDescription->setText(((QuizGroup *)this->node())->description());
}

QuizGroupCell::~QuizGroupCell()
{
	delete ui;
}


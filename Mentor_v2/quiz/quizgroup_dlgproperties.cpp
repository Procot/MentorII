#include "quizgroup_dlgproperties.h"
#include "ui_quizgroup_dlgproperties.h"
#include "../quiz/filter/group/quizgroupfilter.h"
#include "../quiz/filter/group/random_quizgroupfilter.h"
#include "../quiz/filter/group/shuffle_quizgroupfilter.h"

dlgQuizGroupProperties::dlgQuizGroupProperties (QuizGroup *group, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dlgQuizGroupProperties)
    , _group(group)
{
    ui->setupUi(this);
    ui->linTitle->setText(group->title());
    for(int i=0; i<group->filters().count(); ++i)
    {
        QuizGroupFilter *filter = group->filters().at(i);
        if (filter->itemType() == "shuffle")
            ui->chkShuffle->setChecked(true);
        if (filter->itemType() == "random")
            ui->chkRandom->setChecked(true);
    }
}

dlgQuizGroupProperties::~dlgQuizGroupProperties()
{
    delete ui;
}

void dlgQuizGroupProperties::on_btnbox_accepted()
{
    int random=-1, shuffle=-1;
    for(int i=0; i<_group->filters().count(); ++i)
    {
        QuizGroupFilter *filter = _group->filters().at(i);
        if (filter->itemType() == "shuffle")
            shuffle = i;
        if (filter->itemType() == "random")
            random = i;
    }

    _group->setTitle(ui->linTitle->text());
    if (ui->chkRandom->isChecked() != (random!=-1))
    {
        if (random != -1)
            _group->removeFilterAt(random);
        else
            _group->addFilter(new RandomQuizGroupFilter());
    }
    if (ui->chkShuffle->isChecked() != (shuffle!=-1))
    {
        if (shuffle != -1)
            _group->removeFilterAt(shuffle);
        else
            _group->addFilter(new ShuffleQuizGroupFilter());
    }

    accept();
}

void dlgQuizGroupProperties::on_btnbox_rejected()
{
    reject();
}

#-------------------------------------------------
#
# Project created by QtCreator 2012-02-23T04:29:18
#
#-------------------------------------------------

QT       += core gui xml webkit

TARGET = MentorII
TEMPLATE = app

RESOURCES += \
    r.qrc

SOURCES += \
    main.cpp \
    gui/mainwindow.cpp \
    gui/dlgabout.cpp \
    tasks/tasktree.cpp \
    tasks/taskquestion.cpp \
    tasks/tasknode.cpp \
    tasks/taskmtrtable.cpp \
    tasks/taskgroup.cpp \
    tasks/load/taskquestion_taskloaderhelper.cpp \
    tasks/load/taskmtrtable_taskloaderhelper.cpp \
    tasks/load/taskloaderhelper.cpp \
    tasks/load/taskloader.cpp \
    tasks/load/taskgroup_taskloaderhelper.cpp \
    tasks/view/taskviewerhelper.cpp \
    tasks/view/taskviewer.cpp \
    tasks/view/taskquestion_taskviewerhelper.cpp \
    tasks/view/taskmtrtable_taskviewerhelper.cpp \
    tasks/view/taskgroup_taskviewerhelper.cpp \
    tasks/view/views/taskview.cpp \
    tasks/view/views/taskquestion_taskview.cpp \
    tasks/view/views/taskmtrtable_taskview.cpp \
    tasks/view/views/taskgroup_taskview.cpp \
    tasks/view/views/cell/taskquestion_taskcell.cpp \
    tasks/view/views/cell/taskmtrtable_taskcell.cpp \
    tasks/view/views/cell/taskgroup_taskcell.cpp \
    tasks/view/views/cell/taskcell.cpp \
    utils/utils.cpp \
    utils/chain.cpp \
    quiz/quizvariant.cpp \
    quiz/quizquestion.cpp \
    quiz/quiznode.cpp \
    quiz/quizgroup.cpp \
    quiz/quiz.cpp \
    quiz/view/quizviewerhelper.cpp \
    quiz/view/quizviewer.cpp \
    quiz/view/quizgroup_quizviewerhelper.cpp \
    quiz/filter/quizfilter.cpp \
    quiz/view/views/quiznodeview.cpp \
    quiz/view/views/quizgroup_quiznodeview.cpp \
    quiz/view/views/cell/quizquestion_quizcell.cpp \
    quiz/view/views/cell/quizgroup_quizcell.cpp \
    quiz/view/views/cell/quizcell.cpp \
    quiz/filter/group/quizgroupfilter.cpp \
    quiz/filter/group/shuffle_quizgroupfilter.cpp \
    quiz/filter/group/random_quizgroupfilter.cpp \
    task2quiz/task2quiz.cpp \
    task2quiz/tasktoquizhelper.cpp \
    task2quiz/taskgrouptoquiz.cpp \
    task2quiz/taskquestiontoquiz.cpp \
    task2quiz/taskmtrtabletoquiz.cpp \
    quiz/gen/generator.cpp \
    quiz/gen/generatedquestion.cpp \
    quiz/gen/generatorhelper.cpp \
    quiz/gen/limits_generatorhelper.cpp \
    quiz/gen/limits_generatedquestion.cpp \
    quiz/render/script/scriptrenderer.cpp \
    quiz/render/script/scriptrendererhelper.cpp \
    quiz/render/script/limits_scriptrendererhelper.cpp \
    quiz/view/quizview.cpp \
    tasks/view/views/quizadapter.cpp \
    gui/dlgnewgroup.cpp \
    utils/txttobmp.cpp \
    quiz/render/image/imagerenderer.cpp \
    quiz/render/script/print/printscriptrenderer.cpp \
    quiz/render/web/webrenderer.cpp \
    quiz/gen/derivs_generatedquestion.cpp \
    quiz/gen/derivs_generatorhelper.cpp \
    quiz/render/script/derivs_scriptrendererhelper.cpp \
    quiz/render/script/m_expressions.cpp \
    quiz/render/script/m_deriv.cpp \
    gui/dlgvariants.cpp \
    gui/dlgvariant.cpp \
    quiz/file/quizfile.cpp \
    quiz/file/xmlquizfile.cpp \
    quiz/file/xmlquizfile_variants.cpp \
    quiz/file/xmlquizfile_structure.cpp \
    quiz/file/quizgroup_xmlquizfile_structure_helper.cpp \
    quiz/file/quizquestion_xmlquizfile_structure_helper.cpp \
    quiz/file/xmlquizfile_quizgroupfilter.cpp \
    quiz/render/script/m_deriv_02.cpp \
    quiz/render/script/m_deriv_01.cpp \
    quiz/render/script/m_limits.cpp \
    quiz/render/script/m_integ_a03.cpp \
    quiz/render/script/m_integ_a02.cpp \
    quiz/render/script/m_integ_a01.cpp \
    quiz/render/script/m_integ.cpp \
    quiz/render/script/m_integ2.cpp \
    quiz/render/script/m_integ0xxb.cpp \
    gui/dlgtestgenprogress.cpp \
    quiz/quiz_dlgproperties.cpp \
    quiz/quizgroup_dlgproperties.cpp \
    gui/dlgaddquestions.cpp \
    quiz/gen/integrals_generatedquestion.cpp \
    quiz/gen/integrals_generatorhelper.cpp \
    quiz/render/script/integrals_scriptrendererhelper.cpp \
    quiz/render/script/legacy_helpers.cpp

OTHER_FILES += \
    base.xml

HEADERS += \
    gui/mainwindow.h \
    gui/dlgabout.h \
    tasks/tasktree.h \
    tasks/taskquestion.h \
    tasks/tasknode.h \
    tasks/taskmtrtable.h \
    tasks/taskgroup.h \
    tasks/load/taskquestion_taskloaderhelper.h \
    tasks/load/taskmtrtable_taskloaderhelper.h \
    tasks/load/taskloaderhelper.h \
    tasks/load/taskloader.h \
    tasks/load/taskgroup_taskloaderhelper.h \
    tasks/view/taskviewerhelper.h \
    tasks/view/taskviewer.h \
    tasks/view/taskquestion_taskviewerhelper.h \
    tasks/view/taskmtrtable_taskviewerhelper.h \
    tasks/view/taskgroup_taskviewerhelper.h \
    tasks/view/views/taskview.h \
    tasks/view/views/taskquestion_taskview.h \
    tasks/view/views/taskmtrtable_taskview.h \
    tasks/view/views/taskgroup_taskview.h \
    tasks/view/views/cell/taskquestion_taskcell.h \
    tasks/view/views/cell/taskmtrtable_taskcell.h \
    tasks/view/views/cell/taskgroup_taskcell.h \
    tasks/view/views/cell/taskcell.h \
    utils/utils.h \
    utils/chain.h \
    quiz/quizvariant.h \
    quiz/quizquestion.h \
    quiz/quiznode.h \
    quiz/quizgroup.h \
    quiz/quiz.h \
    quiz/view/quizviewerhelper.h \
    quiz/view/quizviewer.h \
    quiz/view/quizgroup_quizviewerhelper.h \
    quiz/filter/quizfilter.h \
    quiz/view/views/quizgroup_quiznodeview.h \
    quiz/view/views/quiznodeview.h \
    quiz/view/views/cell/quizquestion_quizcell.h \
    quiz/view/views/cell/quizgroup_quizcell.h \
    quiz/view/views/cell/quizcell.h \
    quiz/filter/group/quizgroupfilter.h \
    quiz/filter/group/shuffle_quizgroupfilter.h \
    quiz/filter/group/random_quizgroupfilter.h \
    task2quiz/task2quiz.h \
    task2quiz/tasktoquizhelper.h \
    task2quiz/taskgrouptoquiz.h \
    task2quiz/taskquestiontoquiz.h \
    task2quiz/taskmtrtabletoquiz.h \
    quiz/gen/generator.h \
    quiz/gen/generatedquestion.h \
    quiz/gen/generatorhelper.h \
    quiz/gen/limits_generatorhelper.h \
    quiz/gen/limits_generatedquestion.h \
    quiz/render/script/scriptrenderer.h \
    quiz/render/script/scriptrendererhelper.h \
    quiz/render/script/limits_scriptrendererhelper.h \
    quiz/view/quizview.h \
    tasks/view/views/quizadapter.h \
    gui/dlgnewgroup.h \
    quiz/gen/mc_deriv.h \
    quiz/gen/m_expressions.h \
    utils/txttobmp.h \
    quiz/render/image/imagerenderer.h \
    quiz/render/script/print/printscriptrenderer.h \
    quiz/render/web/webrenderer.h \
    quiz/gen/derivs_generatedquestion.h \
    quiz/gen/derivs_generatorhelper.h \
    quiz/render/script/derivs_scriptrendererhelper.h \
    quiz/render/script/m_expressions.h \
    quiz/render/script/m_deriv.h \
    gui/dlgvariants.h \
    gui/dlgvariant.h \
    quiz/file/quizfile.h \
    quiz/file/xmlquizfile.h \
    quiz/file/xmlquizfile_variants.h \
    quiz/file/xmlquizfile_structure.h \
    quiz/file/quizgroup_xmlquizfile_structure_helper.h \
    quiz/file/quizquestion_xmlquizfile_structure_helper.h \
    quiz/file/xmlquizfile_quizgroupfilter.h \
    quiz/render/script/m_deriv_02.h \
    quiz/render/script/m_deriv_01.h \
    quiz/render/script/m_limits.h \
    quiz/render/script/m_integ_a02.h \
    quiz/render/script/m_integ_a01.h \
    quiz/render/script/m_integ.h \
    quiz/render/script/m_integ2.h \
    quiz/render/script/m_integ0xxb.h \
    quiz/render/script/m_integ_a03.h \
    gui/dlgtestgenprogress.h \
    quiz/quiz_dlgproperties.h \
    quiz/quizgroup_dlgproperties.h \
    gui/dlgaddquestions.h \
    quiz/gen/integrals_generatedquestion.h \
    quiz/gen/integrals_generatorhelper.h \
    quiz/render/script/integrals_scriptrendererhelper.h \
    quiz/render/script/legacy_helpers.h

FORMS += \
    gui/mainwindow.ui \
    gui/dlgabout.ui \
    tasks/view/views/taskquestion_taskview.ui \
    tasks/view/views/taskmtrtable_taskview.ui \
    tasks/view/views/taskgroup_taskview.ui \
    tasks/view/views/cell/taskquestion_taskcell.ui \
    tasks/view/views/cell/taskmtrtable_taskcell.ui \
    tasks/view/views/cell/taskgroup_taskcell.ui \
    quiz/view/views/quizgroup_quiznodeview.ui \
    quiz/view/views/cell/quizquestion_quizcell.ui \
    quiz/view/views/cell/quizgroup_quizcell.ui \
    quiz/view/quizview.ui \
    gui/dlgnewgroup.ui \
    gui/dlgvariants.ui \
    gui/dlgvariant.ui \
    gui/dlgtestgenprogress.ui \
    quiz/quiz_dlgproperties.ui \
    quiz/quizgroup_dlgproperties.ui \
    gui/dlgaddquestions.ui
	#windows xp совместимость 
	DEFINES += "WINVER = 0x0501"
	DEFINES += "_WIN32_WINNT = 0x0501"

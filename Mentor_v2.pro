#-------------------------------------------------
#
# Project created by QtCreator 2012-02-23T04:29:18
#
#-------------------------------------------------

QT       += core gui xml webkit

TARGET = MentorII
TEMPLATE = app

SOURCES += \
    gui/dlgabout.cpp \
    gui/dlgaddquestions.cpp \
    gui/dlgnewgroup.cpp \
    gui/dlgprint.cpp \
    gui/dlgtestgenprogress.cpp \
    gui/dlgvariant.cpp \
    gui/dlgvariants.cpp \
    gui/mainwindow.cpp \
    quiz/file/quizfile.cpp \
    quiz/file/quizgroup_xmlquizfile_structure_helper.cpp \
    quiz/file/quizquestion_xmlquizfile_structure_helper.cpp \
    quiz/file/xmlquizfile.cpp \
    quiz/file/xmlquizfile_quizgroupfilter.cpp \
    quiz/file/xmlquizfile_structure.cpp \
    quiz/file/xmlquizfile_variants.cpp \
    quiz/filter/group/quizgroupfilter.cpp \
    quiz/filter/group/random_quizgroupfilter.cpp \
    quiz/filter/group/shuffle_quizgroupfilter.cpp \
    quiz/filter/quizfilter.cpp \
    quiz/gen/derivs_generatedquestion.cpp \
    quiz/gen/derivs_generatorhelper.cpp \
    quiz/gen/diffequ_generatedquestion.cpp \
    quiz/gen/diffequ_generatorhelper.cpp \
    quiz/gen/generatedquestion.cpp \
    quiz/gen/generator.cpp \
    quiz/gen/generatorhelper.cpp \
    quiz/gen/integrals_generatedquestion.cpp \
    quiz/gen/integrals_generatorhelper.cpp \
    quiz/gen/limits_generatedquestion.cpp \
    quiz/gen/limits_generatorhelper.cpp \
    quiz/gen/series_generatedquestion.cpp \
    quiz/gen/series_generatorhelper.cpp \
    quiz/render/image/imagerenderer.cpp \
    quiz/render/script/print/printscriptrenderer.cpp \
    quiz/render/script/derivs_scriptrendererhelper.cpp \
    quiz/render/script/diffequ_scriptrendererhelper.cpp \
    quiz/render/script/integrals_scriptrendererhelper.cpp \
    quiz/render/script/legacy_helpers.cpp \
    quiz/render/script/limits_scriptrendererhelper.cpp \
    quiz/render/script/m_deriv.cpp \
    quiz/render/script/m_deriv_01.cpp \
    quiz/render/script/m_deriv_02.cpp \
    quiz/render/script/m_diffequ.cpp \
    quiz/render/script/m_expressions.cpp \
    quiz/render/script/m_integ.cpp \
    quiz/render/script/m_integ_a01.cpp \
    quiz/render/script/m_integ_a02.cpp \
    quiz/render/script/m_integ_a03.cpp \
    quiz/render/script/m_integ0xxb.cpp \
    quiz/render/script/m_integ2.cpp \
    quiz/render/script/m_limits.cpp \
    quiz/render/script/m_series.cpp \
    quiz/render/script/scriptrenderer.cpp \
    quiz/render/script/scriptrendererhelper.cpp \
    quiz/render/script/series_scriptrendererhelper.cpp \
    quiz/render/web/convert_to_tex.cpp \
    quiz/render/web/webrenderer.cpp \
    quiz/view/views/cell/quizcell.cpp \
    quiz/view/views/cell/quizgroup_quizcell.cpp \
    quiz/view/views/cell/quizquestion_quizcell.cpp \
    quiz/view/views/quizgroup_quiznodeview.cpp \
    quiz/view/views/quiznodeview.cpp \
    quiz/view/quizgroup_quizviewerhelper.cpp \
    quiz/view/quizview.cpp \
    quiz/view/quizviewer.cpp \
    quiz/view/quizviewerhelper.cpp \
    quiz/quiz.cpp \
    quiz/quiz_dlgproperties.cpp \
    quiz/quizgroup.cpp \
    quiz/quizgroup_dlgproperties.cpp \
    quiz/quiznode.cpp \
    quiz/quizquestion.cpp \
    quiz/quizvariant.cpp \
    task2quiz/task2quiz.cpp \
    task2quiz/taskgrouptoquiz.cpp \
    task2quiz/taskmtrtabletoquiz.cpp \
    task2quiz/taskquestiontoquiz.cpp \
    task2quiz/tasktoquizhelper.cpp \
    tasks/load/taskgroup_taskloaderhelper.cpp \
    tasks/load/taskloader.cpp \
    tasks/load/taskloaderhelper.cpp \
    tasks/load/taskmtrtable_taskloaderhelper.cpp \
    tasks/load/taskquestion_taskloaderhelper.cpp \
    tasks/view/views/cell/taskcell.cpp \
    tasks/view/views/cell/taskgroup_taskcell.cpp \
    tasks/view/views/cell/taskmtrtable_taskcell.cpp \
    tasks/view/views/cell/taskquestion_taskcell.cpp \
    tasks/view/views/quizadapter.cpp \
    tasks/view/views/taskgroup_taskview.cpp \
    tasks/view/views/taskmtrtable_taskview.cpp \
    tasks/view/views/taskquestion_taskview.cpp \
    tasks/view/views/taskview.cpp \
    tasks/view/taskgroup_taskviewerhelper.cpp \
    tasks/view/taskmtrtable_taskviewerhelper.cpp \
    tasks/view/taskquestion_taskviewerhelper.cpp \
    tasks/view/taskviewer.cpp \
    tasks/view/taskviewerhelper.cpp \
    tasks/taskgroup.cpp \
    tasks/taskmtrtable.cpp \
    tasks/tasknode.cpp \
    tasks/taskquestion.cpp \
    tasks/tasktree.cpp \
    utils/chain.cpp \
    utils/txttobmp.cpp \
    utils/utils.cpp \
    main.cpp

OTHER_FILES += \
    base.xml

HEADERS += \
    gui/dlgabout.h \
    gui/dlgaddquestions.h \
    gui/dlgnewgroup.h \
    gui/dlgprint.h \
    gui/dlgtestgenprogress.h \
    gui/dlgvariant.h \
    gui/dlgvariants.h \
    gui/mainwindow.h \
    quiz/file/quizfile.h \
    quiz/file/quizgroup_xmlquizfile_structure_helper.h \
    quiz/file/quizquestion_xmlquizfile_structure_helper.h \
    quiz/file/xmlquizfile.h \
    quiz/file/xmlquizfile_quizgroupfilter.h \
    quiz/file/xmlquizfile_structure.h \
    quiz/file/xmlquizfile_variants.h \
    quiz/filter/group/quizgroupfilter.h \
    quiz/filter/group/random_quizgroupfilter.h \
    quiz/filter/group/shuffle_quizgroupfilter.h \
    quiz/filter/quizfilter.h \
    quiz/gen/derivs_generatedquestion.h \
    quiz/gen/derivs_generatorhelper.h \
    quiz/gen/diffequ_generatedquestion.h \
    quiz/gen/diffequ_generatorhelper.h \
    quiz/gen/generatedquestion.h \
    quiz/gen/generator.h \
    quiz/gen/generatorhelper.h \
    quiz/gen/integrals_generatedquestion.h \
    quiz/gen/integrals_generatorhelper.h \
    quiz/gen/limits_generatedquestion.h \
    quiz/gen/limits_generatorhelper.h \
    quiz/gen/series_generatedquestion.h \
    quiz/gen/series_generatorhelper.h \
    quiz/render/image/imagerenderer.h \
    quiz/render/script/print/printscriptrenderer.h \
    quiz/render/script/derivs_scriptrendererhelper.h \
    quiz/render/script/diffequ_scriptrendererhelper.h \
    quiz/render/script/integrals_scriptrendererhelper.h \
    quiz/render/script/legacy_helpers.h \
    quiz/render/script/limits_scriptrendererhelper.h \
    quiz/render/script/m_deriv.h \
    quiz/render/script/m_deriv_01.h \
    quiz/render/script/m_deriv_02.h \
    quiz/render/script/m_diffequ.h \
    quiz/render/script/m_expressions.h \
    quiz/render/script/m_integ.h \
    quiz/render/script/m_integ_a01.h \
    quiz/render/script/m_integ_a02.h \
    quiz/render/script/m_integ_a03.h \
    quiz/render/script/m_integ0xxb.h \
    quiz/render/script/m_integ2.h \
    quiz/render/script/m_limits.h \
    quiz/render/script/m_series.h \
    quiz/render/script/scriptrenderer.h \
    quiz/render/script/scriptrendererhelper.h \
    quiz/render/script/series_scriptrendererhelper.h \
    quiz/render/web/convert_to_tex.h \
    quiz/render/web/webrenderer.h \
    quiz/view/views/cell/quizcell.h \
    quiz/view/views/cell/quizgroup_quizcell.h \
    quiz/view/views/cell/quizquestion_quizcell.h \
    quiz/view/views/quizgroup_quiznodeview.h \
    quiz/view/views/quiznodeview.h \
    quiz/view/quizgroup_quizviewerhelper.h \
    quiz/view/quizview.h \
    quiz/view/quizviewer.h \
    quiz/view/quizviewerhelper.h \
    quiz/quiz.h \
    quiz/quiz_dlgproperties.h \
    quiz/quizgroup.h \
    quiz/quizgroup_dlgproperties.h \
    quiz/quiznode.h \
    quiz/quizquestion.h \
    quiz/quizvariant.h \
    task2quiz/task2quiz.h \
    task2quiz/taskgrouptoquiz.h \
    task2quiz/taskmtrtabletoquiz.h \
    task2quiz/taskquestiontoquiz.h \
    task2quiz/tasktoquizhelper.h \
    tasks/load/taskgroup_taskloaderhelper.h \
    tasks/load/taskloader.h \
    tasks/load/taskloaderhelper.h \
    tasks/load/taskmtrtable_taskloaderhelper.h \
    tasks/load/taskquestion_taskloaderhelper.h \
    tasks/view/views/cell/taskcell.h \
    tasks/view/views/cell/taskgroup_taskcell.h \
    tasks/view/views/cell/taskmtrtable_taskcell.h \
    tasks/view/views/cell/taskquestion_taskcell.h \
    tasks/view/views/quizadapter.h \
    tasks/view/views/taskgroup_taskview.h \
    tasks/view/views/taskmtrtable_taskview.h \
    tasks/view/views/taskquestion_taskview.h \
    tasks/view/views/taskview.h \
    tasks/view/taskgroup_taskviewerhelper.h \
    tasks/view/taskmtrtable_taskviewerhelper.h \
    tasks/view/taskquestion_taskviewerhelper.h \
    tasks/view/taskviewer.h \
    tasks/view/taskviewerhelper.h \
    tasks/taskgroup.h \
    tasks/taskmtrtable.h \
    tasks/tasknode.h \
    tasks/taskquestion.h \
    tasks/tasktree.h \
    utils/chain.h \
    utils/txttobmp.h \
    utils/utils.h \
    convert_to_tex.h

FORMS += \
    gui/dlgabout.ui \
    gui/dlgaddquestions.ui \
    gui/dlgnewgroup.ui \
    gui/dlgprint.ui \
    gui/dlgtestgenprogress.ui \
    gui/dlgvariant.ui \
    gui/dlgvariants.ui \
    gui/mainwindow.ui \
    quiz/view/views/cell/quizgroup_quizcell.ui \
    quiz/view/views/cell/quizquestion_quizcell.ui \
    quiz/view/views/quizgroup_quiznodeview.ui \
    quiz/view/quizview.ui \
    quiz/quiz_dlgproperties.ui \
    quiz/quizgroup_dlgproperties.ui \
    tasks/view/views/cell/taskgroup_taskcell.ui \
    tasks/view/views/cell/taskmtrtable_taskcell.ui \
    tasks/view/views/cell/taskquestion_taskcell.ui \
    tasks/view/views/taskgroup_taskview.ui \
    tasks/view/views/taskmtrtable_taskview.ui \
    tasks/view/views/taskquestion_taskview.ui
	#windows xp совместимость 

RESOURCES += \
    r.qrc

DEFINES += "WINVER = 0x0501"
DEFINES += "_WIN32_WINNT = 0x0501"

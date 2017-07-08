#include <QApplication>
#include "../gui/mainwindow.h"
#include "../tasks/tasktree.h"
#include "../utils/utils.h"
#include <QTextCodec>
#include "../utils/txttobmp.h"
#include "../quiz/file/xmlquizfile.h"
#include "../quiz/quiz.h"
 #include <Windows.h>

int main(int argc, char *argv[])
{
	// Q_INIT_RESOURCE(resources);

    QStringList paths = QCoreApplication::libraryPaths();
    paths.append(".");
 
    paths.append("platforms/plugins");
   
    QCoreApplication::setLibraryPaths(paths);

	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
	QApplication a(argc, argv);
    TxtToBmp::instance()->setFont(QFont("Times New Roman", 12, QFont::Normal));
	
	MainWindow w;
	w.show();

	
	return a.exec();
	
}


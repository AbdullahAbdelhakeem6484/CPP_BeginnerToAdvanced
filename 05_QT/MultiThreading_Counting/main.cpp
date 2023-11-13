#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "threads.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "MyFirstQTProject_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;

    auto fu1 = std::async(Provider);
    auto fu2=std::async([&w]() { Receiver(w); });

    w.show();
    return a.exec();
}

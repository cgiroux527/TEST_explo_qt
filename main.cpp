
#include "Test_file_qt.h"
#include <QApplication>


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Test_file_qt window;
    window.show();

    return QApplication::exec();
}
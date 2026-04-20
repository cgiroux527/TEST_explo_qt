#include <QApplication>
#include <QPushButton>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QWidget window;
    window.resize(300,200);
    window.setWindowTitle("Fenetre test");

    auto* boutonTest1 = new QPushButton("test bouton 1!", &window);
    boutonTest1->move(70,70);
    boutonTest1->show();
    window.show();

    delete boutonTest1;
    return QApplication::exec();
}
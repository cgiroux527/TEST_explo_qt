#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("test bouton 1!", nullptr);
    button.resize(100, 100);
    button.show();

    QPushButton buttonMagique("WOW un autre bouton",nullptr);
    buttonMagique.resize(70,80);
    buttonMagique.show();
    return QApplication::exec();
}
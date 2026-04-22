
#include <QtWidgets>


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QWidget window;
    QLabel *etiquette = new QLabel("Recherche:");
    QLineEdit *ligneEdition = new QLineEdit();
    auto *boutonTest1 = new QPushButton("OK");

    window.resize(300,200);
    window.setWindowTitle("Fenetre test");

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(etiquette);
    layout->addWidget(ligneEdition);
    layout->addWidget(boutonTest1);
    window.setLayout(layout);

    QObject::connect(boutonTest1, &QPushButton::clicked, [&]() {
    etiquette->setText("...");
});

    window.show();

    return QApplication::exec();
}
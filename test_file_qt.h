//
// Created by Utilisateur on 2026-04-22.
//

#ifndef TEST_EXPLO_QT_TEST_FILE_QT_H
#define TEST_EXPLO_QT_TEST_FILE_QT_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE

namespace Ui {
    class Test_file_qt;
}

QT_END_NAMESPACE

class Test_file_qt : public QMainWindow {
    Q_OBJECT

public:
    explicit Test_file_qt(QWidget *parent = nullptr);

    ~Test_file_qt() override;

private:
    Ui::Test_file_qt *ui;
};


#endif //TEST_EXPLO_QT_TEST_FILE_QT_H
//
// Created by Utilisateur on 2026-04-22.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Test_file_qt.h" resolved

#include "test_file_qt.h"
#include "ui_Test_file_qt.h"


Test_file_qt::Test_file_qt(QWidget *parent) : QMainWindow(parent), ui(new Ui::Test_file_qt) {
    ui->setupUi(this);
}

Test_file_qt::~Test_file_qt() {
    delete ui;
}
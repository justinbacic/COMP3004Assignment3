#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->StartNew,SIGNAL(released()), this, SLOT(doSomething()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::doSomething(){
    int x = (ui->InputElevators->text()).toInt();
    int y = (ui->InputFloors->text()).toInt();
    ElevatorControlSystem ECS = ElevatorControlSystem(x,y);
    ECS.createElevators();
    ECS.createFloors();
    ECS.print();
}


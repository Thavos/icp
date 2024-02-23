#include "main_window.h"
#include "editor_dialog.h"
#include "simulation_dialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    auto *widget = new QWidget(this);
    auto *layout = new QVBoxLayout(widget);

    auto *btnSimulation = new QPushButton("Start Simulation", widget);
    btnSimulation->resize(80,50);
    auto *btnEditor = new QPushButton("Open Map Editor", widget);
    btnEditor->resize(80,50);

    layout->addWidget(btnSimulation);
    layout->addWidget(btnEditor);
    widget->setLayout(layout);

    resize(600,400);
    setCentralWidget(widget);

    // Connections
    connect(btnSimulation, &QPushButton::clicked, this, &MainWindow::onSimulationClicked);
    connect(btnEditor, &QPushButton::clicked, this, &MainWindow::onEditorClicked);
}

void MainWindow::onSimulationClicked() {
    auto *dialog = new SimulationDialog(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
}

void MainWindow::onEditorClicked() {
    auto *dialog = new EditorDialog(this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
}
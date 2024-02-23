#include "simulation_dialog.h"

SimulationDialog::SimulationDialog(QWidget *parent) : QDialog(parent) {
    setWindowTitle("Simulation");
    resize(800, 600);

    auto *view = new QGraphicsView(this);
    auto *scene = new QGraphicsScene(this);
    view->setScene(scene);

    scene->setSceneRect(0, 0, 800, 600);
    auto *rect = scene->addRect(0, 0, 50, 50);


    auto *layout = new QVBoxLayout();
    layout->addWidget(view);
    setLayout(layout);
}
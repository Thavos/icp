#ifndef ICP_SIMULATION_DIALOG_H
#define ICP_SIMULATION_DIALOG_H

#include <QDialog>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QVBoxLayout>

class SimulationDialog : public QDialog {
    Q_OBJECT
public:
    explicit SimulationDialog(QWidget *parent = nullptr);
};


#endif //ICP_SIMULATION_DIALOG_H

#ifndef ICP_MAINWINDOW_H
#define ICP_MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>


class MainWindow  : public QMainWindow{
    Q_OBJECT;
public:
    explicit MainWindow(QWidget *parent = nullptr);

signals:
    void simulationRequested();
    void editorRequested();

private slots:
    void onSimulationClicked();
    void onEditorClicked();
};


#endif //ICP_MAINWINDOW_H

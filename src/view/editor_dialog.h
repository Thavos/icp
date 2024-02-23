#ifndef ICP_EDITOR_DIALOG_H
#define ICP_EDITOR_DIALOG_H

#include <QDialog>
#include <QTextEdit>
#include <QPushButton>
#include <QBoxLayout>
#include <QFile>
#include <QTextStream>

class EditorDialog : public QDialog {
    Q_OBJECT
public:
    explicit EditorDialog(QWidget *parent = nullptr);
private:
    void saveMap();
};


#endif //ICP_EDITOR_DIALOG_H

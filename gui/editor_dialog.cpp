#include "editor_dialog.h"

EditorDialog::EditorDialog(QWidget *parent) : QDialog(parent) {
    setWindowTitle("Map Editor");
    resize(600, 400); // Adjust the size according to your needs

    auto *textEdit = new QTextEdit(this);
    auto *btnSave = new QPushButton("Save Map", this);

    // Layout to arrange the text edit and button
    auto *layout = new QVBoxLayout();
    layout->addWidget(textEdit);
    layout->addWidget(btnSave);
    setLayout(layout);

    // Connect the save button to the saveMap slot
    connect(btnSave, &QPushButton::clicked, this, &EditorDialog::saveMap);
}

void EditorDialog::saveMap() {
    QFile file("map.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        file.close();
    }
}
#include "gui/main_window.h"
#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QPainter>
#include <QPropertyAnimation>

class SquareWidget : public QWidget {
public:
    SquareWidget(QWidget *parent = nullptr) : QWidget(parent) {
        // Create an animation
        animation = new QPropertyAnimation(this, "geometry");
        animation->setDuration(2000); // Duration in milliseconds
        animation->setStartValue(QRect(0, 100, 100, 100));
        animation->setEndValue(QRect(300, 100, 100, 100));
        animation->setEasingCurve(QEasingCurve::InOutQuad);
        animation->setLoopCount(-1); // Loop indefinitely
        animation->start();
    }

protected:
    void paintEvent(QPaintEvent *event) override {
        QPainter painter(this);
        (void)event;
        painter.setBrush(QBrush(Qt::blue));
        painter.drawRect(0, 0, 100, 100); // Draw a square
    }

private:
    QPropertyAnimation *animation;
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}

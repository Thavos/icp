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

    QWidget mainWidget;
    mainWidget.setWindowTitle("Animated Square");
    mainWidget.resize(400, 400);

    QLabel hello("<center>Welcome to my first Qt program</center>", &mainWidget);
    hello.setAlignment(Qt::AlignCenter);
    hello.resize(400, 100);

    SquareWidget square(&mainWidget);
    square.setGeometry(0, 100, 100, 100);

    QLabel number("1", &square);
    number.setAlignment(Qt::AlignCenter);
    number.resize(100, 100);

    mainWidget.show();
    return app.exec();
}

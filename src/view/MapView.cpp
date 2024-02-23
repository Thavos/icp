#include "MapView.h"
#include <QPainter>

// xhruzs00

/**
 * @brief Constructs a new MapView object.
 * @param parent The parent widget, default is nullptr.
 */
MapView::MapView(QWidget *parent)
    : QWidget(parent), simulationMap(nullptr) {
}

/**
 * @brief Destroys the MapView object.
 */
MapView::~MapView() {
}

/**
 * @brief Paint event handler for drawing the map.
 * @param event The paint event.
 */
void MapView::paintEvent(QPaintEvent *event) {
    QWidget::paintEvent(event);  // Call base class paintEvent

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Define the rectangle (box) dimensions and position
    QRectF rectangle(50.0, 50.0, 100.0, 100.0); // Example: x, y, width, height

    // Set the pen and brush for drawing
    painter.setPen(Qt::black);
    painter.setBrush(Qt::blue);

    // Draw the rectangle (box)
    painter.drawRect(rectangle);
}


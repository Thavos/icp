#ifndef MAPVIEW_H
#define MAPVIEW_H

#include <QWidget>
#include "./src/model/Map.h"

// xhruzs00

/**
 * @brief The MapView class provides a graphical view of the simulation map.
 *
 * This class is responsible for rendering the map and its elements, such as 
 * robots and obstacles, to the screen.
 */
class MapView : public QWidget {
    Q_OBJECT

public:
    /**
     * @brief Constructor for MapView.
     * @param parent The parent widget, default is nullptr.
     */
    explicit MapView(QWidget *parent = nullptr);

    /**
     * @brief Destructor for MapView.
     */
    ~MapView();

protected:
    /**
     * @brief Paint event handler for drawing the map.
     * @param event The paint event.
     */
    void paintEvent(QPaintEvent *event) override;

private:
    Map* simulationMap;  // Pointer to the simulation map
};

#endif

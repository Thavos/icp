#ifndef MAP_H
#define MAP_H

#include <vector>
#include "./src/observer/Observable.h"
#include "./src/model/Obstacle.h"

// xhruzs00

/**
 * @brief The Map class represents the simulation environment.
 *
 * This class stores the layout and properties of the simulation environment,
 * including obstacles and other features. It can be observed by other
 * objects for changes.
 */
class Map : public Observable {
public:
    /**
     * @brief Constructor for Map.
     */
    Map();

    /**
     * @brief Destructor for Map.
     */
    ~Map();

    /**
     * @brief Adds an obstacle to the map.
     * 
     * @param obstacle The obstacle to add to the map.
     */
    void addObstacle(const Obstacle& obstacle);

    void clearObstacles();
    std::vector<Obstacle>& getObstacles();
    float getWidth();
    float getHeight();

private:
    std::vector<Obstacle> obstacles;  // List of obstacles on the map
    float width, height; // Map dimensions
};

#endif

#include "Map.h"

// xhruzs00

/**
 * @brief Constructs a new Map object.
 */
Map::Map() {
}

/**
 * @brief Destroys the Map object.
 */
Map::~Map() {
}

/**
 * @brief Adds an obstacle to the map.
 * 
 * @param obstacle The obstacle to add to the map.
 */
void Map::addObstacle(const Obstacle& obstacle) {
    obstacles.push_back(obstacle);
    // Notify observers about the change in the map
    notifyObservers();
}

void Map::clearObstacles(){
    obstacles.clear();
}

std::vector<Obstacle>& Map::getObstacles() {
    return obstacles;
}

float Map::getWidth() {return width;}
float Map::getHeight() {return height;}


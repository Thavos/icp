#include "Obstacle.h"

// xhruzs00

/**
 * @brief Constructs a new Obstacle object.
 */
Obstacle::Obstacle(float x, float y, float width, float height, float rotation)
    : x(x), y(y), width(width), height(height), rotation(rotation) {}

/**
 * @brief Destroys the Obstacle object.
 */
Obstacle::~Obstacle() {}


float Obstacle::getX() { return x; }
float Obstacle::getY() { return y; }
float Obstacle::getWidth() { return width; }
float Obstacle::getHeight() { return height; }
float Obstacle::getRotation() { return rotation; }


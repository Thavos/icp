#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "./src/observer/Observable.h" // If Obstacle is an observable

// xhruzs00

/**
 * @brief The Obstacle class represents an obstacle in the simulation.
 *
 * This class stores the properties of an obstacle. It can be observed
 * by other objects, like robots, to react to its presence or changes.
 */
class Obstacle : public Observable {
public:
    /**
     * @brief Constructor for Obstacle.
     */
    Obstacle(float x, float y, float width, float height, float rotation);

    /**
     * @brief Destructor for Obstacle.
     */
    ~Obstacle();

    float getX();
    float getY();
    float getWidth();
    float getHeight();
    float getRotation();

private:
    float x, y;
    float width, height;
    float rotation;
};

#endif

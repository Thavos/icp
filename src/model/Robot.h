#ifndef ROBOT_H
#define ROBOT_H

#include "./src/observer/Observable.h"

// xhruzs00

/**
 * @brief The Robot class represents a robot in the simulation.
 *
 * This class stores the state and behavior of a robot. It can be observed
 * by other objects for changes in its state.
 */
class Robot : public Observable {
public:
    /**
     * @brief Constructor for Robot.
     */
    Robot();

    /**
     * @brief Destructor for Robot.
     */
    ~Robot();

    /**
     * @brief Moves the robot by a given distance.
     * 
     * @param distance The distance to move the robot.
     */
    void move(float distance);

private:
};

#endif

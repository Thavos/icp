#include "Robot.h"

// xhruzs00

/**
 * @brief Constructs a new Robot object.
 */
Robot::Robot() {
}

/**
 * @brief Destroys the Robot object.
 */
Robot::~Robot() {
}

/**
 * @brief Moves the robot by a given distance.
 * 
 * @param distance The distance to move the robot.
 */
void Robot::move(float distance) {
    notifyObservers();
}

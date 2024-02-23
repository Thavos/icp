#include "SimulationController.h"

// xhruzs00

/**
 * @brief Constructs a new SimulationController object.
 */
SimulationController::SimulationController() {
}

/**
 * @brief Destroys the SimulationController object.
 */
SimulationController::~SimulationController() {
}

/**
 * @brief Starts the simulation process.
 */
void SimulationController::startSimulation() {
    isSimulationRunning = true;
}

/**
 * @brief Pauses the simulation.
 */
void SimulationController::pauseSimulation() {
    isSimulationRunning = false;
}

/**
 * @brief Resumes the simulation.
 */
void SimulationController::resumeSimulation() {
    isSimulationRunning = true;
}


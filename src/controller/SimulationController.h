#ifndef SIMULATIONCONTROLLER_H
#define SIMULATIONCONTROLLER_H

#include "./src/model/Robot.h"
#include "./src/model/Map.h"
#include "./src/view/MapView.h"

// xhruzs00

/**
 * @brief The SimulationController class controls and manages the robot simulation.
 *
 * This class is responsible for initializing the simulation, managing the simulation loop,
 * and handling interactions between various components like robots and the map.
 */
class SimulationController {
public:
    /**
     * @brief Constructor for SimulationController.
     */
    SimulationController();

    /**
     * @brief Destructor for SimulationController.
     */
    ~SimulationController();

    /**
     * @brief Starts the simulation process.
     */
    void startSimulation();

    /**
     * @brief Pauses the simulation.
     */
    void pauseSimulation();

    /**
     * @brief Resumes the simulation.
     */
    void resumeSimulation();

private:
    Map *simulationMap;     // The simulation environment
    std::vector<Robot> robots;  // List of robots in the simulation

    bool isSimulationRunning;   // Flag to check if the simulation is currently running
};

#endif

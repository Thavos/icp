#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "Observer.h"
#include <vector>
#include <algorithm>

// xhruzs00

/**
 * @brief The Observable class for implementing the Observer pattern.
 * 
 * This class maintains a list of its dependents, Observers, and notifies
 * them of any changes to its state.
 */
class Observable {
private:
    std::vector<Observer*> observers; ///< List of observers.

public:
    /**
     * @brief Virtual destructor.
     */
    virtual ~Observable() {}

    /**
     * @brief Add an observer to the list.
     * 
     * @param observer Pointer to the observer to add.
     */
    void addObserver(Observer* observer) {
        observers.push_back(observer);
    }

    /**
     * @brief Remove an observer from the list.
     * 
     * @param observer Pointer to the observer to remove.
     */
    void removeObserver(Observer* observer) {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

protected:
    /**
     * @brief Notify all registered observers.
     * 
     * This method calls the `update()` method on all registered observers.
     */
    void notifyObservers() {
        for (Observer* observer : observers) {
            observer->update();
        }
    }
};

#endif
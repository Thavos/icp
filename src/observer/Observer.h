#ifndef OBSERVER_H
#define OBSERVER_H

// xhruzs00

/**
 * @brief The Observer interface for implementing the Observer pattern.
 * 
 * Classes that need to be notified about changes in Observable objects
 * should implement this interface.
 */
class Observer {
public:
    /**
     * @brief Virtual destructor.
     */
    virtual ~Observer() {}

    /**
     * @brief Update method called by Observables.
     * 
     * This method is called whenever the observed object is changed.
     * 
     * @note This method can be modified to include more parameters to pass specific data.
     */
    virtual void update() = 0;
};

#endif
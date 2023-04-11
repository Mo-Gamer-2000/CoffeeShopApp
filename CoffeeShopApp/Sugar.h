#ifndef SUGAR_H // header guard to prevent multiple includes
#define SUGAR_H

#include "Extras.h" // include the base class header
#include <memory> // include the <memory> library for smart pointers

class Sugar : public Extras { // define the Sugar class which inherits from the Extras class
public:
    Sugar(std::shared_ptr<Coffee> coffee); // constructor which takes a shared pointer to a Coffee object
    std::string get_name() const override; // override the base class function to return the name of the extra
    double cost() const override; // override the base class function to return the cost of the extra
};

#endif // SUGAR_H

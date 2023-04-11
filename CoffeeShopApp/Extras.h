// Header guard to prevent multiple includes of the same header file
#ifndef EXTRAS_H
#define EXTRAS_H

#include "Coffee.h" // Include the base class header file
#include <memory> // Include the <memory> library for smart pointers

class Extras : public Coffee { // Declare a derived class Extras that inherits from the base class Coffee
public:
	Extras(std::shared_ptr<Coffee> coffee); // Declare a constructor that takes a shared pointer to a Coffee object
	std::string get_name() const override; // Declare a function to get the name of the extra
	double cost() const override; // Declare a function to get the cost of the extra

private:
	std::shared_ptr<Coffee> coffee; // Declare a private member variable that holds a shared pointer to a Coffee object
};

#endif // EXTRAS_H
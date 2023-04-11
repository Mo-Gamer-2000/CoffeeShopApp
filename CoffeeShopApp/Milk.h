// Include guards to prevent multiple inclusions of the header file
#ifndef MILK_H
#define MILK_H

#include "Extras.h"  // Include the base class header
#include <memory>    // Include the <memory> library for std::shared_ptr

class Milk : public Extras {  // Declare the Milk class, which is a subclass of Extras
public:
	// Constructor that takes a shared pointer to a Coffee object and passes it to the base class constructor
	Milk(std::shared_ptr<Coffee> coffee);

	// Override the get_name() method of the base class to return the name of the coffee with ", Milk" appended
	std::string get_name() const override;

	// Override the cost() method of the base class to return the cost of the coffee plus the cost of the milk ($0.50)
	double cost() const override;
};

#endif // MILK_H

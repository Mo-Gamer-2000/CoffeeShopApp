// include the header file for the Extras class
#include "Extras.h"  

// Constructor for the Extras class, takes in a shared pointer to a Coffee object
Extras::Extras(std::shared_ptr<Coffee> coffee) : Coffee("", 0.0), coffee{ coffee } {}

// Get the name of the coffee with the extra, returns a string
std::string Extras::get_name() const
{
	// Calls the get_name() function of the Coffee object passed in to the constructor and adds the extra to the end
	return coffee->get_name();
}

// Get the cost of the coffee with the extra, returns a double
double Extras::cost() const
{
	// Calls the cost() function of the Coffee object passed in to the constructor and adds the extra cost to it
	return coffee->cost();
}

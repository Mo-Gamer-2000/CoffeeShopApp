// Include the header file for the Sugar class
#include "Sugar.h"

// Constructor of the Sugar class that takes a shared pointer to Coffee as input
Sugar::Sugar(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

// Implementation of the get_name() function that returns a string
// concatenating the name of the Coffee object with ", Sugar"
std::string Sugar::get_name() const
{
	return Extras::get_name() + ", Sugar";
}

// Implementation of the cost() function that returns the cost of the Coffee object
// incremented by the cost of the Sugar which is 0.25
double Sugar::cost() const
{
	return Extras::cost() + 0.25;
}
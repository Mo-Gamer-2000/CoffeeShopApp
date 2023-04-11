// include the header file for the Cinnamon class
#include "Cinnamon.h"

// Constructor for Cinnamon which takes in a shared pointer to Coffee
Cinnamon::Cinnamon(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

// Implementation of get_name method which returns the name of the Coffee with "Cinnamon" appended to it
std::string Cinnamon::get_name() const
{
	return Extras::get_name() + ", Cinnamon";
}

// Implementation of cost method which returns the cost of the Coffee with an additional cost of 0.25 for Cinnamon
double Cinnamon::cost() const
{
	return Extras::cost() + 0.25;
}

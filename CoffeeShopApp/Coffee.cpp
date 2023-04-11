// include the header file for the Coffee class
#include "Coffee.h"   

// constructor for Coffee class that takes in a name and price
Coffee::Coffee(std::string name, double price) : name{ name }, price{ price } {}

// method to get the name of the coffee
std::string Coffee::get_name() const
{
	return name;
}

// method to get the cost of the coffee
double Coffee::cost() const
{
	return price;
}

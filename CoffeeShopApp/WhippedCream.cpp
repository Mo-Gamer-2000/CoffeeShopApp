// Including the header file for the WhippedCream class
#include "WhippedCream.h"

// Constructor for the WhippedCream class that takes a shared pointer to a Coffee object as argument and calls the constructor of the base class Extras with that argument
WhippedCream::WhippedCream(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

// A function that returns a string consisting of the name of the base Coffee object followed by ", WhippedCream"
std::string WhippedCream::get_name() const
{
	return Extras::get_name() + ", WhippedCream";
}

// A function that returns the cost of the base Coffee object plus the cost of adding WhippedCream, which is 0.75
double WhippedCream::cost() const
{
	return Extras::cost() + 0.75;
}
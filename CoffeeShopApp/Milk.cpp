// Include the header file for the Milk class
#include "Milk.h"   

// Constructor for the Milk class
Milk::Milk(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

// Return the name of the coffee with Milk as an extra
std::string Milk::get_name() const
{
    return Extras::get_name() + ", Milk";
}

// Return the cost of the coffee with Milk as an extra
double Milk::cost() const
{
    return Extras::cost() + 0.50;
}

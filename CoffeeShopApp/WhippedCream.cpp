#include "WhippedCream.h"

WhippedCream::WhippedCream(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

std::string WhippedCream::get_name() const
{
	return Extras::get_name() + ", WhippedCream";
}

double WhippedCream::cost() const
{
	return Extras::cost() + 0.75;
}

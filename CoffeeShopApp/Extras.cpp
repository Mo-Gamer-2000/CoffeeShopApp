#include "Extras.h"

Extras::Extras(std::shared_ptr<Coffee> coffee) : Coffee("", 0.0), coffee{ coffee } {}

std::string Extras::get_name() const
{
	return coffee->get_name();
}

double Extras::cost() const
{
	return coffee->cost();
}

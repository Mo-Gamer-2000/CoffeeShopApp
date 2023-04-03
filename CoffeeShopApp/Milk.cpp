#include "Milk.h"

Milk::Milk(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

std::string Milk::get_name() const
{
	return Extras::get_name() + ", Milk";
}

double Milk::cost() const
{
	return Extras::cost() + 0.50;
}
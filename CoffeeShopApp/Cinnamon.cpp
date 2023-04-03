#include "Cinnamon.h"

Cinnamon::Cinnamon(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

std::string Cinnamon::get_name() const
{
	return Extras::get_name() + ", Cinnamon";
}

double Cinnamon::cost() const
{
	return Extras::cost() + 0.25;
}

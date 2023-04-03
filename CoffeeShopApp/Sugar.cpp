#include "Sugar.h"

Sugar::Sugar(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

std::string Sugar::get_name() const
{
	return Extras::get_name() + ", Sugar";
}

double Sugar::cost() const
{
	return Extras::cost() + 0.25;
}

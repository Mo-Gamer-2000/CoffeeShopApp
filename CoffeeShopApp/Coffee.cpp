#include "Coffee.h"

Coffee::Coffee(std::string name, double price) : name{ name }, price{ price } {}

std::string Coffee::get_name() const
{
	return name;
}

double Coffee::cost() const
{
	return price;
}

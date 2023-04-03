// Milk.h
#ifndef MILK_H
#define MILK_H

#include "Extras.h"
#include <memory>

class Milk : public Extras {
public:
	Milk(std::shared_ptr<Coffee> coffee);
	std::string get_name() const override;
	double cost() const override;
};

#endif // MILK_H
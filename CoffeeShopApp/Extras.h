#ifndef EXTRAS_H
#define EXTRAS_H

#include "Coffee.h"
#include <memory>

class Extras : public Coffee {
public:
	Extras(std::shared_ptr<Coffee> coffee);
	std::string get_name() const override;
	double cost() const override;

private:
	std::shared_ptr<Coffee> coffee;
};

#endif // EXTRAS_H

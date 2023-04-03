#ifndef CINNAMON_H
#define CINNAMON_H

#include "Extras.h"
#include <memory>

class Cinnamon : public Extras {
public:
	Cinnamon(std::shared_ptr<Coffee> coffee);
	std::string get_name() const override;
	double cost() const override;
};

#endif // CINNAMON_H
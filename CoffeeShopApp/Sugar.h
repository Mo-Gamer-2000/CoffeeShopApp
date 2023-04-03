#ifndef SUGAR_H
#define SUGAR_H

#include "Extras.h"
#include <memory>

class Sugar : public Extras {
public:
	Sugar(std::shared_ptr<Coffee> coffee);
	std::string get_name() const override;
	double cost() const override;
};

#endif // SUGAR_H
#ifndef WHIPPEDCREAM_H
#define WHIPPEDCREAM_H

#include "Extras.h"
#include <memory>

class WhippedCream : public Extras {
public:
	WhippedCream(std::shared_ptr<Coffee> coffee);
	std::string get_name() const override;
	double cost() const override;
};

#endif // WHIPPEDCREAM_H
#ifndef COFFEE_H
#define COFFEE_H

#include <string>

class Coffee {
public:
	Coffee(std::string name, double price);
	virtual std::string get_name() const;
	virtual double cost() const;

private:
	std::string name;
	double price;
};

#endif // COFFEE_H

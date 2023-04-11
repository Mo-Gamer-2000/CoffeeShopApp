#ifndef COFFEE_H // Include guard to prevent multiple inclusions of this file
#define COFFEE_H

#include <string>

class Coffee {
public:
	Coffee(std::string name, double price); // Constructor with name and price parameters
	virtual std::string get_name() const; // Virtual function to get the name of the coffee
	virtual double cost() const; // Virtual function to get the cost of the coffee

private:
	std::string name; // Name of the coffee
	double price; // Price of the coffee
};

#endif // COFFEE_H

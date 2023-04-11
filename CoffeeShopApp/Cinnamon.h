#ifndef CINNAMON_H	// Header guard to prevent multiple includes
#define CINNAMON_H

#include "Extras.h"  // Include the base class header file
#include <memory>    // Include the memory library for shared_ptr

class Cinnamon : public Extras {	// Declare the Cinnamon class, which inherits from Extras
public:
	Cinnamon(std::shared_ptr<Coffee> coffee);		// Constructor that takes in a shared_ptr to Coffee
	std::string get_name() const override;			// Override the base class function to get the name with Cinnamon
	double cost() const override;					// Override the base class function to add the cost of Cinnamon
};

#endif // End of header guard
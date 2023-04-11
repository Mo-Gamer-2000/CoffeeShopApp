#ifndef WHIPPEDCREAM_H  // Header guard to prevent multiple includes
#define WHIPPEDCREAM_H

#include "Extras.h"  // Include the base class header file
#include <memory>    // Include the memory library for shared_ptr

class WhippedCream : public Extras {  // Declare the WhippedCream class, which inherits from Extras
public:
    WhippedCream(std::shared_ptr<Coffee> coffee);  // Constructor that takes in a shared_ptr to Coffee
    std::string get_name() const override;         // Override the base class function to get the name with WhippedCream
    double cost() const override;                  // Override the base class function to add the cost of WhippedCream
};

#endif  // End of header guard

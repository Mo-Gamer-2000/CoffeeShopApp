// This program simulates a coffee shop order system.
// It allows the user to select a coffee size, type and add condiments.
// The program then calculates and outputs the total cost of the order.

#include <iostream>
#include <vector>
#include <memory>
#include <string>

#include "Coffee.h"
#include "Extras.h"
#include "Milk.h"
#include "Sugar.h"
#include "WhippedCream.h"
#include "Cinnamon.h"

int main() {
	// Welcome message and coffee size options
	std::cout << "Welcome to the Mo's Coffee Shop!" << std::endl;
	std::cout << "Please select your coffee size: " << std::endl;
	std::cout << "1. Small  ($2.00)" << std::endl;
	std::cout << "2. Medium ($3.00)" << std::endl;
	std::cout << "3. Large  ($4.00)" << std::endl;
	std::cout << "Enter your choice (1-3): ";

	// User input for coffee size
	int choice;
	std::cin >> choice;

	double base_price = 0.0;

	// Assigning base price based on user input
	if (choice == 1)
		base_price = 2.00;
	else if (choice == 2)
		base_price = 3.00;
	else if (choice == 3)
		base_price = 4.00;

	// Checking if input was valid and terminating program if it wasn't
	if (base_price == 0.0)
	{
		std::cout << "Invalid choice!" << std::endl;
		return 1;
	}

	// Coffee type options
	std::cout << "Please select your coffee type: " << std::endl;
    std::cout << "1. Espresso" << std::endl;
    std::cout << "2. Latte" << std::endl;
    std::cout << "3. Cappuccino" << std::endl;
    std::cout << "4. Americano" << std::endl;
    std::cout << "5. Mocha" << std::endl;
    std::cout << "Enter your choice (1-5): ";

	// User input for coffee type
	std::cin >> choice;
	std::string coffee_type;

	// Assigning coffee type based on user input
	switch (choice)
	{
	case 1:
		coffee_type = "Espresso";
		break;
	case 2:
		coffee_type = "Latte";
		break;
	case 3:
		coffee_type = "Cappuccino";
		break;
	case 4:
		coffee_type = "Americano"; 
		break;
	case 5:
		coffee_type = "Mocha"; 
		break;
	default:
		std::cout << "invalid choice!" << std::endl;
		return 1;
	}

	// Creating coffee object with selected type and base price
	std::shared_ptr<Coffee> coffee = std::make_shared<Coffee>(coffee_type, base_price);

	char addCondiments;

	// Asking if user wants to add milk and adding it if requested
	std::cout << "Would you like to add Milk for an additional $0.50? (y/n): ";
	std::cin >> addCondiments;

	if (addCondiments == 'y' || addCondiments == 'Y')
		coffee = std::make_shared<Milk>(coffee);

	// Asking if user wants to add sugar and adding it if requested
	std::cout << "Would you like to add Sugar for an additional $0.25? (y/n): ";
	std::cin >> addCondiments;

	if (addCondiments == 'y' || addCondiments == 'Y')
		coffee = std::make_shared<Sugar>(coffee);

	// Asking if user wants to add whipped cream and adding it if requested
	std::cout << "Would you like to add Whipped Cream for an additional $0.75? (y/n): ";
	std::cin >> addCondiments;

	if (addCondiments == 'y' || addCondiments == 'Y')
		coffee = std::make_shared<WhippedCream>(coffee);

	// Asking if user wants to add cinnamon and adding it if requested
	std::cout << "Would you like to add Cinnamon for an additional $0.35? (y/n): ";
	std::cin >> addCondiments;

	if (addCondiments == 'y' || addCondiments == 'Y')
		coffee = std::make_shared<Cinnamon>(coffee);

	// Display the order details and a message at the end
	std::cout << "Order details:" << std::endl;
	std::cout << "Order: " << coffee->get_name() << std::endl;
	std::cout << "Total cost: $" << coffee->cost() << std::endl;

	std::cout << "Enjoy your coffee!" << std::endl;

	// Return 0 to indicate successful program completion
	return 0;
}
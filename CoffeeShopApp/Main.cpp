#include <iostream>
#include <vector>
#include <memory>
#include <string>

class Coffee {
public:
	Coffee(std::string name, double price) : name{ name }, price{ price } {}

		virtual std::string get_name() const 
		{
			return name;
		}

		virtual double cost() const
		{
			return price;
		}

private:
	std::string name;
	double price;
	
};

class Extras : public Coffee {
public:
	Extras(std::shared_ptr<Coffee> coffee) : Coffee("", 0.0), coffee{ coffee } {}

		std::string get_name() const override
		{
			return coffee->get_name();
		}

		double cost() const override
		{
			return coffee->cost();
		}
	
private:
	std::shared_ptr<Coffee> coffee;
};

class Milk : public Extras {
public:
	Milk(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

	std::string get_name() const override
	{
		return Extras::get_name() + ", Milk";
	}

	double cost() const override
	{
		return Extras::cost() + 0.50;
	}
};

class Sugar : public Extras {
public:
	Sugar(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

	std::string get_name() const override
	{
		return Extras::get_name() + ", Sugar";
	}

	double cost() const override
	{
		return Extras::cost() + 0.25;
	}
};

class WhippedCream : public Extras {
public:
	WhippedCream(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

	std::string get_name() const override
	{
		return Extras::get_name() + ", WhippedCream";
	}

	double cost() const override
	{
		return Extras::cost() + 0.75;
	}
};

class Cinnamon : public Extras {
public:
	Cinnamon(std::shared_ptr<Coffee> coffee) : Extras(coffee) {}

	std::string get_name() const override
	{
		return Extras::get_name() + ", Cinnamon";
	}

	double cost() const override
	{
		return Extras::cost() + 0.35;
	}
};

int main() {
	std::cout << "Welcome to the Mo's Coffee Shop!" << std::endl;
	std::cout << "Please select your coffee size: " << std::endl;
	std::cout << "1. Small  ($2.00)" << std::endl;
	std::cout << "2. Medium ($3.00)" << std::endl;
	std::cout << "3. Large  ($4.00)" << std::endl;
	std::cout << "Enter your choice (1-3): ";

	int choice;
	std::cin >> choice;

	double base_price = 0.0;

	if (choice == 1)
		base_price = 2.00;
	else if (choice == 2)
		base_price = 3.00;
	else if (choice == 3)
		base_price = 4.00;

	if (base_price == 0.0)
	{
		std::cout << "Invalid choice!" << std::endl;
		return 1;
	}

	std::cout << "Please select your coffee type: " << std::endl;
    std::cout << "1. Espresso" << std::endl;
    std::cout << "2. Latte" << std::endl;
    std::cout << "3. Cappuccino" << std::endl;
    std::cout << "4. Americano" << std::endl;
    std::cout << "5. Mocha" << std::endl;
    std::cout << "Enter your choice (1-5): ";

	std::cin >> choice;
	std::string coffee_type;

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
	return 0;
}
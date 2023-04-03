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
	std::cout << "Hello, from the Coffee Shop!" << std::endl;
	return 0;
}
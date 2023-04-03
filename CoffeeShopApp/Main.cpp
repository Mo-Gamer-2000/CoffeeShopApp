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
private:
};

class Sugar : public Extras {
public:
private:
};

class WhippedCream : public Extras {
public:
private:
};

class Cinnamon : public Extras {
public:
private:
};

int main() {
	std::cout << "Hello, from the Coffee Shop!" << std::endl;
	return 0;
}
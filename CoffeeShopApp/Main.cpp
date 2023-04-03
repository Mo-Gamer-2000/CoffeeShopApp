#include <iostream>
#include <vector>
#include <memory>
#include <string>

class Coffee {
public:
private:
};

class Extras : public Coffee {
public:
private:
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
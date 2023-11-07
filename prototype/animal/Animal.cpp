#include "Animal.hpp"

#include <string>

Animal::Animal(std::string name) : name(name), tiredness(0), hunger(0) {}

std::string Animal::getName() {
	return name;
}

void Animal::sleep(int minutes) {
	if (tiredness - (minutes / 6) < 0)
		tiredness = 0;
	else
		tiredness -= (minutes / 6);
}

void Animal::eat(int calories) {
	if (hunger - (calories / 100) < 0)
		hunger = 8; //over-eat and throw up
	else
		hunger -= (calories / 100);
}

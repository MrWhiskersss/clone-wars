#include <iostream>
#include <string>
#include "Sheep.hpp"

Sheep::Sheep(std::string name, std::string color) :
	Animal(name), fluff(1), color(color) {}

void Sheep::makeNoise(int times) {
       for (int i = 0; i < times; i ++)
		std::cout << "Baa ";

	std::cout << std::endl;
}

Sheep* Sheep::clone() const {
	return new Sheep(*this);
}

#include <iostream>
#include <string>
#include "Bunny.hpp"

Bunny::Bunny(std::string name) :
	Animal(name), fluff(3) {}

void Bunny::makeNoise(int times) {
	for (int i = 0; i < times; i ++)
		std::cout << "Wheeek ";

	std::cout << std:: endl;
}

Bunny* Bunny::clone() const {
	return new Bunny(*this);
}

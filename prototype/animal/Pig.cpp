#include <string>
#include <iostream>
#include "Pig.hpp"

Pig::Pig(std::string name) :
	Animal(name), filth(0), size(1) {}

void Pig::makeNoise(int times) {
	for (int i = 0; i < times; i ++)
		std::cout << "Oink ";

	std::cout << std::endl;
}

void Pig::eat(int calories) {
	if (hunger - (calories / 80) < 0) {
		hunger = 0;
		if (size < 10)
			size += 1;
	} else {
		hunger -= (calories / 80);
	}
}

Pig* Pig::clone() const {
	return new Pig(*this);
}

void Pig::wallow(int time) {
	filth += time / 20;
	if (filth > 100)
		filth = 100;
}

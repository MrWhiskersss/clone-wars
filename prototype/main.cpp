#include <string>
#include <iostream>
#include <vector>

#include "animal/Animal.hpp"
#include "animal/Bunny.hpp"
#include "animal/Sheep.hpp"
#include "animal/Pig.hpp"

int main() {
	std::vector<Animal*> original;
	std::vector<Animal*> clone;

	original.push_back(new Sheep("Norman", "Black"));
	original.push_back(new Bunny("Gunthir"));
	original.push_back(new Pig("Oswald"));

	for (Animal* animal : original)
		clone.push_back(animal->clone());

	for (int ndex = 0; ndex < (int)clone.size(); ndex ++) {
		std::cout << "ORIGINAL: "
			<< original.at(ndex)->getName() << " " 
			<< original.at(ndex) << "\n";

		std::cout << "CLONE:    "
			<< clone.at(ndex)->getName() << " "
			<< clone.at(ndex) << "\n";

		std::cout << "\n";
	}

	return 0;
}

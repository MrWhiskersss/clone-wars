#ifndef SHEEP
#define SHEEP

#include "Animal.hpp"
#include <string>

class Sheep : public Animal {
	private:
		int fluff;
		std::string color;

	public:
		Sheep(std::string name, std::string color);
		void makeNoise(int times);
		Sheep* clone() const;
};

#endif

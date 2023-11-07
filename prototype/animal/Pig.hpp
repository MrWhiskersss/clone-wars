#ifndef PIG
#define PIG

#include "Animal.hpp"
#include <string>

class Pig : public Animal {
	private:
		int filth;
		int size;
	public:
		Pig(std::string name);
		void makeNoise(int times);
		void eat(int calories);
		Pig* clone() const;
		void wallow(int time);
};

#endif

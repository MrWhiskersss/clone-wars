#ifndef ANIMAL
#define ANIMAL

#include <string>

class Animal {
	protected:
		std::string name;
		int tiredness;
		int hunger;
		
	public:
		Animal(std::string name);
		virtual std::string getName();
		virtual void sleep(int minutes);
		virtual void eat(int calories);
		virtual void makeNoise(int times) = 0;
		virtual Animal* clone() const = 0;
};

#endif

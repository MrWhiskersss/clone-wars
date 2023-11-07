#ifndef BUNNY
#define BUNNY

#include "Animal.hpp"
#include <string>

class Bunny : public Animal {
	private:
		int fluff;

	public:
		Bunny(std::string name);
		void makeNoise(int times);
		Bunny* clone() const;
};

#endif

#pragma once
#include "Fruits.h"

class Pear : public Fruits
{
private:
	std::string weight;
public:
	// Constructors.
	Pear();
	Pear(int quantity);

};


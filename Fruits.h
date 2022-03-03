#pragma once

#include<iostream>
#include <stdio.h>
#include <string>

class Fruits
{
private:
	std::string type;
	int quantity;

	
public:
	// Constructors.
	Fruits();
	Fruits(std::string type);
	Fruits(std::string type, int quantity);

	// Destructors.
	~Fruits();

	// Other methods.
	int get_quantity();
	std::string get_type();
	void set_quantity(int quantity);
	void set_type(std::string type);
};


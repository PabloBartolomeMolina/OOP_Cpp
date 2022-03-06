#pragma once

#include<iostream>
#include <stdio.h>
#include <string>

class Fruits
{
private:
	std::string type;
	std::string weight;
	int quantity;

	
public:
	// Constructors.
	Fruits();
	Fruits(std::string type);
	Fruits(std::string type, std::string weight);
	Fruits(std::string type, std::string weight, int quantity);

	// Destructors.
	~Fruits();

	// Other methods.
	int get_quantity();
	std::string get_type();
	std::string get_weight();
	void set_quantity(int quantity);
	void set_type(std::string type);
};


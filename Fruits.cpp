#include "Fruits.h"


/*
* Default Constructor.
*	- Quantity set to 0.
*	- Type set to Unknown.
*	- Weight set to 0 grams.
*/
Fruits::Fruits()
{
	this->quantity = 0;
	this->type = "Unknown";
	this->weight = "0grams";

	std::cout << "Type of fruit : " << this->type << std::endl;
	std::cout << "Quantity of fruit : " << this->quantity << std::endl << std::endl;
	std::cout << "Weight of fruit : " << this->weight << std::endl << std::endl;
}


/*
* Constructor to set a specific type of fruit.
*	- Quantity set to 0.
*	- Type set to the passed type.
*   - Weight set to 0 grams.
*/
Fruits::Fruits(std::string type)
{
	this->quantity = 0;
	this->type = type;
	this->weight = "0grams";

	std::cout << "Type of fruit : " << this->type << std::endl;
	std::cout << "Quantity of fruit : " << this->quantity << std::endl;
	std::cout << "Weight of fruit : " << this->weight << std::endl << std::endl;
}


/*
* Constructor to set a specific type of fruit.
*	- Quantity set to 0.
*	- Type set to the passed type.
*	- Weight set to the passed weight.
*/
Fruits::Fruits(std::string type, std::string weight)
{
	this->quantity = 0;
	this->type = type;
	this->weight = weight;

	std::cout << "Type of fruit : " << this->type << std::endl;
	std::cout << "Quantity of fruit : " << this->quantity << std::endl;
	std::cout << "Weight of fruit : " << this->weight << std::endl << std::endl;
}


/*
* Constructor to set a specific type of fruit and a specific quantity.
*	- Quantity set to the passed quantity.
*	- Type set to the passed type.
*	- Weight set to the passed weight.
*/
Fruits::Fruits(std::string type, std::string weight, int quantity)
{
	this->quantity = quantity;
	this->weight = weight;
	this->type = type;

	std::cout << "Type of fruit : " << this->type << std::endl;
	std::cout << "Quantity of fruit : " << this->quantity << std::endl;
	std::cout << "Weight of fruit : " << this->weight << std::endl << std::endl;
}


/*
* Destructor of the class.
*/
Fruits::~Fruits()
{
	std::cout << "Inside the destructor of Fruits." << std::endl;
}
/*
* Function to set the quantity of a specific type of fruits.
*	OUTPUT PARAMETERS:
*	- quantity : integer with the quantity.
*/
int Fruits::get_quantity()
{

	return this->quantity;
}


/*
* Function to get the type of fruit.
*	OUTPUT PARAMETERS:
*	- type : string with the type of fruit.
*/
std::string Fruits::get_type()
{
	return this->type;
}

/*
* Function to get the weight of fruit.
*	OUTPUT PARAMETERS:
*	- type : string with the weight of fruit.
*/
std::string Fruits::get_weight()
{
	return this->weight;
}


/*
* Function to set the quantity of a specific type of fruits.
*	INPUT PARAMETERS:
*	- quantity : integer with the quantity.
*/
void Fruits::set_quantity(int quantity)
{
	this->quantity = quantity;
}


/*
* Function to set the type of fruit.
*	INPUT PARAMETERS:
*	- type : string with the type of fruit.
*/
void Fruits::set_type(std::string type)
{
	this->type = type;
}

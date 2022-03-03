#include "Fruits.h"


/*
* Default Constructor.
*	- Quantity set to 0.
*	- Type set to Unknown.
*/
Fruits::Fruits()
{
	this->quantity = 0;
	this->type = "Unknown";

	std::cout << "Type of fruit : " << this->type << std::endl;
	std::cout << "Quantity of fruit : " << this->quantity << std::endl << std::endl;
}


/*
* Constructor to set a specific type of fruit.
*	- Quantity set to 0.
*	- Type set to the passed type.
*/
Fruits::Fruits(std::string type)
{
	this->quantity = 0;
	this->type = type;

	std::cout << "Type of fruit : " << this->type << std::endl;
	std::cout << "Quantity of fruit : " << this->quantity << std::endl << std::endl;
}


/*
* Constructor to set a specific type of fruit and a specific quantity.
*	- Quantity set to the passed quantity.
*	- Type set to the passed type.
*/
Fruits::Fruits(std::string type, int quantity)
{
	this->quantity = quantity;
	this->type = type;

	std::cout << "Type of fruit : " << this->type << std::endl;
	std::cout << "Quantity of fruit : " << this->quantity << std::endl << std::endl;
}


/*
* Destructor of the class.
*/
Fruits::~Fruits()
{
	std::cout << "Inside the destructor" << std::endl;
}
/*
* Function to set the quantity of a specific type of fruits.
*	OUTPUT PARAMETERS:
*	- quantity : integer with the quantity.
*/
int Fruits::get_quantity()
{

	return quantity;
}


/*
* Function to get the type of fruit.
*	OUTPUT PARAMETERS:
*	- type : string with the type of fruit.
*/
std::string Fruits::get_type()
{
	return type;
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

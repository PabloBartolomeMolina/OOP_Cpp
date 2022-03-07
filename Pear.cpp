#include "Pear.h"

/*
* Default Constructor.
*	- Quantity set to 0.
*	- Type set to Pear.
*/
Pear::Pear() : Fruits("Pear", "150grams")
{ }

/*
* Constructor to set a specific type of fruit and a specific quantity.
*	- Quantity set to the passed quantity.
*	- Type set to Pear.
*/
Pear::Pear(int quantity) : Fruits("Pear", "150grams", quantity)
{ }


/*
* Destructor of the class.
*/
Pear::~Pear()
{
	std::cout << "Inside the destructor of Pear." << std::endl;
}


/*
* Get all data of the object in the console.
*/
void Pear::getData()
{
	std::cout << "Type of fruit : " << this->get_type() << std::endl;
	std::cout << "Weight of fruit : " << this->get_weight() << std::endl;
	std::cout << "Units of fruit : " << this->get_quantity() << std::endl << std::endl;
}
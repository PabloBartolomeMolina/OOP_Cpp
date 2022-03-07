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
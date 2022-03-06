#include "Pear.h"

/*
* Default Constructor.
*	- Quantity set to 0.
*	- Type set to Pear.
*/
Pear::Pear() : Fruits("Pear") { }

/*
* Constructor to set a specific type of fruit and a specific quantity.
*	- Quantity set to the passed quantity.
*	- Type set to Pear.
*/
Pear::Pear(int quantity) : Fruits("Pear", quantity) { }
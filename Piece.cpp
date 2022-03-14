#include "Piece.h"

/*
* Default Constructor.
*	- Quantity set to 0.
*	- Type set to Unknown.
*	- Weight set to 0 grams.
*/
Piece::Piece()
{
	// Asssign default values that allow to identify the piece as a default one, not corresponding to a real piece.
	this->type = "Unknown";
	this->name = "Unknown";
	this->color = "Unknown";
	this->currentPosition = "Unknown";
	this->value = 0;

	std::cout << "DEFAULT PIECE created" << std::endl;
}


/*
* Parametrized Constructor.
*	- Type set to 0.
*	- Name set to Unknown.
*	- Value set to 0 points.
*/
Piece::Piece(std::string type, std::string name, std::string color, std::string currentPosition, int value)
{
	// Asssign the passed values that allow to uniquely identify the piece.
	this->type = type;
	this->name = name;
	this->color = color;
	this->currentPosition = currentPosition;
	this->value = value;

	std::cout << "New piece created" << std::endl;
}


/*
* Destructor of the class.
*/
Piece::~Piece()
{
	std::cout << this->name << " was destroyed." << std::endl;
}


// Private methods.

/*
* Check if the movement is possible given the currentPosition and the newPosition.
* Note that this method will be override since each piece move differently.
* Return True is just the default code for base class.
*/
bool Piece::validMovement(std::string currentPosition, std::string newPosition)
{
	std::cout << "Generic" << std::endl;
	return true;
}

// Public methods.

/*
* Set a new position according to parameter newPosition.
*/
void Piece::setNewPosition(std::string newPosition)
{
	this->currentPosition = newPosition;
}
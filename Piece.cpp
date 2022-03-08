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
*	- Value set to 0 grams.
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
#include "Tower.h"


Tower::Tower() : Piece("Tower", "DefaultTower", "DefaultColor", "DefaultPosition", 5)
{

}

/*
* Parametrized Constructor.
*	- Type set to 2.
*	- Name set to name parameter.
*	- Value set to 5 points.
*/
Tower::Tower(std::string name, std::string color, std::string currentPosition) : Piece("Tower", name, color, currentPosition, 5)
{
	std::cout << "Tower created!" << std::endl;
}

/*
* Destructor.
*/
Tower::~Tower()
{
	std::cout << "Tower destroyed !" << std::endl;
}

/*
* Check if the movement is possible given the currentPosition and the newPosition.
* Note that this method is specific for this type of piece.
*/
bool Tower::validMovement(std::string currentPosition, std::string newPosition)
{
	std::cout << "A tower" << std::endl;
	return true;
}


void Tower::setNewPosition(std::string newPosition)
{

}
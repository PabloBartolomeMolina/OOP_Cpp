#pragma once

#include "Piece.h"

class Tower : public Piece
{
public:
	// Constructor.
	Tower();
	Tower(std::string name, std::string color, std::string currentPosition);

	// Destructor.
	~Tower();

	// Methods.
	void setNewPosition(std::string newPosition);
	bool validMovement(std::string currentPosition, std::string newPosition);
};


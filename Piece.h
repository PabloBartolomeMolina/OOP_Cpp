#pragma once

#include<iostream>
#include <stdio.h>
#include <string>

class Piece
{
private:
	std::string type;				// Type of piece: Pawn, Tower...
	std::string name;				// Name of piece to differentiate the ones with the same type.
	std::string color;				// Color of the piece, black or white.
	std::string currentPosition;	// Current position of the piece.
	int value;						// Value of piece: 1 for Pawn, 3 for Knight and for Bishop...

	virtual bool validMovement(std::string currentPosition, std::string newPosition);

public:
	// Construtors.
	Piece();
	Piece(std::string type, std::string name, std::string color, std::string currentPosition, int value);

	// Destructor.
	~Piece();

	// Methods.
	void setNewPosition(std::string newPosition);
};


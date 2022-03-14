// OOP_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Fruits.h"
#include "Pear.h"

#include "Piece.h"
#include "Tower.h"

int main()
{
    Piece p = Piece();  // Default piece
    Piece pw1 = Piece("pawn", "pw1", "white", "a2", 1); // White pawn.
    Piece pb1 = Piece("pawn", "pb1", "black", "a7", 1); // Black pawn.

    Tower tw1 = Tower();
    tw1.setNewPosition("Tc1");
    tw1.validMovement("c1", "c2");
    Tower tw2 = Tower("Tw1", "white", "a1");
    tw2.validMovement("c1", "c2");
}

/// <summary>
/// Tests for Fruits and related classes.
/// </summary>
void testFruits()
{
    Fruits generic = Fruits();
    Fruits apple = Fruits("Apple");
    //Fruits pears = Fruits("Pear", 6);
    Pear pear = Pear();
    Pear pear_3 = Pear(3);

    std::cout << "Number of apples : " << apple.get_quantity() << std::endl << std::endl;

    pear.getData();
    pear_3.getData();
}
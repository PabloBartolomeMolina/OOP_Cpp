// OOP_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Fruits.h"
#include "Pear.h"

int main()
{
    
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
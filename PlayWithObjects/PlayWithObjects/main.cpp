//
//  main.cpp
//  PlayWithObjects
//
//  Created by Dijoux Jérémy on 17/06/2021.
//
#include "Personnage.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    Personnage david, goliath("Épée aiguisée", 20);
       //Création de 2 objets de type Personnage : david et goliath

       goliath.attack(david); //goliath attaque david
       david.drinkHealthPotion(20); //david récupère 20 de vie en buvant une potion
       goliath.attack(david); //goliath réattaque david
       david.attack(goliath); //david contre-attaque... c'est assez clair non ?
       goliath.switchWeapon("Double hache tranchante vénéneuse de la mort", 40);
       goliath.attack(david);
    
    std::cout << "David : " << std::endl;
    david.displayState();
    std::cout<< "Goliath : " << std::endl;
    goliath.displayState();
    
    return 0;
}

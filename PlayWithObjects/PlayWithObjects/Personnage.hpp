//
//  Personnage.hpp
//  PlayWithObjects
//
//  Created by Dijoux Jérémy on 17/06/2021.
//

#ifndef Personnage_hpp
#define Personnage_hpp
#include <string>
#include <stdio.h>
#include "Arme.hpp"

class Personnage {
    
public:
    Personnage();
    Personnage(std::string weaponName, int weaponDamage);
    void takeDamages(int damageTaken);
    void attack(Personnage &target);
    void drinkHealthPotion(int potionValue);
    void switchWeapon(std::string newWeapon, int newWeaponDamages);
    bool isAlive() const;
    void displayState();
    
private:
    //ATTRIBUTES
    int m_health;
    int m_mana;
    Arme m_arme;
    
};
#endif /* Personnage_hpp */

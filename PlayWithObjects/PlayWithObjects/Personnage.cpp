//
//  Personnage.cpp
//  PlayWithObjects
//
//  Created by Dijoux Jérémy on 17/06/2021.
//
#include <string>
#include <iostream>
#include "Personnage.hpp"


Personnage::Personnage() : m_health(100), m_mana(100){}

Personnage::Personnage(std::string weaponName, int weaponDamage) : m_health(100), m_mana(100), m_arme(weaponName, weaponDamage){}
    
    void Personnage::takeDamages(int damageTaken){
        
        m_health -= damageTaken;
        
        if(m_health < 0){
            m_health = 0;
        }
        
    }
    
    void Personnage::attack(Personnage &target){
        target.takeDamages(m_arme.getDamages());
    }
    
    void Personnage::drinkHealthPotion(int potionValue){
        m_health += potionValue;
        
        if(m_health>100){
            m_health = 100;
        }
        
    }
    
    void Personnage::switchWeapon(std::string newWeapon, int newWeaponDamages){
        m_arme.swap(newWeapon, newWeaponDamages);
    }
    
    bool Personnage::isAlive() const {
        
        return m_health>0;
        
    }

void Personnage::displayState(){
    std::cout << "Vie : " << m_health <<std::endl;
    std::cout << "Mana : " << m_mana << std::endl;
    m_arme.display();
}
    


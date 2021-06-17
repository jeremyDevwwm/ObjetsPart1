//
//  Arme.hpp
//  PlayWithObjects
//
//  Created by Dijoux Jérémy on 17/06/2021.
//

#ifndef Arme_hpp
#define Arme_hpp

#include <stdio.h>
#include <string>
class Arme{
    
public:
    Arme();
    Arme(std::string name, int damages);
    void swap(std::string name, int damages);
    void display() const;
    int getDamages() const;
    std::string getWeaponName() const;
    
private:
    std::string m_name;
    int m_damages;
    
};

#endif /* Arme_hpp */

//
//  Arme.cpp
//  PlayWithObjects
//
//  Created by Dijoux Jérémy on 17/06/2021.
//
#include <string>
#include <iostream>
#include "Arme.hpp"

Arme::Arme() : m_name("Epée Rouillée"), m_damages(10){}
Arme::Arme(std::string name, int damages) : m_name(name), m_damages(damages){}

void Arme::swap(std::string name, int damages){
    m_name = name;
    m_damages = damages;
}

void Arme::display() const {
    std::cout << "Nom de l'arme : "<< m_name << std::endl;
    std::cout << "Dégats de l'arme : "<< m_damages << std::endl;
}

int Arme::getDamages() const {
    return m_damages;
}

std::string Arme::getWeaponName() const{
    return m_name;
}

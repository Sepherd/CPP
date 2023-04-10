#include "../includes/Weapon.hpp"
#include <iostream>
using std::string;

Weapon::Weapon (string type) : _type(type)
{

}

Weapon::~Weapon()
{
    std::cout << "Unarmed!" << std::endl;
}

void    Weapon::setType(string type)
{
    _type = type;
}

const string &Weapon::getType()
{
    return _type;
}
#include "../includes/HumanB.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

HumanB::HumanB(string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	cout << _name << " attacks with his ";
	if (!_weapon)
		cout << "roundhouse kicks" << endl;
	else
		cout << _weapon->getType() << endl;
}
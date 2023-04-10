#include "../includes/HumanA.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

HumanA::HumanA(string name, Weapon &weapon) : _name(name), _weapon(weapon) 
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	cout << _name << " attacks with his " << _weapon.getType() << endl;
}
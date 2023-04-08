#include "includes/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	cout << Name << " was destroyed!" << endl;
}

void	Zombie::setName(string name)
{
	Name = name;
}

string	Zombie::getName()
{
	return Name;
}

void	Zombie::announce(int n)
{
	cout << Name << " " << n + 1 << endl;
}
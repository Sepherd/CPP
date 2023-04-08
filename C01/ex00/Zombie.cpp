#include "includes/Zombie.hpp"

Zombie::Zombie(string name)
{
	Name = name;
}

Zombie::~Zombie()
{
	cout << Name << " was destroyed!" << endl;
}

void	Zombie::announce()
{
	cout << Name << ": BraiiiiiiinnnzzzZ..." << endl;
}
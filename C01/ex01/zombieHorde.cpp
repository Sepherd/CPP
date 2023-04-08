#include "includes/Zombie.hpp"

Zombie	*zombieHorde(int n, string name)
{
	Zombie	*forTheHorde = new Zombie[n];
	
	for (int i = 0; i < n; i++)
	{
		forTheHorde[i].setName(name);
		forTheHorde[i].announce(i);
	}
	return (forTheHorde);
}
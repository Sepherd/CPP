#include "includes/Zombie.hpp"

int	main()
{
	Zombie zombie1("Liv");
	zombie1.announce();
	Zombie *zombie2 = newZombie("Sheila");
	zombie2->announce();
	randomChump("Frank");
	delete zombie2;
	return (0);
}
#include "includes/Zombie.hpp"

int	main()
{
	Zombie *orda = zombieHorde(3, "Zombie");
	delete[] orda;
	return (0);
}
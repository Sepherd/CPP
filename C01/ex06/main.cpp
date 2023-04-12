#include "includes/Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Invalid number of arguments." << std::endl;
	else
	{
		Harl		harl;
		std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int			i = 0;
		while (i < 4)
		{
			if (levels[i] == av[1])
				break ;
			i++;
		}
		switch (i)
		{
			case 0:
				harl.complain(levels[0]);
				std::cout << std::endl;
			case 1:
				harl.complain(levels[1]);
				std::cout << std::endl;
			case 2:
				harl.complain(levels[2]);
				std::cout << std::endl;
			case 3:
				harl.complain(levels[3]);
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}
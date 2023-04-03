#include <iostream>
using std::cout;
using std::endl;

int	main(int ac, char **av)
{
	int i = 1;
	int k;
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		while (i < ac)
		{
			k = 0;
			while (av[i][k])
			{
				cout << (char)(toupper(av[i][k]));
				k++;
			}
			i++;
		}
	}
	cout << endl;
	return (0);
}
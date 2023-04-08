#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Zombie
{
	private:

	string Name;

	public:

	void	announce(int n);
	void	setName(string name);
	string	getName();

	Zombie ();
	~Zombie ();
};

Zombie	*zombieHorde(int n, string name);

#endif
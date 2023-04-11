#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:

	std::string	_name;
	Weapon		*_weapon; //pointer

	public:

	void    setWeapon(Weapon &weapon); //reference
	void    attack();

	HumanB(std::string name);
	~HumanB();
};

#endif
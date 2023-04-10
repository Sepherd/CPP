#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	private:

	std::string _type;

	public:

	void				setType(std::string type);
	const std::string	&getType();

	Weapon (std::string type);
	~Weapon ();
};

#endif
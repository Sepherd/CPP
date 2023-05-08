#include "../includes/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap()
{
	Name = "Bombolo";
	Hp = 100;
	Mp = 100;
	Power = 30;
	std::cout << "FragTrap " + Name + " ready to destroy!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	Name = name;
	Hp = 100;
	Mp = 100;
	Power = 30;
	std::cout << "FragTrap " + Name + " ready to destroy!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " + Name + " was destroyed!" << std::endl;

}

FragTrap::FragTrap(const FragTrap &original)
{
	Name = original.Name;
	Hp = original.Hp;
	Mp = original.Mp;
	Power = original.Power;
	std::cout << "FragTrap " + Name + " copy ready to destroy!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
	this->Name = assign.Name;
	this->Hp = assign.Hp;
	this->Mp = assign.Mp;
	this->Power = assign.Power;
	std::cout << "FragTrap " + this->Name + " operator called." << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	if (Hp > 0)
		std::cout << "FragTrap " + Name + " wants to high five with you!" << std::endl;
	else
		std::cout << "FragTrap " + Name + " can't high five because it has no more HP." << std::endl;
}

// void	FragTrap::attack(const std::string &target)
// {
// 	if (Hp > 0)
// 	{
// 		if (Mp > 0)
// 		{
// 			Mp--;
// 			std::cout << "FragTrap " + Name + " attacks " + target + ", causing " << Power << " points of damage!" << std::endl;
// 		}
// 		else
// 			std::cout << "FragTrap " + Name + " can't attacks because it has no more MP." << std::endl;
// 	}
// 	else
// 		std::cout << "FragTrap " + Name + " can't attacks because it has no more HP." << std::endl;
// }

// void	FragTrap::takeDamage(unsigned int amount)
// {
// 	if (Hp <= 0)
// 	{
// 		std::cout << "Ehi! FragTrap " + Name + " is already dead! Be mercy :'(" << std::endl; 
// 		return ;
// 	}
// 	Hp -= amount;
// 	if (Hp > 0)
// 	{
// 		std::cout << "FragTrap " + Name + " has received " << amount << " points of damage!\n";
// 		std::cout << "Residual HP: " << Hp << std::endl;
// 	}
// 	else
// 		std::cout << "FragTrap " + Name + " has received " << amount << " points of damage and died!\n";
// }

// void	FragTrap::beRepaired(unsigned int amount)
// {
// 	if (Hp > 0)
// 	{
// 		if (Mp > 0)
// 		{
// 			Hp += amount;
// 			Mp--;
// 			std::cout << "FragTrap " + Name + " was repaired and gained " << amount << " HP!\n";
// 			std::cout << "Total HP: " << Hp << std::endl;
// 		}
// 		else
// 			std::cout << "FragTrap " + Name + " can't be repaired because it has no more MP." << std::endl;
// 	}
// 	else
// 		std::cout << "FragTrap " + Name + " can't be repaired because it has no more HP." << std::endl;

// }
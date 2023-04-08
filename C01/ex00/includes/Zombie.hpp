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

    void announce();

    Zombie (string name);
    ~Zombie ();
};

Zombie  *newZombie(string name);
void    randomChump(string name);

#endif
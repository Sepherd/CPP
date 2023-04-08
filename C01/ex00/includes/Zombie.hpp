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

    void announce()
    {
        cout << Name << ": BraiiiiiiinnnzzzZ..." << endl;
    }

    Zombie (string name)
    {
        Name = name;
    }

    ~Zombie ()
    {
        cout << Name << " was destroyed!" << endl;
    }
};

#endif
#include "Weapon.hpp"

class HumanA
{
    private:

    std::string _name;
    Weapon &_weapon; //reference

    public:

    void    attack();

    HumanA(std::string name, Weapon &weapon); //reference
    ~HumanA();
};
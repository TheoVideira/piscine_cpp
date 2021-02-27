#ifndef HUMANB_CPP
# define HUMANB_CPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack( void );
        void setWeapon(Weapon &weapon);
    private:
        std::string name; 
        Weapon *weapon;
};


#endif
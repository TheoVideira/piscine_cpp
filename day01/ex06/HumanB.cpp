#include "HumanB.hpp"

HumanB::HumanB( std::string name) : name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack( void )
{
    std::cout << name << " attack with his " << (*weapon).getType() << std::endl;
}

void HumanB::setWeapon( Weapon &weapon )
{
    this->weapon = &weapon;
}
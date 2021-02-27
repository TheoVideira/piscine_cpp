#include "Zombie.hpp"


Zombie::Zombie( std::string name, std::string type )
{
    this->name = name;
    this->type = type;
}

Zombie::~Zombie()
{
}

void Zombie::announce( void )
{
    std::cout << "<" << this->name
            << " (" << this->type << ")> "
            << "Braiiiiiiinnnssss ..." << std::endl;
}

void Zombie::setName( std::string name )
{
    this->name = name;
}

void Zombie::setType( std::string type )
{
    this->type = type;
}
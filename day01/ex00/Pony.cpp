#include "Pony.hpp"

Pony::Pony( std::string name, std::string color )
{
    this->name = name;
    this->color = color;

    std::cout << this->name << ", the " << color << " pony appeared :)" << std::endl;
}

Pony::~Pony( void )
{
    std::cout << this->name << ", the " << color << " pony disappeared :(" << std::endl;
}

void Pony::talk( void )
{
    std::cout << "I'm " << this->name << " and i'm fabulous!" << std::endl;
}
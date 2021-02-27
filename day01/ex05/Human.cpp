#include "Human.hpp"

Human::Human(int iq) : brain(Brain(iq))
{
}

Human::~Human()
{
}

std::string Human::identify( void ) const
{
    return this->brain.identify();
}

Brain & Human::getBrain( void )
{
    return (Brain &)(this->brain);
}
#include "Brain.hpp"

Brain::Brain(int iq)
{
    this->iq = iq;
}

Brain::~Brain()
{
}

std::string Brain::identify( void ) const
{
    std::string id;
    std::stringstream stream;
    stream << this;
    id = stream.str(); 
    return id;
}
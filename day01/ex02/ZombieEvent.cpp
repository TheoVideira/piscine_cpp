#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( std::string type )
{
    this->type = type;
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType( std::string type )
{
    this->type = type;
}

Zombie *ZombieEvent::newZombie( std::string name )
{
    return new Zombie(name, this->type);
}

void ZombieEvent::randomChump( void )
{
    std::string names[] = { "Bob", "Luc", "Léa", "Tom", "Dan", "Foo", "Bar" };
    Zombie zombie = Zombie(names[std::rand() % 7], this->type);
    zombie.announce();
}
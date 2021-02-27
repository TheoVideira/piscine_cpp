#include "ZombieHorde.hpp"

static std::string getRandomName( void )
{
    static std::string names[] = {
        "Bob",
        "John",
        "Alice",
        "David",
        "Martin",
        "Marcel",
        "Juan",
        "Monica",
        "Andy",
        "Peter",
        "Brian"
    };
    return names[std::rand() % 11];
}

static std::string getRandomType( void )
{
    static std::string types[] = {
        "runner",
        "crawler"
    };
    return types[std::rand() % 2];
}

ZombieHorde::ZombieHorde( unsigned int n )
{
    this->count = n;
    this->zombies = new Zombie[n];

    for (unsigned int i = 0; i < n; i++)
    {
        this->zombies[i].setName(getRandomName());
        this->zombies[i].setType(getRandomType());
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->zombies;
}

void ZombieHorde::announce( void )
{
    for (unsigned int i = 0; i < this->count; i++)
        this->zombies[i].announce();
}
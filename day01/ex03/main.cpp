#include "ZombieHorde.hpp"
#include <ctime>

int main( void )
{
    std::srand(std::time(NULL));
    
    ZombieHorde myhorde(10);
    myhorde.announce();

    return 0;
}
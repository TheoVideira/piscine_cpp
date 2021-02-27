#include "ZombieEvent.hpp"
#include <ctime>

int main( void )
{
    std::srand(std::time(NULL));
    
    {
        Zombie jean_random = Zombie();
        jean_random.announce();
    }

    ZombieEvent zombie_event = ZombieEvent("crawler");
    Zombie *z1 = zombie_event.newZombie( "Bobby" );
    Zombie *z2 = zombie_event.newZombie( "Jérémie" );

    zombie_event.setZombieType("runner");
    for(int i = 0; i < 10; i++)
        zombie_event.randomChump();

    z1->announce();
    z2->announce();

    delete z1;
    delete z2;
    return 0;
}
#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"
# include <cstdlib>

class ZombieHorde
{
    public:
        ZombieHorde( unsigned int n );
        ~ZombieHorde();

        void announce( void );

    private:
        unsigned int    count;
        Zombie          *zombies;
};

#endif
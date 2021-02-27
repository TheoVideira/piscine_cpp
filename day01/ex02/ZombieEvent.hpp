#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent
{
    public:
        ZombieEvent( std::string type = "default" );
        ~ZombieEvent();
        void setZombieType( std::string type );
        Zombie *newZombie( std::string name );
        void randomChump( void );

    private:
        std::string type;
};

#endif
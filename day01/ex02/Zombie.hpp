#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
public:
    Zombie( std::string name = "Jean-Random", std::string type = "default" );
    ~Zombie();
    void announce( void );

private:
    std::string name;
    std::string type;
};

#endif
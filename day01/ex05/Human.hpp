#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
public:
    Human( int iq = 80 );
    ~Human();
    std::string identify( void ) const;
    Brain & getBrain( void );

private:
    Brain const brain;
};

#endif
#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
    public:
        Pony( std::string name, std::string color );
        ~Pony(void);
        void talk( void );

    private:
        std::string name;
        std::string color;
};

#endif
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>

class Brain
{
    public:
        Brain( int iq );
        ~Brain();
        std::string identify( void ) const;

    private:
        int iq;
};


#endif
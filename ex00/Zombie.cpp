#include "Zombie.hpp"

//CONSTRUCTOR
Zombie::Zombie( std::string name ) : name(name) {}

// MEMBER FUNCTION
void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// DESTRUCTOR
Zombie::~Zombie( void )
{
    std::cout << name << " was cured of its zombieness..." << std::endl;
}
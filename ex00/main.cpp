#include "Zombie.hpp"

int main ( void )
{
    Zombie  *pZombie;

    pZombie = newZombie("Heap-Zombie");
    pZombie->announce();
    delete pZombie;
    randomChump("Stack-Zombie");
    return (0);
}
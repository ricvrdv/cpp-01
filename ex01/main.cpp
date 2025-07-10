#include "Zombie.hpp"

int main ( void )
{
    std::string nbr_zombies;
	std::string name_zombies;
	int			N;

	std::cout << "How many zombies in the horde? ";
    std::getline(std::cin, nbr_zombies);
	std::stringstream(nbr_zombies) >> N;
	if (N == 0)
	{
		std::cout << "No zombies created!" << std::endl;
		return (0);
	}

	std::cout << "A name for the zombies: ";
	std::getline(std::cin, name_zombies);

    std::cout << std::endl << "Zombies created:" << std::endl;
	Zombie  *horde = zombieHorde(N, name_zombies);
	std::cout << "Total = " << nbr_zombies << std::endl << std::endl;

	std::cout << "You can tell they are hungry:" << std::endl;
    for (int i = 0; i < N; i++)
		horde[i].announce();
	//std::cout << "Total = " << nbr_zombies << std::endl;
	
	std::cout << std::endl << "Zombies destroyed:" << std::endl;
    delete[] horde;
	std::cout << "Total = " << nbr_zombies << std::endl << std::endl;
    return (0);
}
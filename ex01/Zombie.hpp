#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>
# include <string>

// CLASS
class Zombie
{
	private:
		
		std::string	name;
	
	public:
		
		Zombie();
		Zombie( std::string name );
		~Zombie( void );
		
		void	announce( void );
		void	setName(std::string name);
};

// PROTOTYPE
Zombie	*zombieHorde( int N, std::string name );

#endif
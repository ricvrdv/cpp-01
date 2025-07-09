#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

// CLASS
class Zombie
{
	private:
		
		std::string	name;
	
	public:
		
		Zombie( std::string name );
		~Zombie( void );
		
		void	announce( void );
};

// PROTOTYPES
Zombie	*newZombie( std::string name);
void	randomChump( std::string name );

#endif
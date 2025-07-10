/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:06:09 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:06:16 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

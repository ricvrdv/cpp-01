/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:05:08 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:05:13 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

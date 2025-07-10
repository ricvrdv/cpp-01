/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:05:58 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:06:03 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:04:45 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:04:53 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//CONSTRUCTORS
Zombie::Zombie () { std::cout << "Someone got infected." << std::endl; }
Zombie::Zombie( std::string name ) : name(name) {}

// MEMBER FUNCTION
void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName( std::string name )
{
    this->name = name;
}

// DESTRUCTOR
Zombie::~Zombie( void )
{
    std::cout << name << " was cured of its zombieness..." << std::endl;
}

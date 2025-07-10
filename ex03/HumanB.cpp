/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:18:35 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:18:36 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon(NULL) {}

HumanB::~HumanB( void ) {}

void    HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void    HumanB::attack( void ) const
{
    if (weapon && weapon->getType().length() != 0)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}
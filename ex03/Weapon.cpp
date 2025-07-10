/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:16:22 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:16:24 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (const std::string &type ) : type(type) {}

Weapon::~Weapon( void ) {}

const std::string	&Weapon::getType( void ) const 
{ 
	return (this->type);
}

void	Weapon::setType ( const std::string &newType )
{
	this->type = newType;
}

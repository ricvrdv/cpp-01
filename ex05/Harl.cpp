/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:58:28 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/13 01:09:07 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void	Harl::debug( void )
{
    std::cout << "I'm trying to DEBUG this code but I'm going anywhere." << std::endl;
}

void	Harl::info( void )
{
    std::cout << "I don't know maybe I got the INFO wrong." << std::endl;
}

void	Harl::warning( void )
{
    std::cout << "I could use that as a WARNING. But I'm not concerned anymore." << std::endl;
}

void	Harl::error( void )
{
    std::cout << "This is a critical ERROR. I'm leaving." << std::endl;
}

void	Harl::complain( std::string level )
{
	typedef void	(Harl::*funcPtr)();

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	funcPtr	functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "Unknown level: " << level << std::endl;
}

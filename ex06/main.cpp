/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:04:35 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/13 16:04:42 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static void	printMessage(Harl &harl, const std::string &level)
{
	std::cout << "[ " << level << " ]" << std::endl;
	harl.complain(level);
	std::cout << std::endl;
}

int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <LEVEL>" << std::endl;
		return (1);
	}
	
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (argv[1] == levels[i])
		{
			index = i;
			break ;
		}
	}

	Harl		harl;
	switch (index)
	{
		case 0:
			printMessage(harl, "DEBUG");
		case 1:
			printMessage(harl, "INFO");
		case 2:
			printMessage(harl, "WARNING");
		case 3:
			printMessage(harl, "ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}

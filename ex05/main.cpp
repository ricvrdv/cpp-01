/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:04:00 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/13 16:04:01 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl		harl;

	std::cout << "[ DEBUG ]" << std::endl;
	harl.complain("DEBUG");
	
	std::cout << "\n[ INFO ]" << std::endl;
	harl.complain("INFO");

	std::cout << "\n[ WARNING ]" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n[ ERROR ]" << std::endl;
	harl.complain("ERROR");

	std::cout << "\n[ UNKNOWN LEVEL ]" << std::endl;
	harl.complain("NOTHING");
	return (0);
}

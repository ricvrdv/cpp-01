/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:44:26 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 12:54:47 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main ( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of string:" << std::endl;
	std::cout << &str << std::endl << std::endl;
	std::cout << "Memmory address held by pointer:" << std::endl; 
	std::cout << stringPTR << std::endl << std::endl;
	std::cout << "Memory address held by reference:" << std::endl;
	std::cout << &stringREF << std::endl << std::endl << std::endl;

	std::cout << "String:" << std::endl;
	std::cout << str << std::endl << std::endl;
	std::cout << "Value pointed to by pointer:" << std::endl;
	std::cout << *stringPTR << std::endl << std::endl;
	std::cout << "Value pointed to by reference:" << std::endl; 
	std::cout << stringREF << std::endl << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:32:18 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 16:33:15 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string	myText;

	std::ifstream	MyReadFile("test.txt");
	while (std::getline(MyReadFile, myText))
		std::cout << myText;
	MyReadFile.close();
	return (0);
}

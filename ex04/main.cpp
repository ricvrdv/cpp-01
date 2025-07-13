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

#include "antiSed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./antiSed <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	
	// READING FILE
	std::ifstream	inFile(filename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);
	}
	filename += ".replace";
	
	// CREATING NEW FILE.REPLACE
	std::ofstream	newFile(filename.c_str());
	if (!newFile.is_open())
	{
		std::cerr << "Error creating new file" << std::endl;
		return (1);
	}
	
	// WRITING TO FILE.REPLACE
	std::string	line;
	while (std::getline(inFile, line))
		newFile << replaceAll(line, s1, s2) << std::endl;

	// CLOSING BOTH FILES
	inFile.close();
	newFile.close();

	return (0);
}

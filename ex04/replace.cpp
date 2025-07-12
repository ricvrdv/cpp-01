/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:41:03 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/12 20:41:08 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string replaceAll(const std::string &line, const std::string &s1, const std::string &s2)
{
    if (s1.empty())
        return (line);
    
    std::string result;
    size_t      pos = 0;
    size_t      found;

    found = line.find(s1, pos);
    while (found != std::string::npos)
    {
        result += line.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
        found = line.find(s1, pos);
    }
    result += line.substr(pos);
    return (result);
}

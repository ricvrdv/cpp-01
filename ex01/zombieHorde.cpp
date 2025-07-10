/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:04:59 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:05:02 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name )
{
    Zombie  *horde = new Zombie [N];

    if (N <= 0)
        return (NULL);
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return (horde);
}

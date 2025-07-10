/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:05:25 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:05:27 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void )
{
    Zombie  *pZombie;

    pZombie = newZombie("Heap-Zombie");
    pZombie->announce();
    delete pZombie;
    randomChump("Stack-Zombie");
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:17:35 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:18:01 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class   HumanB
{
    private:

        std::string name;
        Weapon      *weapon;

    public:

        HumanB( std::string name );
        ~HumanB( void );

        void    setWeapon( Weapon &weapon );
        void    attack( void ) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:16:37 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:17:19 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class   HumanA
{
    private:

        std::string name;
        Weapon      &weapon;
    
    public:

        HumanA( std::string name , Weapon &weapon );
        ~HumanA( void );
		
		void    attack( void ) const;
};

#endif

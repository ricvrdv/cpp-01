/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:15:45 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/10 13:16:12 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class   Weapon
{
    private:

        std::string type;
    
    public:

        Weapon( const std::string &type );
        ~Weapon( void );

        const std::string	&getType( void ) const;
        void        		setType( const std::string &newType );
};

#endif

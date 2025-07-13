/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: applecore <applecore@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:57:29 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/13 00:49:06 by applecore        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class	Harl
{
	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	
	public:

		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

#endif

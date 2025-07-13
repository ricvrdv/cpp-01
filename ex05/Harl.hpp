/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:03:54 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/13 16:03:56 by rjesus-d         ###   ########.fr       */
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

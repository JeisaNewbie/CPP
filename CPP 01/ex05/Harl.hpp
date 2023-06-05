/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:04:46 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/19 16:05:49 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
 #define HARL_HPP

#include <iostream>
#include <string>
class Harl
{
private:
	void	(Harl::*c_level[20]) ();
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl () {
		c_level[0] = &Harl::debug;
		c_level[5] = &Harl::info;
		c_level[19] = &Harl::warning;
		c_level[1] = &Harl::error;
	}
	void complain( std::string level );
};

#endif
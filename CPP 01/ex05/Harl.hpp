/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:04:46 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 18:10:38 by jhwang2          ###   ########.fr       */
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
	void 	debug( void );
	void 	info( void );
	void 	warning( void );
	void 	error( void );
public:
	Harl ();
	void complain( std::string level );
};

#endif
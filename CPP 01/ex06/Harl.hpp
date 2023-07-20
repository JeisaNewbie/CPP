/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:04:46 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 18:12:51 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
 #define HARL_HPP

#include <iostream>
#include <string>

namespace	LEVEL
{
	enum
	{
		DEBUG=0,
		INFO=5,
		WARNING=19,
		ERROR=1
	};
}

class Harl
{
private:
	void	(Harl::*c_level[20]) ();
	void 	debug( void );
	void 	info( void );
	void 	warning( void );
	void 	error( void );
	void	complain( std::string level );
	int		compare_str ( std::string level );
public:
	Harl ();
	void	harlFilter (std::string level );
};

#endif
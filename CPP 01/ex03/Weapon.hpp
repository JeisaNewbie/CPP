/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:48:45 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 17:28:56 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
 #define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon( const std::string &type );
	const std::string&	getType( void );
	void				setType( const std::string &type );
};

#endif
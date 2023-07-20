/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:49:51 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 17:57:43 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
 #define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*type;
public:
	HumanB( std::string name );
	void	attack ( void );
	void	setWeapon ( Weapon &type );
};

#endif
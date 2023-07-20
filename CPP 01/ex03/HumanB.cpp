/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:40:10 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 17:57:52 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name (name) {};

void	HumanB::attack ( void )
{
	std::cout<<this->name<<" attacks with their "<<type->getType ()<<std::endl;
}

void	HumanB::setWeapon ( Weapon &type )
{
	this->type = &type;
}
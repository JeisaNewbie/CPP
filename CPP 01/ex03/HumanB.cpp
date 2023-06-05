/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:40:10 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/18 09:53:03 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack ( void )
{
	std::cout<<this->name<<" attacks with their "<<type->getType ()<<std::endl;
}

void	HumanB::setWeapon ( Weapon &type )
{
	this->type = &type;
}
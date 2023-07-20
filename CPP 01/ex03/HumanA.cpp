/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:01:10 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 17:58:18 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &type ) : name (name), type (type) {}

void	HumanA::attack ( void )
{
	std::cout<<this->name<<" attacks with their "<<type.getType ()<<std::endl;
}
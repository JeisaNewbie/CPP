/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:09:07 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 17:26:18 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () : name ("") {}

Zombie::Zombie ( std::string name )
{
	this->name = name;
}

Zombie::~Zombie ()
{
	std::cout<<name<<" Destructor is called"<<std::endl;
}

void	Zombie::announce ( void ) const
{
	std::cout<<name<<": "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}
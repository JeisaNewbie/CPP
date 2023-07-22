/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:09:07 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/22 17:20:53 by jhwang2          ###   ########.fr       */
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

void	Zombie::announce ( void )
{
	std::cout<<name<<": "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::set_Name ( std::string name )
{
	this->name =  name;
}
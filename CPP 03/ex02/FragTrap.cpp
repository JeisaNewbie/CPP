/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:49:03 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 15:15:00 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout<<"Default Derived constructor called"<<std::endl;
	name = "Default";
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}
FragTrap::FragTrap( std::string name ): ClapTrap (name)
{
	std::cout<<"Default Derived constructor called"<<std::endl;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap& copy )
{
	*this = copy;
}

FragTrap& FragTrap::operator=( const FragTrap& copy )
{
	this->name = copy.name;
	this->Hit_points = copy.Hit_points;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys( void )
{
	std::cout<<"high fives!"<<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<<"Derived Destructor called"<<std::endl;
}
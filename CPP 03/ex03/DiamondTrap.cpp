/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:31:10 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 15:14:21 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout<<"Default DiamondTrap constructor called"<<std::endl;
	name = "Default_Diamond";
	Hit_points = 0;
	Energy_points = 0;
	Attack_damage = 0;
}

DiamondTrap::DiamondTrap( const std::string& name ): ClapTrap(name +  "_clap_name"), FragTrap(100, 30), ScavTrap(50)
{
	std::cout<<"Default DiamondTrap constructor called"<<std::endl;
	this->name = name;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy )
{
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& copy )
{
	ClapTrap::name = copy.ClapTrap::name;
	this->name = copy.name;
	this->Hit_points = copy.Hit_points;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	std::cout<<"DiamondTrap "<<name<<" attacks "<<target<<" causing "<<Attack_damage<<" points of damage!"<<std::endl;
}

void DiamondTrap::whoAmI( void )
{
	std::cout<<"My name is "<<name<<std::endl;
	std::cout<<"Clab name is "<<ClapTrap::name<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamondTrap Destructor called"<<std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:57:07 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 15:15:04 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout<<"Default Derived constructor called"<<std::endl;
	name = "Default";
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap (name)
{
	std::cout<<"Default Derived constructor called"<<std::endl;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& copy )
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& copy )
{
	this->name = copy.name;
	this->Hit_points = copy.Hit_points;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	std::cout<<"ScavTrap "<<name<<" attacks "<<target<<" causing "<<Attack_damage<<" points of damage!"<<std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout<<name<<" is now in Gate keeper mode"<<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"Derived Destructor called"<<std::endl;
}
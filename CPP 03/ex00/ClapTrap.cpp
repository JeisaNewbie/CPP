/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:33:36 by ahkiler           #+#    #+#             */
/*   Updated: 2023/06/04 13:41:43 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"Default constructor called"<<std::endl;
	name = "Default";
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
}

ClapTrap::ClapTrap( std::string name ) : name (name)
{
	std::cout<<"Default constructor called"<<std::endl;
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& copy )
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& copy )
{
	this->name = copy.name;
	this->Hit_points = copy.Hit_points;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	std::cout<<"ClapTrap "<<name<<" attacks "<<target<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<name<<" is taken "<<amount<< " points of damage!"<<std::endl;
	Hit_points -= amount;
	if (Hit_points <= 0)
		std::cout<<name<<" is dead"<<std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points == 10)
	{
		std::cout<<name<<" has full Hit_points"<<std::endl;
		return ;
	}
	else if (Energy_points == 0)
	{
		std::cout<<name<<" has no Energy_points"<<std::endl;
		return ;
	}
	Hit_points += amount;
	if (Hit_points > 10)
		Hit_points = 10;
	Energy_points--;
	std::cout<<name<<" is Repaired"<<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor called"<<std::endl;
}
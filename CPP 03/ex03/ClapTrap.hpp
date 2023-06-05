/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:28:44 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 14:55:05 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string name;
	int			Hit_points;
	int			Energy_points;
	int			Attack_damage;
public:
	ClapTrap();
	ClapTrap( const std::string& name );
	ClapTrap( const ClapTrap& copy );
	ClapTrap& operator=( const ClapTrap& copy );
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};

#endif
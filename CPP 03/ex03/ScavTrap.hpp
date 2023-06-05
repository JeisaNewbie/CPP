/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:56:42 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 15:00:23 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
 #define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( const std::string& name );
	ScavTrap( const ScavTrap& copy );
	ScavTrap( const int& Energy_points );
	ScavTrap& operator=( const ScavTrap& copy );
	void attack(const std::string& target);
	void guardGate( void );
	~ScavTrap();
};

#endif
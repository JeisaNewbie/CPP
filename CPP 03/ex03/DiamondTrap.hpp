/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:29:43 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 15:08:45 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
 #define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;
public:
	DiamondTrap();
	DiamondTrap( const std::string& name );
	DiamondTrap( const DiamondTrap& copy );
	DiamondTrap& operator=( const DiamondTrap& copy );
	void attack(const std::string& target);
	void whoAmI( void );
	~DiamondTrap();
};

#endif
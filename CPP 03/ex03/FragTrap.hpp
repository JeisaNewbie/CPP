/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:48:34 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 15:03:47 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
 #define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const std::string& name );
	FragTrap( const int& Hit_points, const int& Attack_damage );
	FragTrap( const FragTrap& copy );
	FragTrap& operator=( const FragTrap& copy );
	void highFivesGuys( void );
	int get_Hitpoints( void );
	~FragTrap();
};

#endif
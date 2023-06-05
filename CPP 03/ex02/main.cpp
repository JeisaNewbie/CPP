/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:28:33 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/22 16:27:36 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ( void )
{
	ClapTrap one ("park");
	ScavTrap two ("hwang");
	FragTrap three ("lee");

	one.attack ("hwang");
	two.attack ("park");
	three.attack ("kim");
	one.takeDamage (5);
	two.takeDamage (5);
	three.takeDamage (5);
	two.guardGate ();
	three.highFivesGuys ();
}
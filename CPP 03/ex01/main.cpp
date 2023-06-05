/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:28:33 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/22 15:45:28 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ( void )
{
	ClapTrap one ("park");
	ScavTrap two ("hwang");

	one.attack ("hwang");
	two.attack ("park");
	one.takeDamage (5);
	two.takeDamage (5);
	two.guardGate ();
}
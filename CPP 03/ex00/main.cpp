/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:28:33 by ahkiler           #+#    #+#             */
/*   Updated: 2023/06/04 20:27:01 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap one ("park");
	ClapTrap two ("hwang");

	one.attack ("hwang");
	two.takeDamage (10);
	two.beRepaired (1);
	two.beRepaired (1);
	two.beRepaired (1);
	two.beRepaired (1);
	two.beRepaired (1);
	two.takeDamage (10);
	two.beRepaired (1);
	two.beRepaired (1);
	two.beRepaired (1);
	two.beRepaired (1);
	two.beRepaired (1);
	two.beRepaired (1);
	two.beRepaired (1);

}
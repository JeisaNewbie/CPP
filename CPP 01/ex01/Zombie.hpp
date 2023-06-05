/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:59:39 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/17 18:29:16 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie () : name ("") {}
	Zombie ( std::string name ){
		this->name = name;
	}
	void 	announce( void );
	static Zombie* newZombie( std::string name );
	static Zombie* zombieHorde( int N, std::string name );
};

#endif
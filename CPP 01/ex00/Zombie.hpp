/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:59:39 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 17:26:40 by jhwang2          ###   ########.fr       */
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
	Zombie ();
	Zombie ( std::string name );
	~Zombie ();
	void 			announce( void ) const;
	static Zombie*	newZombie( std::string name );
	static void		randomChump( std::string name );
};

#endif
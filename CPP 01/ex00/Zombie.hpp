/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:59:39 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/19 15:43:20 by jhwang2          ###   ########.fr       */
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
	void 	announce( void ) const;
	static Zombie* newZombie( std::string name );
	static void	randomChump( std::string name );
	~Zombie (){
		std::cout<<"Zombie Destructor is called"<<std::endl;
	}
};

#endif
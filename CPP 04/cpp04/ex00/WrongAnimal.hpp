/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:25:34 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 19:20:27 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
 #define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal( void );
	WrongAnimal( const std::string& type );
	WrongAnimal( const WrongAnimal& copy );
	WrongAnimal& operator=( const WrongAnimal& copy );
	void makeSound( void ) const;
	std::string getType( void ) const;
	~WrongAnimal( void );
};

#endif
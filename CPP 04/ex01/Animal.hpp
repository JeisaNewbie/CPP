/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:25:34 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 17:20:07 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal( void );
	Animal( const std::string& type );
	Animal( const Animal& copy );
	Animal& operator=( const Animal& copy );
	virtual void makeSound( void ) const;
	virtual std::string getType( void ) const;
	virtual ~Animal( void );
};

#endif
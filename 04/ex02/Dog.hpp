/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:25:25 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 17:38:10 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
 #define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*dog_brain;
public:
	Dog( void );
	Dog( const Dog& copy );
	Dog& operator=( const Dog& copy );
	virtual void makeSound( void ) const;
	virtual std::string getType( void ) const;
	virtual ~Dog( void );
};

#endif
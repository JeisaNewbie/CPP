/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:24:42 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 17:20:01 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
 #define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*cat_brain;
public:
	Cat( void );
	Cat( const Cat& copy );
	Cat& operator=( const Cat& copy );
	virtual void makeSound( void ) const;
	virtual std::string getType( void ) const;
	virtual ~Cat( void );
};

#endif
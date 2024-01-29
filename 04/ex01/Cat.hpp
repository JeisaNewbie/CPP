/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:24:42 by ahkiler           #+#    #+#             */
/*   Updated: 2023/08/18 14:14:32 by jhwang2          ###   ########.fr       */
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
	void get_ideas(int i);
	void set_ideas(std::string &str, int i);
};

#endif
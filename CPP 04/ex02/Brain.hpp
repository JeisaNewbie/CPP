/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:59:24 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 17:39:07 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
 #define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string *ideas;
public:
	Brain( void );
	Brain( Brain& copy );
	Brain& operator=( Brain& copy );
	virtual ~Brain();
};

#endif
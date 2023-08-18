/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:59:24 by ahkiler           #+#    #+#             */
/*   Updated: 2023/08/18 13:12:44 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
 #define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Brain
{
private:
	std::string *ideas;
public:
	Brain( void );
	Brain( Brain& copy );
	Brain& operator=( Brain& copy );
	virtual ~Brain();
	std::string random_str();
	void get_ideas();
};

#endif
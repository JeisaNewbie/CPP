/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:59:24 by ahkiler           #+#    #+#             */
/*   Updated: 2023/08/18 14:13:05 by jhwang2          ###   ########.fr       */
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
	void get_ideas(int i);
	void set_ideas(std::string &str, int i);
};

#endif
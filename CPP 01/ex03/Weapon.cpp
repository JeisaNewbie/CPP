/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:21:44 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 17:28:34 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( const std::string &type ) : type (type){}

const std::string&	Weapon::getType( void )
{
	return (this->type);
}

void	Weapon::setType( const std::string &type )
{
	this->type = type;
}
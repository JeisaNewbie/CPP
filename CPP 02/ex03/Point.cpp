/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:57:16 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/22 10:25:12 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float Point::getPoint_x( void ) const
{
	return (this->x.toFloat ());
}

float Point::getPoint_y( void ) const
{
	return (this->y.toFloat ());
}

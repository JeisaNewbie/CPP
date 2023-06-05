/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:52:16 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/22 10:25:08 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
 #define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point() : x (0), y (0) {};
	Point( Fixed const x, Fixed const y ) : x (x), y (y) {};
	Point( const Point& copy) : x (x), y (y) {};
	Point& operator=( const Point& copy ) {return (*this);};
	float getPoint_x( void ) const;
	float getPoint_y( void ) const;
	~Point() {};
};

#endif
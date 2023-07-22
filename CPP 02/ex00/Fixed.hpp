/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:57:31 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 18:18:55 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 #define FIXED_HPP

#include <iostream>
class Fixed
{
private:
	int					integer;
	static const int	fractional_bits = 8;
public:
	Fixed ();
	Fixed ( const Fixed &copy );
	~Fixed ();
	Fixed	&operator=( const Fixed& copy );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
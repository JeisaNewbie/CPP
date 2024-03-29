/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:48:10 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/23 18:25:41 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
 #define ARRAY_HPP

#include <iostream>
#include <cstddef>

template <typename T>
class Array
{
private:
	T		*arr;
	size_t	length;
public:
	Array ( void );
	Array ( unsigned int n );
	Array ( const Array &copy );
	~Array ( void );
	size_t size( void ) const;
	Array &operator=( const Array &copy )
	{
		if (this != &copy)
		{
			if (this->arr != NULL)
				delete []this->arr;
			size_t copy_len = copy.size();
			if (copy_len != 0)
			{
				this->length = copy_len;
				this->arr = new T[length];
				for (size_t i = 0; i < copy_len; i++)
					this->arr[i] = copy.arr[i];
			}
		}
		return (*this);
	}

	T &operator []( int n )
	{
		try
		{
			if (n < 0 || n >= length)
				throw Outofbounds();
			if (this->arr == NULL)
				throw NoArr();
			return (arr[n]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			exit (1);
		}
	}

	class Outofbounds: public std::exception
	{
		virtual const char* what( void ) const throw() {return ("Out of bounds");};
	};

	class NoArr: public std::exception
	{
		virtual const char* what( void ) const throw() {return ("No Arr");};
	};
};

template <typename T>
Array<T>::Array( void ) : length (0)
{
	arr = new T[length];
}

template <typename T>
Array<T>::Array( unsigned int n )
{
	length = static_cast<size_t>(n);
	arr = new T[length];
}

template <typename T>
Array<T>::~Array()
{
	if (arr != NULL)
		delete []arr;
}

template <typename T>
Array<T>::Array( const Array& copy )
{
	std::cout<<"Array Copy Constructor called"<<std::endl;
	this->arr = NULL;
	*this = copy;
}

template <typename T>
size_t Array<T>::size( void ) const
{
	return (length);
}

#endif
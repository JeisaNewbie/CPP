/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:48:10 by ahkiler           #+#    #+#             */
/*   Updated: 2023/06/05 10:22:50 by ahkiler          ###   ########.fr       */
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
	Array( void );
	Array( unsigned int n );
	Array( const Array& copy );
	T getContent( unsigned int n );
	size_t size( void ) const;
	Array &operator=( const Array& copy )
	{
		size_t copy_len = copy.size();
		if (this != &copy)
		{
			delete []this->arr;
			for (size_t i = 0; i < copy_len; i++)
				this->arr[i] = getContent(i);
			this->length = copy_len;
		}
		return (*this);
	}
	void *operator new[]( size_t n )
	{
		void *ptr = new char[n];
		return (ptr);
	}
	T *operator []( int n )
	{
		try
		{
			if (n < 0 || n >= length)
				throw Outofbounds();
			return (arr[n]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	}
	~Array( void );
	class Outofbounds: public std::exception
	{
		virtual const char* what( void ) const throw() {return ("Out of bounds");};
	}
};

template <typename T>
Array<T>::Array( void )
{
	arr = new T();
}

template <typename T>
Array<T>::Array( unsigned int n )
{
	length = static_cast<size_t>(n);
	arr = new T[length];
}

template <typename T>
Array<T>::Array( const Array& copy )
{
	*this = copy;
}

template <typename T>
size_t Array<T>::size( void ) const
{
	return (length);
}

template <typename T>
T Array<T>::getContent( unsigned int n )
{
	return (arr[n]);
}

template <typename T>
Array<T>::~Array()
{
	delete []arr;
}

#endif
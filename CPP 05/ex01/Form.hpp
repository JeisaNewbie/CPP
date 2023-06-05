/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:29:45 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/26 18:05:03 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
 #define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool	sign;
	const int	grade_to_sign;
	const int	grade_to_execute;
public:
	Form( void );
	Form( const std::string& name, int grade_to_sign, int grade_to_execute);
	Form( const Form& copy );
	Form& operator=( const Form& copy );
	void beSigned( const Bureaucrat& copy );
	const std::string& getName ( void ) const;
	const bool& getSign ( void ) const;
	const int& getGradeToSign( void ) const;
	const int& getGradeToExecute( void ) const;
	~Form( void );

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what( void ) const throw() {return ("Form: Grade Too High");};
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what( void ) const throw() {return ("Form: Grade Too Low");};
	};
};

std::ostream& operator<<( std::ostream& os, const Form& copy );

#endif
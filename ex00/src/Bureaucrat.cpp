/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:25:12 by coder             #+#    #+#             */
/*   Updated: 2022/03/14 02:05:01 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string const &name, int const grade )
	: _name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	setGrade(grade);
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat destructor of " << getName() << " called" << std::endl;
}

std::string	const &Bureaucrat::getName( void ) const
{
	return (_name);
}

int		Bureaucrat::getGrade( void ) const
{
	return (_grade);
}

void	Bureaucrat::setGrade( int const grade )
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: grade too high, maximum acceptable value is 1.";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: grade too low, minimun acceptable value is 150.";
}

void	Bureaucrat::incrementGrade( void )
{
	setGrade(getGrade() - 1);
}

void	Bureaucrat::decrementGrade( void )
{
	setGrade(getGrade() + 1);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bcr)
{
    os << bcr.getName() << ", bureaucrat grade " << bcr.getGrade() << '.';
    return os;
}

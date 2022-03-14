/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:01:46 by coder             #+#    #+#             */
/*   Updated: 2022/03/14 01:43:21 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat {

	private:

		std::string const	_name;
		int					_grade;

	public:

		Bureaucrat( std::string const &name, int const grade );
		~Bureaucrat( void );

		std::string	const &getName( void ) const;
		int			getGrade( void ) const;

		void		setGrade( int const grade );

		void		incrementGrade( void );
		void		decrementGrade( void );
		
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bcr);

#endif

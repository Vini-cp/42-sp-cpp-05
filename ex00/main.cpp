/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:31:43 by coder             #+#    #+#             */
/*   Updated: 2022/03/14 02:09:34 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"

int main( void )
{
	Bureaucrat abc = Bureaucrat("abc", 58);
	std::cout << abc << std::endl;
	abc.incrementGrade();
	std::cout << abc << std::endl;
	abc.decrementGrade();
	std::cout << abc << std::endl << std::endl;
	
	// Above limit
	try
	{
		Bureaucrat high("high", 0);
		std::cout << high << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	// Under limit
	try
	{
		Bureaucrat low("low", 200);
		std::cout << low << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	
	// Normal then above limit
	try
	{
		Bureaucrat testHigh("testHigh", 1);
		std::cout << testHigh << std::endl;
		testHigh.incrementGrade();
		std::cout << testHigh << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	// Normal then under limit
	try
	{
		Bureaucrat testLow("testLow", 150);
		std::cout << testLow << std::endl;
		testLow.decrementGrade();
		std::cout << testLow << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	return 0;
}

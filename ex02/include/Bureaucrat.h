// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Form.h"
#include <iostream>

class Form;

class Bureaucrat
{
public:
    Bureaucrat( void );
    Bureaucrat( const std::string& pName, const int pGrade );
    Bureaucrat( const Bureaucrat& prBureacrat );
    ~Bureaucrat( void );

    Bureaucrat& operator=( const Bureaucrat& prBureacrat );

    const std::string& getName( void ) const;
    
    void setGrade( const int pGrade );
    int getGrade( void ) const;

    void incrementGrade( void );
    void decrementGrade( void );
    
    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    void signForm( Form& prForm );
    void executeForm( const Form& prForm );

private:

    const std::string mName;
    int mGrade;

};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& prBureaucrat);

#endif

// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.h"
#include <iostream>

class Bureaucrat;

class Form
{
public:

    Form( void );
    Form( const std::string& pName, const int pGradeToSign, const int pGradeToExecute );
    Form( const Form& prForm );
    ~Form( void );

    Form& operator=( const Form &prForm );

    const std::string& getName( void ) const;

    bool getIsSigned( void ) const;

    void setGradeToSign( const int pGrade );
    int getGradeToSign( void ) const;

    void setGradeToExecute( const int pGrade );
    int getGradeToExecute( void ) const;

    void beSigned( const Bureaucrat& prBureaucrat );
    
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowToSignException: public std::exception {
        virtual const char* what() const throw();
    };

private:

    const std::string mName;
    const int mGradeToSign;
    const int mGradeToExecute;

    bool mIsSigned;

    void checkGrade( const int pGrade );
};

std::ostream& operator<<( std::ostream &os, const Form& prForm);

#endif

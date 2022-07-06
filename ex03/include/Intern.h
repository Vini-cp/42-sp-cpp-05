// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "Form.h"

class Intern
{
public:
    Intern( void );
    Intern( const Intern& prIntern );
    ~Intern( void );

    Intern& operator=( const Intern& prIntern);

    Form* makeForm( std::string pName, std::string pTarget);

private:
    const int static msNumberOfForms = 3;
    std::string mFormNames[ msNumberOfForms ];
    Form* ( Intern::*mpFormTypes[ msNumberOfForms ] )( std::string pTarget );

    Form* createShrubberyForm( std::string pTarget );
    Form* createRobotomyForm( std::string pTarget );
    Form* createPresidentialForm( std::string pTarget );

};

#endif

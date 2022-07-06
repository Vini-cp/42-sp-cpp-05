// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef SCHUBBERYCREATIONFORM_H
#define SCHUBBERYCREATIONFORM_H

#include "Form.h"
#include <iostream>

class ShrubberyCreationForm : public Form
{
public:

    ShrubberyCreationForm( void );
    ShrubberyCreationForm( const std::string& prTarget );
    ShrubberyCreationForm( const ShrubberyCreationForm& prShrubberyCreationForm );
    virtual ~ShrubberyCreationForm( void );

    ShrubberyCreationForm& operator=( const ShrubberyCreationForm &prShrubberyCreationForm );

    virtual bool execute(const Bureaucrat& prExecutor ) const;
 
private:

    std::string mTarget;
};

#endif

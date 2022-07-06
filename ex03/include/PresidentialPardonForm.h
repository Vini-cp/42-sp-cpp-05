// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.h"
#include <iostream>

class PresidentialPardonForm : public Form
{
public:

    PresidentialPardonForm( void );
    PresidentialPardonForm( const std::string& prTarget );
    PresidentialPardonForm( const PresidentialPardonForm& prPresidentialPardonForm );
    virtual ~PresidentialPardonForm( void );

    PresidentialPardonForm& operator=( const PresidentialPardonForm &prPresidentialPardonForm );

    virtual bool execute(const Bureaucrat& prExecutor ) const;
 
private:

    std::string mTarget;
};

#endif

// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.h"
#include <iostream>

class RobotomyRequestForm : public Form
{
public:

    RobotomyRequestForm( void );
    RobotomyRequestForm( const std::string& prTarget );
    RobotomyRequestForm( const RobotomyRequestForm& prRobotomyRequestForm );
    virtual ~RobotomyRequestForm( void );

    RobotomyRequestForm& operator=( const RobotomyRequestForm &prRobotomyRequestForm );

    virtual bool execute(const Bureaucrat& prExecutor ) const;
 
private:

    std::string mTarget;
};

#endif

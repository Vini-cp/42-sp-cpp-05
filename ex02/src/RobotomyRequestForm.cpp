// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/RobotomyRequestForm.h"

#include <cstdlib>
#include <ctime>

//------------------------------------------------------------------------------

RobotomyRequestForm::RobotomyRequestForm( void ) :
    Form( "NoTarget", 72, 45 ),
    mTarget( "RobotomyReques" )
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

RobotomyRequestForm::RobotomyRequestForm( const std::string& prTarget ) :
    Form( "RobotomyReques", 72, 45 ),
    mTarget( prTarget )
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

//------------------------------------------------------------------------------

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& prRobotomyRequestForm ) :
    Form( prRobotomyRequestForm.getName(),
          prRobotomyRequestForm.getGradeToSign(),
          prRobotomyRequestForm.getGradeToExecute() ),
    mTarget ( prRobotomyRequestForm.mTarget )
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

//------------------------------------------------------------------------------

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    std::cout << "RobotomyRequestForm destructor of " << getName() << " called" << std::endl;
}

//------------------------------------------------------------------------------

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm &prRobotomyRequestForm )
{
    if ( this == &prRobotomyRequestForm ) return *this;

    mTarget = prRobotomyRequestForm.mTarget;
    setIsSigned( prRobotomyRequestForm.getIsSigned() );

    return *this;
}

//------------------------------------------------------------------------------

bool RobotomyRequestForm::execute(const Bureaucrat& prExecutor ) const
{
    if ( !checkRequirementsToExecute( prExecutor ) ) return false;

    std::cout << "Drilling noises ... " << std::endl;

    srand( clock() );

    if ( rand() % 2 )
    {
        std::cout << mTarget << " has been robotomized successfully." << std::endl;
    }
    else
    {
        std::cout << mTarget << " has NOT been robotomized." << std::endl;
    }

    return true;
}

//------------------------------------------------------------------------------

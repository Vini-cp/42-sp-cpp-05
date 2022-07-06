// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/PresidentialPardonForm.h"

//------------------------------------------------------------------------------

PresidentialPardonForm::PresidentialPardonForm( void ) :
    Form( "NoTarget", 25, 5 ),
    mTarget( "PresidentialPardon" )
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

PresidentialPardonForm::PresidentialPardonForm( const std::string& prTarget ) :
    Form( "PresidentialPardon", 25, 5 ),
    mTarget( prTarget )
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

//------------------------------------------------------------------------------

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& prPresidentialPardonForm ) :
    Form( prPresidentialPardonForm.getName(),
          prPresidentialPardonForm.getGradeToSign(),
          prPresidentialPardonForm.getGradeToExecute() ),
    mTarget ( prPresidentialPardonForm.mTarget )
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

//------------------------------------------------------------------------------

PresidentialPardonForm::~PresidentialPardonForm( void )
{
    std::cout << "PresidentialPardonForm destructor of " << getName() << " called" << std::endl;
}

//------------------------------------------------------------------------------

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm &prPresidentialPardonForm )
{
    if ( this == &prPresidentialPardonForm ) return *this;

    mTarget = prPresidentialPardonForm.mTarget;
    setIsSigned( prPresidentialPardonForm.getIsSigned() );

    return *this;
}

//------------------------------------------------------------------------------

bool PresidentialPardonForm::execute(const Bureaucrat& prExecutor ) const
{
    if ( !checkRequirementsToExecute( prExecutor ) ) return false;

    std::cout << mTarget << " has been pardoned by Zaphod Beeblebrox." << std::endl;

    return true;
}

//------------------------------------------------------------------------------

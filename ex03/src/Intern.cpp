// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Intern.h"
#include "../include/ShrubberyCreationForm.h"
#include "../include/RobotomyRequestForm.h"
#include "../include/PresidentialPardonForm.h"

//------------------------------------------------------------------------------

Intern::Intern( void )
{
    mFormNames[ 0 ] = "shrubbery creation";
    mFormNames[ 1 ] = "robotomy request";
    mFormNames[ 2 ] = "presidential pardon";

    mpFormTypes[ 0 ] = &Intern::createShrubberyForm;
    mpFormTypes[ 1 ] = &Intern::createRobotomyForm;
    mpFormTypes[ 2 ] = &Intern::createPresidentialForm;

    std::cout << "Intern default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Intern::~Intern( void )
{
    std::cout << "Intern destructor called" << std::endl;
}

//------------------------------------------------------------------------------

Intern::Intern( const Intern& prIntern )
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = prIntern;
}

//------------------------------------------------------------------------------

Intern& Intern::operator=( const Intern& prIntern )
{
    if ( this == &prIntern ) return *this;

    Intern();

    return *this;
}

//------------------------------------------------------------------------------

Form* Intern::makeForm(std::string pName, std::string pTarget)
{  
    for ( int i = 0; i < msNumberOfForms; i++ )
    {
        if ( pName == mFormNames[ i ] )
        {
            std::cout << "Intern creates " << pName << std::endl;
            return ( ( this->*mpFormTypes[ i ] )( pTarget ) );
        }
    }
    std::cout << "It does not exist a form with this name: " << pName << std::endl;

    return NULL;
}

//------------------------------------------------------------------------------

Form* Intern::createShrubberyForm( std::string pTarget )
{
    return ( new ShrubberyCreationForm( pTarget ) );
}

//------------------------------------------------------------------------------

Form* Intern::createRobotomyForm( std::string pTarget )
{
    return ( new RobotomyRequestForm( pTarget ) );
}

//------------------------------------------------------------------------------

Form* Intern::createPresidentialForm( std::string pTarget )
{
    return ( new PresidentialPardonForm( pTarget ) );
}

//------------------------------------------------------------------------------

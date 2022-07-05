// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Bureaucrat.h"

//------------------------------------------------------------------------------

Bureaucrat::Bureaucrat( void ) : mName( "" ), mGrade( 150 )
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Bureaucrat::Bureaucrat( const std::string& pName, const int pGrade ) : mName( pName )
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    setGrade( pGrade );
}

//------------------------------------------------------------------------------

Bureaucrat::Bureaucrat( const Bureaucrat& prBureacrat )
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = prBureacrat;
}

//------------------------------------------------------------------------------

Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Bureaucrat destructor of " << mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& prBureacrat )
{
    if ( this == &prBureacrat ) return *this;

    mGrade = prBureacrat.mGrade;

    return *this;
}

//------------------------------------------------------------------------------

const std::string& Bureaucrat::getName( void ) const
{
    return mName;
}

//------------------------------------------------------------------------------

void Bureaucrat::setGrade( const int pGrade )
{
    if ( pGrade < 1 )
    {
        throw GradeTooHighException();
    }
    else if ( pGrade > 150 )
    {
        throw GradeTooLowException();
    }
    else
    {
        mGrade = pGrade;
    }       
}

//------------------------------------------------------------------------------

int Bureaucrat::getGrade( void ) const
{
    return mGrade;
}

//------------------------------------------------------------------------------

void Bureaucrat::incrementGrade( void )
{
    setGrade( mGrade - 1 );
}

//------------------------------------------------------------------------------

void Bureaucrat::decrementGrade( void )
{
    setGrade( mGrade + 1 );
}

//------------------------------------------------------------------------------

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "BureaucratException: grade too high, maximum acceptable value is 1.";
}

//------------------------------------------------------------------------------

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "BureaucratException: grade too low, minimun acceptable value is 150.";
}

//------------------------------------------------------------------------------

void Bureaucrat::signForm( Form& form )
{
    try
    {
        form.beSigned( *this );
        std::cout << mName << " signed " << form.getName() << std::endl;
    }
    catch ( std::exception& e )
    {
        std::cout << mName << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

//------------------------------------------------------------------------------

std::ostream& operator<<( std::ostream& os, const Bureaucrat& prBureaucrat )
{
    os << prBureaucrat.getName()
       << ", bureaucrat grade "
       << prBureaucrat.getGrade()
       << '.';

    return os;
}

//------------------------------------------------------------------------------

// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/Form.h"

//------------------------------------------------------------------------------

Form::Form( void ) :
    mName( "" ),
    mGradeToSign( 150 ),
    mGradeToExecute( 150 ),
    mIsSigned( false )
{
    std::cout << "Form default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Form::Form( const std::string& pName, const int pGradeToSign, const int pGradeToExecute ) :
    mName( pName ),
    mGradeToSign( pGradeToSign ),
    mGradeToExecute( pGradeToExecute ),
    mIsSigned( false )
{
    std::cout << "Form constructor called" << std::endl;
    checkGrade( pGradeToSign );
    checkGrade( pGradeToExecute );
}

//------------------------------------------------------------------------------

Form::Form( const Form& prForm ) :
    mName( prForm.mName ),
    mGradeToSign( prForm.mGradeToSign ),
    mGradeToExecute( prForm.mGradeToExecute ),
    mIsSigned( prForm.mIsSigned )
{
    std::cout << "Form copy constructor called" << std::endl;
}

//------------------------------------------------------------------------------

Form::~Form( void )
{
    std::cout << "Form destructor of " << mName << " called" << std::endl;
}

//------------------------------------------------------------------------------

Form& Form::operator=( const Form &prForm )
{
    if ( this == &prForm ) return *this;

    mIsSigned = prForm.mIsSigned;

    return *this;
}

//------------------------------------------------------------------------------

const std::string& Form::getName( void ) const
{
    return mName;
}

//------------------------------------------------------------------------------

bool Form::getIsSigned( void ) const
{
    return mIsSigned;
}

//------------------------------------------------------------------------------

int Form::getGradeToSign( void ) const
{
    return mGradeToSign;
}

//------------------------------------------------------------------------------

int Form::getGradeToExecute( void ) const
{
    return mGradeToExecute;
}

//------------------------------------------------------------------------------

void Form::checkGrade( const int pGrade )
{
    if ( pGrade < 1 )
    {
        throw GradeTooHighException();
    }
    else if ( pGrade > 150 )
    {
        throw GradeTooLowException();
    }
}

//------------------------------------------------------------------------------

void Form::beSigned( const Bureaucrat& prBureaucrat )
{
    if ( prBureaucrat.getGrade() <= mGradeToSign )
    {
        mIsSigned = true;
    }
    else
    {
        throw Form::GradeTooLowToSignException();
    }
}

//------------------------------------------------------------------------------

const char* Form::GradeTooHighException::what() const throw()
{
    return "FormException: grade too high, maximum acceptable value is 1.";
}

//------------------------------------------------------------------------------

const char* Form::GradeTooLowException::what() const throw()
{
    return "FormException: grade too low, minimun acceptable value is 150.";
}

//------------------------------------------------------------------------------

const char* Form::GradeTooLowToSignException::what() const throw()
{
    return "FormException: grade too low to sign!";
}

//------------------------------------------------------------------------------

std::ostream& operator<<( std::ostream& os, const Form& prForm )
{
    os << prForm.getName() << std::endl;
    os << "Grade to sign: " << prForm.getGradeToSign() << std::endl;
    os << "Grade to execute: " << prForm.getGradeToExecute() << std::endl;
    os << "Is signed: " << prForm.getIsSigned();
    return os;
}

//------------------------------------------------------------------------------

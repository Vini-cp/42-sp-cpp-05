// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "../include/ShrubberyCreationForm.h"

#include <fstream>

//------------------------------------------------------------------------------

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
    Form( "NoTarget", 145, 137 ),
    mTarget( "ShrubberyCreation" )
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

//------------------------------------------------------------------------------

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& prTarget ) :
    Form( "ShrubberyCreation", 145, 137 ),
    mTarget( prTarget )
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

//------------------------------------------------------------------------------

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& prShrubberyCreationForm ) :
    Form( prShrubberyCreationForm.getName(),
          prShrubberyCreationForm.getGradeToSign(),
          prShrubberyCreationForm.getGradeToExecute() ),
    mTarget ( prShrubberyCreationForm.mTarget )
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

//------------------------------------------------------------------------------

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    std::cout << "ShrubberyCreationForm destructor of " << getName() << " called" << std::endl;
}

//------------------------------------------------------------------------------

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &prShrubberyCreationForm )
{
    if ( this == &prShrubberyCreationForm ) return *this;

    mTarget = prShrubberyCreationForm.mTarget;
    setIsSigned( prShrubberyCreationForm.getIsSigned() );

    return *this;
}

//------------------------------------------------------------------------------

bool ShrubberyCreationForm::execute(const Bureaucrat& prExecutor ) const
{
    if ( !checkRequirementsToExecute( prExecutor ) ) return false;

    std::ofstream outFile;

    outFile.open ( (mTarget + "_shrubbery").c_str() );

    outFile << "          *          \n"
            << "         ***         \n"
            << "        *****        \n"
            << "       *******       \n"
            << "      *********      \n"
            << "     ***********     \n"
            << "    *************    \n"
            << "   ***************   \n"
            << "  *****************  \n"
            << "        *****        \n"
            << "        *****        \n";

    outFile.close();

    return true;
}

//------------------------------------------------------------------------------

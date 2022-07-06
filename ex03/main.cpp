// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/Intern.h"
#include "./include/ShrubberyCreationForm.h"
#include "./include/RobotomyRequestForm.h"
#include "./include/PresidentialPardonForm.h"

int main( void )
{
    {
        std::cout << "================ Intern Shrubbery Form ================" << std::endl;
        try
        {
            Intern lIntern = Intern();
            Form *lForm = lIntern.makeForm( "shrubbery creation", "Farm" );

            Bureaucrat lBureau = Bureaucrat( "A bureau", 10 );

            std::cout << std::endl << "Sign: ";
            lBureau.signForm( *lForm );
            std::cout << std::endl;

            std::cout << "Execute: ";
            lBureau.executeForm( *lForm );
            std::cout << std::endl;

            delete lForm;
        }
        catch ( std::exception& e )
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "================ Intern Robotomy Form =================" << std::endl;
        try
        {
            Intern lIntern = Intern();
            Form *lForm = lIntern.makeForm( "robotomy request", "Farm" );

            Bureaucrat lBureau = Bureaucrat( "A bureau", 10 );

            std::cout << std::endl << "Sign: ";
            lBureau.signForm( *lForm );
            std::cout << std::endl;

            std::cout << "Execute: ";
            lBureau.executeForm( *lForm );
            std::cout << std::endl;

            delete lForm;
        }
        catch ( std::exception& e )
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "=============== Intern Presidential Form ==============" << std::endl;
        try
        {
            Intern lIntern = Intern();
            Form *lForm = lIntern.makeForm( "presidential pardon", "Farm" );

            Bureaucrat lBureau = Bureaucrat( "A bureau", 10 );

            std::cout << std::endl << "Sign: ";
            lBureau.signForm( *lForm );
            std::cout << std::endl;

            std::cout << "Execute: ";
            lBureau.executeForm( *lForm );
            std::cout << std::endl;

            delete lForm;
        }
        catch ( std::exception& e )
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "================ Intern Shrubbery Error ===============" << std::endl;
        try
        {
            Intern lIntern = Intern();
            Form *lForm = lIntern.makeForm( "shrubbery aaa", "Farm" );

            if ( lForm )
            {
                Bureaucrat lBureau = Bureaucrat( "A bureau", 10 );

                std::cout << std::endl << "Sign: ";
                lBureau.signForm( *lForm );
                std::cout << std::endl;

                std::cout << "Execute: ";
                lBureau.executeForm( *lForm );
                std::cout << std::endl;
            }

            delete lForm;
        }
        catch ( std::exception& e )
        {
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "=======================================================" << std::endl << std::endl;

    return 0;
}

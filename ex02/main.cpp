// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/ShrubberyCreationForm.h"
#include "./include/RobotomyRequestForm.h"
#include "./include/PresidentialPardonForm.h"

int main( void )
{
    {
        std::cout << "================ ShrubberyCreationForm ================" << std::endl;
        try
        {
            Form *lForm = new ShrubberyCreationForm( "Farm" );

            Bureaucrat lBureau = Bureaucrat( "A bureau", 10 );

            std::cout << std::endl << "Sign: ";
            lBureau.signForm( *lForm );
            std::cout << std::endl;

            std::cout << "Execute: ";
            lBureau.executeForm( *lForm );
            std::cout << std::endl;

            delete lForm;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "================= RobotomyRequestForm =================" << std::endl;

        try
        {
            Form *lForm = new RobotomyRequestForm( "Robot" );

            Bureaucrat lBureau = Bureaucrat( "A bureau", 10 );

            std::cout << std::endl << "Sign: ";
            lBureau.signForm( *lForm );
            std::cout << std::endl;

            std::cout << "Execute: ";
            lBureau.executeForm( *lForm );
            std::cout << std::endl;

            delete lForm;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "=============== PresidentialPardonForm ================" << std::endl;

        try
        {
            Form *lForm = new PresidentialPardonForm( "Charles" );

            Bureaucrat lBureau = Bureaucrat( "A bureau", 5 );

            std::cout << std::endl << "Sign: ";
            lBureau.signForm( *lForm );
            std::cout << std::endl;

            std::cout << "Execute: ";
            lBureau.executeForm( *lForm );
            std::cout << std::endl;

            delete lForm;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "=============== PresidentialPardonForm ================" << std::endl;

        try
        {
            Form *lForm = new PresidentialPardonForm( "Charles" );

            Bureaucrat lBureau = Bureaucrat( "A bureau", 5 );

            std::cout << std::endl << "Execute: ";
            lBureau.executeForm( *lForm );
            std::cout << std::endl;

            delete lForm;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "=============== PresidentialPardonForm ================" << std::endl;

        try
        {
            Form *lForm = new PresidentialPardonForm( "Charles" );

            Bureaucrat lBureau = Bureaucrat( "A bureau", 10 );

            std::cout << std::endl << "Sign: ";
            lBureau.signForm( *lForm );
            std::cout << std::endl;

            std::cout << "Execute: ";
            lBureau.executeForm( *lForm );
            std::cout << std::endl;

            delete lForm;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "=======================================================" << std::endl << std::endl;

    return 0;
}

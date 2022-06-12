// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/Bureaucrat.h"

int main( void )
{
    {
        std::cout << "============= NormalUse =============" << std::endl;

        Bureaucrat lBureau = Bureaucrat( "Bureau", 58 );
        std::cout << lBureau << std::endl;

        lBureau.incrementGrade();
        std::cout << lBureau << std::endl;

        lBureau.decrementGrade();
        std::cout << lBureau << std::endl << std::endl;
    }
    {
        std::cout << "=====================================" << std::endl << std::endl;
        std::cout << "============ Above Limit ============" << std::endl;

        try
        {
            Bureaucrat lBureau( "high", 0 );
            std::cout << lBureau << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=====================================" << std::endl << std::endl;
        std::cout << "============ Under Limit ============" << std::endl;

        try
        {
            Bureaucrat lBureau( "low", 200 );
            std::cout << lBureau << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=====================================" << std::endl << std::endl;
        std::cout << "========= Normal then Above =========" << std::endl;

        try
        {
            Bureaucrat lBureau( "high", 1 );
            std::cout << lBureau << std::endl;

            lBureau.incrementGrade();
		    std::cout << lBureau << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=====================================" << std::endl << std::endl;
        std::cout << "========= Normal then Under =========" << std::endl;

        try
        {
            Bureaucrat lBureau( "high", 150 );
            std::cout << lBureau << std::endl;

            lBureau.decrementGrade();
		    std::cout << lBureau << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "=====================================" << std::endl << std::endl;
    }

	return 0;
}

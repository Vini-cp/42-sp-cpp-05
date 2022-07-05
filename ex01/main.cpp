// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/Bureaucrat.h"
#include "./include/Form.h"

int main( void )
{
    {
        std::cout << "================ Form Sign Above Limit ================" << std::endl;

        try
        {
            Form lForm = Form( "A form", 0, 10 );
            std::cout << lForm << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "================ Form Exec Above Limit ================" << std::endl;

        try
        {
            Form lForm = Form( "A form", 10, 0 );
            std::cout << lForm << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "================ Form Sign Under Limit ================" << std::endl;

        try
        {
            Form lForm = Form( "A form", 151, 10 );
            std::cout << lForm << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "================ Form Exec Under Limit ================" << std::endl;

        try
        {
            Form lForm = Form( "A form", 10, 151 );
            std::cout << lForm << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "================ Form BOTH Under Limit ================" << std::endl;

        try
        {
            Form lForm = Form( "A form", 151, 151 );
            std::cout << lForm << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "==================== Form correct =====================" << std::endl;

        try
        {
            Form lForm = Form( "A form", 15, 15 );
            std::cout << lForm << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "=================== Form Signed -Ok ===================" << std::endl;

        try
        {
            Form lForm = Form( "A form", 15, 15 );
            Bureaucrat lBureau = Bureaucrat( "A bureau", 10 );
            lBureau.signForm( lForm );
            std::cout << lForm << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=======================================================" << std::endl << std::endl;
        std::cout << "=================== Form Not Signed ===================" << std::endl;

        try
        {
            Form lForm = Form( "A form", 15, 15 );
            Bureaucrat lBureau = Bureaucrat( "A bureau", 20 );
            lBureau.signForm( lForm );
            std::cout << lForm << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "=======================================================" << std::endl << std::endl;

    return 0;
}

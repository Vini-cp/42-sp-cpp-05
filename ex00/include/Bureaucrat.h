// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
public:

    Bureaucrat( std::string const& pName, int const pGrade );
    ~Bureaucrat( void );

    const std::string& getName( void ) const;
    
    void setGrade( int const pGrade );
    int getGrade( void ) const;

    void incrementGrade( void );
    void decrementGrade( void );
    
    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

private:

    std::string const mName;
    int mGrade;

};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& prBureaucrat);

#endif

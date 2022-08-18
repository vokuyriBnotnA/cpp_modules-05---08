#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    const std::string _name;
    bool _isSigned;
    const unsigned int _gradeToExecute;
    const unsigned int _gradeToSign;
    static const unsigned int low = 150;
    static const unsigned int high = 1;

    Form();

    public:

    Form(const std::string &name, int gradeToSign, int gradeToExecute);
    Form(const Form &f);
    ~Form();

    Form &operator=(const Form &f);

    const std::string &getName() const;
    void checkGrade() const;
    void checkExecutability(const Bureaucrat &bureaucrat) const;
    int getSignGrade() const;
    int getExecuteGrade() const;
    bool beSigned(const Bureaucrat &bureaucrat);
    std::string getInfo();

    static bool check;


    class GradeTooHighException : public std::exception
    {
        public:

        virtual const char* what() const throw()
        {
            return ("Grade is too high");
        }
    };
    class GradeTooLowException : public std::exception
    {
        public:

        virtual const char* what() const throw()
        {
            return ("Grade is too low");
        }
    };
    class CanExecuteForm : public std::exception
    {
        public:

        virtual const char* what() const throw()
        {
            return ("Bureaucrat can't execute this form");
        }
    };
};

#endif
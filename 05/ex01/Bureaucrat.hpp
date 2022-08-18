#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    const std::string _name;
    unsigned int _grade;
	static const unsigned int low = 150;
	static const unsigned int high = 1;

    public:

    Bureaucrat();
	Bureaucrat(const std::string &name, unsigned int grade);
	Bureaucrat(const Bureaucrat &f);
    ~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &f);

    std::string getName();
    unsigned int getGrade() const;
    void upGrade(unsigned int point);
    void downGrade(unsigned int point);
	std::string getInfo();

	//For Form
	bool executeForm(const Form &f) const;
	bool signedForm(Form &f) const;

    static bool	check;
    void checkGrade(void) const;

    class GradeTooHighException : public std::exception
	{
		public:
		
		virtual const char* what() const throw()
		{
			return ("The grade you set is too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:

		virtual const char* what() const throw()
		{
			return ("The grade you set is too low");
		}
	};

};

#endif
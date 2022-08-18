#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

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
    unsigned int getGrade();
    void upGrade(unsigned int point);
    void downGrade(unsigned int point);
	std::string getInfo();

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
#include "Bureaucrat.hpp"

	int	main(void)
{
	Bureaucrat::check = true;
	try
	{
		Bureaucrat	joe = Bureaucrat("Joe", 1);
		std::cout << joe.getInfo() << std::endl;
		joe.downGrade(1);
		std::cout << joe.getInfo() << std::endl;
		joe.upGrade(1);
		std::cout << joe.getInfo() << std::endl;

		joe.upGrade(1);
		std::cout << joe.getInfo() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jack = Bureaucrat("Jack", 150);
		std::cout << jack.getInfo() << std::endl;
		jack.upGrade(1);
		std::cout << jack.getInfo() << std::endl;
		jack.downGrade(1);

		std::cout << jack.getInfo() << std::endl;
		jack.downGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat john = Bureaucrat("John", 0);
		std::cout << john.getInfo() << std::endl;
		john.downGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jillian = Bureaucrat("Jillian", 151);
		std::cout << jillian.getInfo() << std::endl;
		jillian.upGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
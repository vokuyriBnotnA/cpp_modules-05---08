#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(Bureaucrat::low)
{
    if (Bureaucrat::check)
		std::cout << "Constructor for Bureaucrat (default)" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(name), _grade(grade)
{
    checkGrade();
	if (Bureaucrat::check)
		std::cout << "Constructor for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &f)
{
    if (Bureaucrat::check)
		std::cout << "Copy constructor for Bureaucrat" << std::endl;
    *this = f;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &f)
{
    _grade = f._grade;
    if (Bureaucrat::check)
		std::cout << "Operator = for Bureaucrat" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    if (Bureaucrat::check)
		std::cout << "Destructor for Bureaucrat" << std::endl;
}

std::string Bureaucrat::getName()
{
    return _name;
}

unsigned int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::upGrade(unsigned int point)
{
    if (Bureaucrat::check)
		std::cout << "upGrade for Bureaucrat " << _name << " on " << point << " points" << std::endl;
    _grade -= point;
    checkGrade();
}

void Bureaucrat::downGrade(unsigned int point)
{
    if (Bureaucrat::check)
		std::cout << "downGrade for Bureaucrat " << _name << " on " << point << " points" << std::endl;
    _grade += point;
    checkGrade();
}

void Bureaucrat::checkGrade(void) const
{
    if (this->_grade < Bureaucrat::high)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > Bureaucrat::low)
		throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getInfo()
{
    return ("Bureaucrat " + _name + "; Grade " + std::to_string(_grade));
}

//For Form
bool Bureaucrat::executeForm(const Form &f) const
{
  try
  {
    f.checkExecutability(*this);
    std::cout << _name << " executes form " << f.getName() << std::endl;
    return true;
  }
  catch(Form::CanExecuteForm &e)
  {
    std::cout << e.what() << std::endl;
    return false;
  }
  
}

bool Bureaucrat::signedForm(Form &f) const
{
  if (f.beSigned(*this))
  {
      std::cout << _name << " signed form " << f.getName() << std::endl;
      return true;
  }
  else
  {
      std::cout << _name << " cant't signed form " << f.getName() << " cause grade is too low" << std::endl;
      return true;
  }
}
 
bool Bureaucrat::check = false;
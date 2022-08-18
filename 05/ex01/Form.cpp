#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
    checkGrade();
    if (Form::check)
        std::cout << "Construct for Form" << std::endl;
}

Form::Form() : _name(""), _isSigned(false), _gradeToExecute(Form::low), _gradeToSign(Form::low)
{
    if (Form::check)
        std::cout << "Standart construct for Form" << std::endl;
}

Form::Form(const Form &f) : _name(f.getName()), _isSigned(f.getSignGrade()), _gradeToExecute(f.getExecuteGrade()), _gradeToSign(f.getSignGrade())
{
    if (Form::check)
        std::cout << "Copy construct for Form" << std::endl;
    *this = f;
}

Form::~Form()
{
    if (Form::check)
        std::cout << "Destruct for Form" << std::endl;
}

Form &Form::operator=(const Form &f)
{
    _isSigned = f._isSigned;
    if (Form::check)
        std::cout << "Operator = for Form" << std::endl;
    return *this;
}

const std::string &Form::getName() const
{
    return _name;
}

void Form::checkGrade() const
{
    if (_gradeToExecute < Form::high || _gradeToSign < Form::high)
        throw Form::GradeTooHighException();
    if (_gradeToExecute > Form::low || _gradeToSign > Form::low)
        throw Form::GradeTooLowException();
}

int Form::getSignGrade() const
{
    return _isSigned;
}

int Form::getExecuteGrade() const
{
    return _gradeToExecute;
}

void Form::checkExecutability(const Bureaucrat &bureaucrat) const
{
    if (_isSigned == false || bureaucrat.getGrade() < _gradeToExecute)
        throw Form::CanExecuteForm();
}

bool Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() < _gradeToSign)
    {
        _isSigned = true;
        return true;
    }
    else
    {
        _isSigned = false;
        return false;
    }
}

std::string Form::getInfo()
{
    if (_isSigned)
        return ("Form " + _name + " is signed by " + std::to_string(_gradeToSign) + " grade & exetucte by " + std::to_string(_gradeToExecute) + " grade, & " + "signed");
    else
        return ("Form " + _name + " is signed by " + std::to_string(_gradeToSign) + " grade & exetucte by " + std::to_string(_gradeToExecute) + " grade, & " + "not signed");
}

bool Form::check = false;
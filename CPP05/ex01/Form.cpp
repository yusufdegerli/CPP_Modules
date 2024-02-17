#include "Form.hpp"

Form::Form() : name("NULL"), gradeSign(150), gradeExec(150)
{
	std::cout << "Form - Default Constructor\n";
}
Form::Form(const std::string name, int gradeSign, int gradeExec) : name(name), gradeSign(gradeSign), gradeExec(gradeExec)
{
	std::cout << "Form - Constructor\n";
	if (gradeSign > 150)
		throw GradeTooLowException();
	else if (gradeSign < 1)
		throw GradeTooHighException();
	if (gradeExec > 150)
		throw GradeTooLowException();
	else if (gradeExec < 1)
		throw GradeTooHighException();
}
Form::~Form()
{
	std::cout << "Form - Default Destructor\n";
}

Form::Form(Form &cpy) : name(cpy.getName()), gradeSign(cpy.getGradeSign()), gradeExec(cpy.getGradeExec())
{
	std::cout << "Form - Copy Constructor\n";
	if (gradeSign > 150)
		throw GradeTooLowException();
	else if (gradeSign < 1)
		throw GradeTooHighException();
	if (gradeExec > 150)
		throw GradeTooLowException();
	else if (gradeExec < 1)
		throw GradeTooHighException();
}

bool Form::getSign() const
{
	std::cout<<"Sign'ın değeri : "<<sign<<std::endl;
	return sign;
}

const std::string Form::getName() const
{
	return this->name;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form - Grade is too High!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form - Grade is too Low!";
}

const char *Form::AlreadySignedException::what() const throw()
{
	return "That FORM has been already SIGNED!\n";
}

Form &Form::operator=(Form const &value)
{
	std::cout << "Form - operator\n";
	this->sign = value.sign;
	return *this;
}

int Form::getGradeExec() const
{
	return gradeExec;
}

int Form::getGradeSign() const
{
	return gradeSign;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->sign)
		throw AlreadySignedException();
	if (this->gradeSign < bureaucrat.getGrade())
		throw GradeTooLowException();
	this->sign = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Name: " << form.getName() << "\nSign: " << form.getSign() << "\nGradeSign: " << form.getGradeSign() << "\nGradeExec: " << form.getGradeExec() << std::endl;
	return os;
}

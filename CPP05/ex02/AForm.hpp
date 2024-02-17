#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
protected:
	const std::string name;
	const int gradeSign;
	const int gradeExec;
	bool sign;
	AForm();
	virtual void exec()const = 0;

public:
	// ORTHODOX CANNOCIAL FORMS
	virtual ~AForm();
	AForm &operator=(AForm const &value);
	AForm(std::string name, int gradeSign, int gradeExec);
	AForm(AForm &cpy);
	//-------------------------
	// GETS
	const std::string getName() const;
	int getGradeSign() const;
	int getGradeExec() const;
	bool getSign() const;
	//-------------------------
	// UTILS
	void beSigned(const Bureaucrat &bureaucrat);
	void execute(const Bureaucrat &bureaucrat)const;
	//--------------------------

	// EXCEPTIONS
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class AlreadySignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class UnsignedFormException: public std::exception{
		virtual const char *what() const throw();
	};
	//------------
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

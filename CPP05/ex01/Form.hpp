#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		const int gradeSign;
		const int gradeExec;
		bool sign;

	public:
	//ORTHODOX CANNOCIAL FORMS
		Form();
		~Form();
		Form &operator=(Form const &value);
		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form &cpy);
	//-------------------------
	//GETS
		const std::string	getName() const;
		int					getGradeSign()const;
		int					getGradeExec()const;
		bool				getSign()const;
	//-------------------------
	//UTILS
		void beSigned(const Bureaucrat &bureaucrat);
	//--------------------------

		//EXCEPTIONS
		class GradeTooHighException : public std::exception{
			public:
					virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
					virtual const char* what() const throw();
		};
		class AlreadySignedException : public std::exception{
			public:
					virtual const char* what() const throw();
		};
		//------------
};

std::ostream& operator<<(std::ostream &os, const Form& form);

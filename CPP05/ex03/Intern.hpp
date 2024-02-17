#pragma once
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern;
typedef AForm* (Intern::*funcs)(const std::string&)const;

class Intern
{
	private:
		static const std::string	AformNames[3];
		static const funcs			AformFuncs[3];
		AForm* presidentialCreater(const std::string& target)const;
		AForm* robotomyCreater(const std::string& target)const;
		AForm* shrubberyCreater(const std::string& target)const;
	public:
		Intern();
		Intern(Intern &cpy);
		~Intern();
		Intern &operator=(const Intern &value);
		AForm* makeForm(const std::string& formName, const std::string& target)const;
		class	WrongFormNameException: public std::exception{
			virtual const char *what() const throw();
		};
};

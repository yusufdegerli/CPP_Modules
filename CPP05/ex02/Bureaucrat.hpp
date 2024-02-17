#pragma once
#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:

		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &cpy);
		void	increase();
		void	executeForm(const AForm &form);
		void	decrase();
		void	increase(int value);
		void	decrase(int value);
		void	signForm(AForm &form);
		const std::string getName() const ;
		int getGrade() const ;
		Bureaucrat &operator=(Bureaucrat const &value);
		class GradeTooHighException: public std::exception{
		public:
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& bureaucrat);

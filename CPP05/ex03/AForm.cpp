#include "AForm.hpp"

AForm::AForm() : name("NULL"), gradeSign(150), gradeExec(150)
{
	std::cout<<"AForm - Default Constructor\n";
}
AForm::AForm(const std::string name, int gradeSign, int gradeExec) : name(name), gradeSign(gradeSign), gradeExec(gradeExec)
{
	std::cout<<"AForm - Constructor\n";
	if(gradeSign > 150)
		throw GradeTooLowException();
	else if(gradeSign < 1)
		throw GradeTooHighException();
	if(gradeExec > 150)
		throw GradeTooLowException();
	else if(gradeExec < 1)
		throw GradeTooHighException();
}
AForm::~AForm(){
	std::cout<<"AForm - Default Destructor\n";
}

AForm::AForm(AForm &cpy) : name(cpy.getName()), gradeSign(cpy.getGradeSign()), gradeExec(cpy.getGradeExec())
{
	std::cout<<"AForm - Copy Constructor\n";
	if(gradeSign > 150)
		throw GradeTooLowException();
	else if(gradeSign < 1)
		throw GradeTooHighException();
	if(gradeExec > 150)
		throw GradeTooLowException();
	else if(gradeExec < 1)
		throw GradeTooHighException();
}

bool AForm::getSign()const{
	return sign;
}

const std::string AForm::getName() const{
	return this->name;
}

const char* AForm::UnsignedFormException::what()const throw(){
	return "AForm - unsigned for execute";
}

const char* AForm::GradeTooHighException::what()const throw(){
	return "AForm - Grade is too High!";
}

const char* AForm::GradeTooLowException::what()const throw(){
	return "AForm - Grade is too Low!";
}

const char* AForm::AlreadySignedException::what()const throw(){
	return "That FORM has been already SIGNED!\n";
}

AForm & AForm::operator=(AForm const &value)
{
	std::cout<<"AForm - operator\n";
	this->sign = value.sign;
	return *this;
}

int AForm::getGradeExec()const{
	return gradeExec;
}

int AForm::getGradeSign()const{
	return gradeSign;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if(this->sign)
		throw AlreadySignedException();
	if(this->gradeSign < bureaucrat.getGrade())
		throw GradeTooLowException();
	this->sign = true;
}

void AForm::execute(const Bureaucrat &bureaucrat)const{
	if(!sign)
		throw UnsignedFormException();
	if(bureaucrat.getGrade() > this->gradeExec)
		throw GradeTooLowException();
	exec();
}

std::ostream& operator<<(std::ostream &os, const AForm& form){
	os<<"Name: "<<form.getName()<<"\nSign: "<<form.getSign()<<"\nGradeSign: "<<form.getGradeSign()<<"\nGradeExec: "<<form.getGradeExec()<<std::endl;
	return os;
}

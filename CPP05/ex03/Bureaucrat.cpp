#include "Bureaucrat.hpp"

/*Orthodox Cannonical AForm*/
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade){
	std::cout<<"Bureaucrat - Constructor\n";
	std::cout<< "The Bureaucrat name is : "<<name<<std::endl;
	std::cout<<"And grade point is : "<<grade<<std::endl;
	if(grade > 150)
		throw GradeTooHighException();
	else if(grade < 1)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat() : name("NULL"), grade(150){
	std::cout<<"Bureaucrat - Default Constructor\n";
	std::cout<< "The Bureaucrat name is : "<<name<<std::endl;
	std::cout<<"And grade point is : "<<grade<<std::endl;
	if(grade > 150)
		throw GradeTooHighException();
	else if(grade < 1)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){
	std::cout<<"Bureaucrat - Default Destructor\n";
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy) : name(cpy.getName()), grade(cpy.getGrade()){
	std::cout<<"Bureaucrat - Copy Constructor\n";
}

void	Bureaucrat::executeForm(const AForm &form){
	try{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}catch (std::exception& ex){
		std::cerr << ex.what() << std::endl;
	}
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &value){
	this->grade = value.getGrade();
	std::cout<<"Bureaucrat - operator\n";
	return *this;
}
/*--Get--*/
const std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

/*--Exceptions--*/
const char* Bureaucrat::GradeTooHighException::what()const throw(){
	return "Bureaucrat - Grade is to high!";
}

const char* Bureaucrat::GradeTooLowException::what()const throw(){
		return "Bureaucrat - Grade is too low!";
}


/*--Utils--*/
void	Bureaucrat::increase(){
	if(grade - 1 < 1)
		throw GradeTooHighException();
	grade -= 1;
}

void	Bureaucrat::decrase(){
	if(grade + 1 > 150)
		throw GradeTooLowException();
	grade += 1;
}

void	Bureaucrat::increase(int value){
	if (grade - value < 1)
		throw GradeTooHighException();
	grade -= value;
}

void Bureaucrat::decrase(int value){
	if(grade + value > 150)
		throw GradeTooLowException();
	grade += value;
}

void Bureaucrat::signForm(AForm &form){
	try{
		form.beSigned(*this);
		std::cout<<this->getName()<<" signed "<<form.getName()<<std::endl;
	}
	catch(std::exception &ex)
	{
		std::cout<<this->getName()<<" couldn't sign the "<<form.getName()
		<<" because "<<ex.what();
	}
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& bureaucrat){
	os<< "Name: "<< bureaucrat.getName() << "\nGrade: "<< bureaucrat.getGrade() <<std::endl;
	return os;
}

#include <iostream>

int main(void)
{
	std::string text = "HI THIS IS BRAIN";
	std::string *stringPTR = &text;
	std::string &stringREF = text;

	// std::cout<<"\n";
	// std::cout<<"text'in değeri : "<<text<<std::endl;
	// std::cout<<"text'in adresi :"<<&text<<std::endl;
	// std::cout<<"\n";

	// std::cout<<"stringPTR'nin değeri: "<<*stringPTR<<std::endl;
	// std::cout<<"stringPTR'nin adresi : "<<stringPTR<<std::endl;
	// std::cout<<"\n";

	// std::cout<<"stringREF'in değeri : "<<stringREF<<std::endl;
	// std::cout<<"stringREF'in adresi : "<<&stringREF<<std::endl;
	// std::cout<<"\n";
	return 0;
}

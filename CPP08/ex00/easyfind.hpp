#pragma once
#include <iostream>
#include <vector>
#include <list>

class NotFoundException: public std::exception{
	public:
		virtual	const char* what() const throw(){
			return ("Number does not found");
		}
};

template<typename T>
void	easyfind(T& container, int value){
	if (std::find(container.begin(), container.end(), value) != container.end())
		std::cout << "Value: " << value << " founded Succesfully!" << std::endl;
	else
		throw NotFoundException();
}

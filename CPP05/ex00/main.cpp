#include "Bureaucrat.hpp"

int	main() {
	std::cout << "\n\033[31mCONSTRUCTER" << std::endl;

	std::cout << std::endl << "(1)" << std::endl;
	try {
		Bureaucrat	yusuf("yusuf", 1);
		std::cout << yusuf << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "(2)" << std::endl;
	try {
		Bureaucrat	ahmet("ahmet", 0);
		std::cout << ahmet << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "(3)" << std::endl;
	try {
		Bureaucrat	ahmet("ahmet", 151);
		std::cout << ahmet << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}


	std::cout <<  "\n\033[32mINCREASE" << std::endl;

	try {
		Bureaucrat	yusuf("yusuf", 12);
		std::cout << yusuf << std::endl;
		yusuf.increase(10);
		std::cout << yusuf << std::endl;
		yusuf.increase();
		std::cout << yusuf << std::endl;
		yusuf.increase();
		std::cout << yusuf << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n\033[33mDECRASE" << std::endl;

	try {
		Bureaucrat	yusuf("yusuf", 139);
		std::cout << yusuf << std::endl;
		yusuf.decrase(10);
		std::cout << yusuf << std::endl;
		yusuf.decrase();
		std::cout << yusuf << std::endl;
		yusuf.decrase();
		std::cout << yusuf << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}

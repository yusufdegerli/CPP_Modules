#include "easyfind.hpp"

int main(void){
	std::vector<int> vc;
	vc.push_back(42);
	vc.push_back(34);
	vc.push_back(67);
	std::vector<int> vec2;
	vec2.push_back(15);
	vec2.push_back(25);
	vec2.push_back(35);
	try{
		easyfind(vc, 32);
	}catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		easyfind(vc, 67);
	}catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		easyfind(vec2, 15);
	}catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		easyfind(vc, 145);
	}catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
}

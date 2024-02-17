#include "scalar.hpp"

ScalarConverter::ScalarConverter(){
	std::cout<<"ScalarConverter - Constructor\n";
}

ScalarConverter::~ScalarConverter(){
	std::cout<<"ScalarConverter - Destructor\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy)
{
	(void)cpy;
	std::cout<<"ScalarConverter - Copy Constructor\n";
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter &val)
{
	(void)val;
	std::cout<<"ScalarConverter - operator\n";
	return *this;
}

int ScalarConverter::isall(std::string input)
{
	const char *cinput = input.c_str();
	for (size_t i = 0; i < input.length(); i++)
	{
		if(isalpha(cinput[i]) && cinput[i] != 'f')
		{
			return 1;
		}
	}
	return 0;
}

void ScalarConverter::var_init(void)
{
	variables var;
	var.integer = 0;
	var.chr = '\0';
	var.fl = 0.0;
	var.dou = 0.0;
}

void ScalarConverter::Convert(const std::string input)
{
	variables var;
	const char* cinput = input.c_str();
	if(!input.compare("0") || !input.compare("0.0f") || !input.compare("0.0"))
		ScalarConverter::var_init();
	if(input.length() == 1 && !std::isdigit(cinput[0]))// bölümü
	{
		var.chr = cinput[0];
		var.integer = static_cast<int>(cinput[0]);
		var.fl = static_cast<float>(cinput[0]);
		var.dou = static_cast<double>(cinput[0]);
		std::cout<<"char: "<<var.chr<<std::endl;
		std::cout<<"int: "<<var.integer<<std::endl;
		std::cout<<"double: "<<var.dou<<".0"<<std::endl;
		std::cout<<"float: "<<var.fl<<".0f"<<std::endl;
	}
	else if(!(input.compare("nan")) || !(input.compare("nanf")))
	{
		std::cout<<"char: Impossible"<<std::endl;
		std::cout<<"int: Impossible"<<std::endl;
		std::cout<<"double: nan\n";
		std::cout<<"float: nanf\n";
	}
	else if(!(input.compare("-inf")) || !(input.compare("-inff")))
	{
		std::cout<<"char: Impossible"<<std::endl;
		std::cout<<"int: Impossible"<<std::endl;
		std::cout<<"double: -inff\n";
		std::cout<<"float: -inf\n";
	}
	else if(!(input.compare("+inf")) || !(input.compare("+inff")))
	{
		std::cout<<"char: Impossible"<<std::endl;
		std::cout<<"int: Impossible"<<std::endl;
		std::cout<<"double: +inff\n";
		std::cout<<"float: +inf\n";
	}
	else if(input.length() > 1 && isall(input))
	{
		std::cout<<"char: Impossible\n";
		std::cout<<"int: Impossible\n";
		std::cout<<"double: Impossible\n";
		std::cout<<"float: Impossible\n";
	}
	else
	{
		int dot = 1;
		for (size_t j = 0; j < strlen(cinput); j++)
			if(cinput[j] == '.')
				dot--;
		if(dot)
		{
			var.dou = atof(cinput);
			var.fl = std::stof(input);
			var.chr = static_cast<char>(var.integer);
			var.integer = static_cast<int>(var.fl);
			if(!isprint(cinput[0]))
			{
			std::cout<<"char: "<<var.chr<<std::endl;
			std::cout<<"int: "<<var.integer<<std::endl;
			std::cout<<"double: "<<var.dou<<".0"<<std::endl;
			std::cout<<"float: "<<var.fl<<".0f"<<std::endl;
			}
			else
			{
				if((var.integer >= 0 && var.integer <= 31) || (var.integer == 127) || (var.integer < 0))
					std::cout<<"char: None Displayable"<<std::endl;
				else if(var.integer > 127)
					std::cout<<"char: Impossible"<<std::endl;
				else
					std::cout<<"char: "<<static_cast<char>(var.integer)<<std::endl;
			std::cout<<"int: "<<var.integer<<std::endl;
			std::cout<<"double: "<<var.dou<<".0"<<std::endl;
			std::cout<<"float: "<<var.fl<<".0f"<<std::endl;
			}
			return ;
		}
		size_t len = strlen(cinput);
		for (size_t i = 0; i < len; i++)
		{
			if(cinput[i] == '.')
			{
				var.dou = atof(cinput);
				var.fl = std::stof(input);
				var.chr = static_cast<char>(var.integer);
				var.integer = static_cast<int>(var.fl);
					if((var.integer >= 0 && var.integer <= 31) || (var.fl < 0) || (var.dou < 0))
						std::cout<<"char: None Displayable"<<std::endl;
					else
						std::cout<<"char: "<<static_cast<char>(var.integer)<<std::endl;
				std::cout<<"int: "<<var.integer<<std::endl;
				if(cinput[len - 1] != '.' && cinput[len] != '0')
					std::cout<<"double: "<<var.dou<<std::endl;
					if(cinput[i + 1] == '0')
						std::cout<<"float: "<<var.fl<<".0f"<<std::endl;
					else
						std::cout<<"float: "<<var.fl<<"f"<<std::endl;
				return ;
			}
		}//sayı bölümü
	}
}

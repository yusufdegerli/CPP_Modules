#pragma once
#include <iostream>
#include <cctype>

struct variables{
	int integer;
	char chr;
	float fl;
	double dou;
};

class ScalarConverter
{
	private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &cpy);
	ScalarConverter& operator=(ScalarConverter &val);
	public:
	static void Convert(const std::string input);
	static void var_init(void);
	static int isall(std::string input);
};

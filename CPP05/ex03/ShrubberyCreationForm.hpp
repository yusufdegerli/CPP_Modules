#pragma once
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class Shrubbery : public AForm
{
	private:
		virtual void exec()const;
		Shrubbery();
	public:
		Shrubbery(const std::string name);
		Shrubbery &operator=(const Shrubbery &value);
		Shrubbery(Shrubbery &cpy);
		virtual ~Shrubbery();
};

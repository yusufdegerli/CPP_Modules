#pragma once
#include <iostream>
#include "AForm.hpp"

class Robotomy : public AForm
{
	private:
		virtual void exec()const;
		Robotomy();

	public:
		Robotomy(const std::string name);
		Robotomy &operator=(const Robotomy &value);
		Robotomy(Robotomy &cpy);
		virtual ~Robotomy();
};

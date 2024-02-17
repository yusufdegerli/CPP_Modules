#pragma once
#include <iostream>
#include "AForm.hpp"

class Presidential : public AForm
{
	private:
		virtual void exec()const;
		Presidential();
	public:
		Presidential(const std::string name);
		Presidential &operator=(const Presidential &value);
		Presidential(Presidential &cpy);
		virtual ~Presidential();
};

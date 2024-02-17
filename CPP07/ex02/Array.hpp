#pragma once
#include <iostream>

template <typename T>
class Array
{
	private:
		T *a;
		unsigned int len;
	public:
		Array(){
			std::cout << "Default Constructor\n";
			a = new T[0];
			len = 0;
		}
		Array(unsigned int n){
			std::cout << "Constructor with Parameter\n";
			len = n;
			a = new T[n];
		}
		Array(const Array& cpy){
			std::cout << "Copy Constructor\n";
			len = 0;
			a = new T[0];
			*this = cpy;
		}
		~Array(){
			std::cout << "Destructor\n";
			delete [] a;
		}
		Array &operator=(const Array& val){
			if(this != &val)
			{
				delete [] this->a;
				len = val.len;
				a = new T[len];
				for (size_t i = 0; i < this->len; i++)
					a[i] = val.a[i];
			}
			return (*this);
		}
		T& operator[](size_t i){
			if(i >= len)
				throw InvalidIndexException();
			return (this->a[i]);
		}
		size_t size()const{
			return (this->len);
		}

		class InvalidIndexException : public std::exception
		{
			public:
					virtual const char	*what()const throw();
		};

};
	template <typename T>
	const char *Array<T>::InvalidIndexException::what()const throw()
	{
		return "Error: Invalid index";
	}

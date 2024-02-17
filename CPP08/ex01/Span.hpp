#pragma once
#include <iostream>
#include <vector>

class Span{
	private:
		std::vector<int>	vec;
		size_t				maxSize;
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span& cpy);
		Span& operator=(const Span& val);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void	addNumber(int number);
		void	addNumberMachine(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	private:
		class SpanIsFull: public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Span is Full!");
				}
		};
		class NeedMoreNumber: public std::exception{
			public:
				virtual const char* what() const throw(){
					return ("Container need to minimum 2 number for shortestSpan/longestSpan!");
				}
		};
};

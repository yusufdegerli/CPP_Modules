#include "Span.hpp"

Span::Span(unsigned int N){
	this->maxSize = N;
}

Span::~Span(){
	this->vec.clear();
}

Span::Span(const Span& cpy){
	*this = cpy;
}

Span& Span::operator=(const Span& val){
	this->vec = val.vec;
	return (*this);
}

unsigned int Span::shortestSpan(){
	unsigned int range = UINT_MAX;
	if (this->vec.size() < 2)
		throw NeedMoreNumber();
	std::vector<int> copy = this->vec;
	std::sort(copy.begin(), copy.end());
	for (size_t i = 0; i < copy.size() - 1; i++)
		if (static_cast<unsigned int>(abs(copy[i] - copy[i + 1])) < range)
			range = abs(copy[i] - copy[i + 1]);
	return (range);
}

unsigned int Span::longestSpan(){
	if (this->vec.size() < 2)
		throw NeedMoreNumber();
	std::vector<int> copy = this->vec;
	std::sort(copy.begin(), copy.end());
	return (copy[copy.size() - 1] - copy[0]);
}

void	Span::addNumber(int number){
	if (this->vec.size() >= this->maxSize)
		throw SpanIsFull();
	this->vec.push_back(number);
}

void	Span::addNumberMachine(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	if (begin > end)
		return ;
	while (begin != end){
		if (this->vec.size() < this->maxSize)
			this->vec.push_back(*begin);
		else
			throw SpanIsFull();
		begin++;
	}
}

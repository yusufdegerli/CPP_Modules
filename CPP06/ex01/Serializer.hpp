#pragma once
#include <iostream>
#include <cstdint>

struct Data{
	int val;
	std::string str;
};
class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer &cpy);
		Serializer& operator=(Serializer &val);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};



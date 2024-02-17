#include "header.hpp"

void to_find(std::string &file, std::string &s2, string &s3)
{
	int a = 0;
	while(1)
	{
		a = file.find(s2);
		if(a == -1)
			break;
		file.erase(a, s2.length());
		file.insert(a, s3);
	}
}

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::string temp;
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string file = av[1];
		std::ifstream f_name(av[1]);
		file.append(".replace");
		if(f_name.is_open())
		{
			std::ofstream n_file;
			n_file.open(file);
			while(getline(f_name, temp))
			{
				to_find(temp, s1, s2);
				n_file << temp << endl;
			}
		}
		else
		cout <<"Wrong file name!"<<endl;
	}
	else
		cout <<"Wrong argument!"<<endl;
}

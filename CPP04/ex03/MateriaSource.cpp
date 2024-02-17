#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout<<"MateriaSource - Constructor\n";
	for (int i = 0; i < 4; i++)
		this->material[i] = 0;
}

MateriaSource::~MateriaSource(){
	std::cout<<"MateriaSource - Destructor\n";
	for (int i = 0; i < 4; i++)
		if(this->material[i])
			delete this->material[i];
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	for (int i = 0; i < 4; i++){
		if(cpy.material[i])
			this->material[i] = (cpy.material[i])->clone();
	}
	std::cout<<"MateriaSource - Copy Constructor\n";
}

MateriaSource & MateriaSource::operator=(MateriaSource const & opr){
	for (int i = 0; i < 4; i++)
	{
		if(this->material[i])
			delete this->material[i];
		if(opr.material[i])
			this->material[i] = opr.material[i]->clone();
	}
	return *this;
}
AMateria *MateriaSource::createMateria(const std::string &type){
	int i = 0;

	while((this->material)[i] && ((this->material)[i])->getType() != type && i < 4)
		i++;
	if(i >= 4 || !(this->material)[i])
	{
		std::cout << type << " materia doesn't exist\n";
		return NULL;
	}
	std::cout <<"Materia : "<<type<<" created\n";
	return (((this->material)[i])->clone());
}
void MateriaSource::learnMateria(AMateria *var)
{
	int i = 0;
	while(this->material[i] != 0 && i < 4)
		i++;
	if(i >= 4)
	{
		std::cout<<"Can not learn more than 4!\n";
		return;
	}
	(this->material)[i] = var;
	std::cout <<"Material "<<var->getType()<< "learned!\n";
}

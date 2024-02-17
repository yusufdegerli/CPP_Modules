#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	std::cout << "\033[31m" << std::endl;
// 	const Animal* animal = new Animal();
// 	const Animal* dog = new Dog();
// 	const Animal* cat = new Cat();

// 	std::cout << "\033[32m" << std::endl;
// 	std::cout << "Animal type: " << animal->getType() << std::endl;
// 	std::cout << "Dog type: " << dog->getType() << std::endl;
// 	std::cout << "Cat type: " << cat->getType() << std::endl;
// 	cat->makeSound();
// 	dog->makeSound();
// 	animal->makeSound();

// 	std::cout << "\033[31m" << std::endl;
// 	const WrongAnimal* wrong_animal = new WrongAnimal();
// 	const WrongAnimal* wrong_cat = new WrongCat();

// 	std::cout << "\033[33m" << std::endl;
// 	std::cout << "Wrong Animal type: " << wrong_animal->getType() << std::endl;
// 	std::cout << "Wrong Cat type: " << wrong_cat->getType() << std::endl;
// 	wrong_animal->makeSound();
// 	wrong_cat->makeSound();

// 	std::cout << "\033[31m" << std::endl;
// 	delete animal;
// 	delete dog;
// 	delete cat;
// 	delete wrong_cat;
// 	delete wrong_animal;
// }

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout<<j->getType()<<" \n";
	std::cout<<i->getType()<<" \n";
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wrong_one = new WrongAnimal();
	std::cout<<wrong_one->getType()<<" \n";
	wrong_one->makeSound();

	return 0;
}

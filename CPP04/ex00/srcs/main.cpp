#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"
#include "../incs/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* o = new WrongCat();
	const WrongAnimal* o1 = new WrongAnimal();
	Dog c;
	Dog a;
	a = c;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << o->getType() << " " << std::endl;
	std::cout << c.getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	o->makeSound();
	o1->makeSound();
	c.makeSound();
	meta->makeSound();
	a.makeSound();
	delete meta;
	delete j;
	delete i;
	delete o;
	delete o1;
}
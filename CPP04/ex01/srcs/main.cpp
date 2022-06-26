#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"
#include "../incs/WrongCat.hpp"
#include "../incs/Brain.hpp"
#define NUMBER_OF_ANIMALS 8

int main()
{
	Animal	*animals[NUMBER_OF_ANIMALS];
	Brain *basd;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < NUMBER_OF_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	basd = animals[0]->getBrain();
	std::cout<<basd->ideas[0]<<std::endl;
	basd->ideas[0] = "Dog";
	std::cout<<basd->ideas[0]<<std::endl;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];

}
#include "Animal.h"
#include "Dog.h"

Animal::Animal() {
	std::cout << "Animal" << std::endl;
	number++;
}

Animal::~Animal() {
	number--;
}
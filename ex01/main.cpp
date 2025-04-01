#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>

int main() {
	// Test 1: Basic functionality
	{
		std::cout << "===== Test 1: Basic Functionality =====" << std::endl;
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		dog->makeSound();
		cat->makeSound();

		delete dog;
		delete cat;
	}

	// Test 2: Array of animals
	{
		std::cout << "\n===== Test 2: Array of Animals =====" << std::endl;
		const Animal* animals[4];
		
		for (int i = 0; i < 4; i++) {
			if (i % 2 == 0) {
				animals[i] = new Dog();
			} else {
				animals[i] = new Cat();
			}
		}

		for (int i = 0; i < 4; i++) {
			std::cout << animals[i]->getType() << ": ";
			animals[i]->makeSound();
		}

		for (int i = 0; i < 4; i++) {
			delete animals[i];
		}
	}
/*
	// Test 3: Deep copy verification
	{
		std::cout << "\n===== Test 3: Deep Copy Verification =====" << std::endl;
		Dog originalDog;
		originalDog.getBrain()->setIdea(0, "I want a bone");

		Dog copiedDog(originalDog);
		copiedDog.getBrain()->setIdea(0, "I want a ball");

		std::cout << "Original Dog's first idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog's first idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;
	}

	// Test 4: Assignment operator
	{
		std::cout << "\n===== Test 4: Assignment Operator =====" << std::endl;
		Cat cat1;
		cat1.getBrain()->setIdea(1, "I want fish");

		Cat cat2;
		cat2 = cat1;
		cat2.getBrain()->setIdea(1, "I want milk");

		std::cout << "Cat1's second idea: " << cat1.getBrain()->getIdea(1) << std::endl;
		std::cout << "Cat2's second idea: " << cat2.getBrain()->getIdea(1) << std::endl;
	}
*/
	return 0;
}
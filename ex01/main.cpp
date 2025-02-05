/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:59:04 by lottavi           #+#    #+#             */
/*   Updated: 2025/02/05 19:59:04 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // Outputs cat sound
	j->makeSound(); // Outputs dog sound
	meta->makeSound(); // Outputs animal sound

	delete meta;
	delete j;
	delete i;

	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "Original Dog Idea");
	Dog copyDog(originalDog);
	copyDog.getBrain()->setIdea(0, "Copied Dog Idea");

	Cat originalCat;
	originalCat.getBrain()->setIdea(0, "Original Cat Idea");
	Cat copyCat(originalCat);
	copyCat.getBrain()->setIdea(0, "Copied Cat Idea");

	std::cout << "Original Dog's Idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Dog's Idea 0: " << copyDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Original Cat's Idea 0: " << originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Cat's Idea 0: " << copyCat.getBrain()->getIdea(0) << std::endl;

	return 0;
}

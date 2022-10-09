/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:26 by aartiges          #+#    #+#             */
/*   Updated: 2022/04/28 02:16:31 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

# define LEN 15

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		
		delete meta;
		delete i;
		delete j;
	}
	std::cout << std::endl << "!!!!!! Bad way !!!!!!!" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		meta->makeSound();
		
		delete meta;
		delete i;
	}
	std::cout << std::endl << "!!!!!! allocate array !!!!!!!" << std::endl;
	{
		Animal* animals[LEN];
		int	i = 0;
		while (i < LEN / 2)
			animals[i++] = new Cat();
		animals[i - 1]->makeSound();
		while (i < LEN)
			animals[i++] = new Dog();
		animals[i - 1]->makeSound();


		if (animals[i - 1]->getBrain())
			animals[i - 1]->getBrain()->setIdeaI(2, "yolo");
		Animal* animals2[LEN];
		i = 0;
		while (i < LEN)
		{
			animals2[i] = (animals[i]);
			std::cout << animals2[i]->getType() << std::endl;
			i++;
		}
		if (animals2[i - 1]->getBrain())
			std::cout << "the good idea is yolo : "
				<< animals2[i - 1]->getBrain()->getIdeaI(2) << std::endl;
		i = 0;
		while (i < LEN)
			delete animals[i++];
	}
	return 0;
}

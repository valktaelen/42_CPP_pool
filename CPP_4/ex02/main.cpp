/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:54:26 by aartiges          #+#    #+#             */
/*   Updated: 2022/05/02 15:05:16 by aartiges         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

# define LEN 15

int main()
{
	{
		//const AAnimal* meta = new AAnimal();
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		//meta->makeSound();
		
		//delete meta;
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
		AAnimal* animals[LEN];
		int	i = 0;
		while (i < LEN / 2)
			animals[i++] = new Cat();
		animals[i - 1]->makeSound();
		while (i < LEN)
			animals[i++] = new Dog();
		animals[i - 1]->makeSound();


		if (animals[i - 1]->getBrain())
			animals[i - 1]->getBrain()->setIdeaI(2, "yolo");
		AAnimal *animals2[LEN];
		i = 0;
		while (i < LEN)
		{
			animals2[i] = (animals[i]);
			std::cout << animals2[i]->getType() << std::endl;
			i++;
		}
		if (animals2[i - 1]->getBrain())
		{
			std::cout << "the good idea is yolo : "
				<< animals2[i - 1]->getBrain()->getIdeaI(2) << std::endl;
			animals2[i - 1]->makeSound();
		}
		i = 0;
		while (i < LEN)
			delete animals[i++];
	}
	std::cout << "test idea" << std::endl;
	{
		Cat a;
		a.getBrain()->setIdeaI(2, "yolo");
		Cat b(a);
		std::cout << "the good idea is yolo : " << b.getBrain()->getIdeaI(2)
			<< std::endl;
	}
	/*
	{
		AAnimal a();
	}
	*/
	return 0;
}

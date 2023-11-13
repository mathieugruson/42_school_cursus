/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:10:57 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 17:07:10 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main (void)
{
	std::cout << "FIRST TEST\n" << std::endl;
	Dog woopet;
	woopet.setIdeas(3, "test");
	std::cout << "t :" << woopet.getIdeas(3150) << std::endl;
	std::cout << "t :" << woopet.getIdeas(3) << std::endl;

	std::cout << "\nSECOND TEST\n" << std::endl;

	const Animal* j = new Dog;
	const Animal* i = new Cat;
	delete j;
	delete i;

	std::cout << "\nTHIRD TEST\n" << std::endl;

	Dog Z;
	Dog X(Z);

	std::cout << "\nSUBJECT TEST\n" << std::endl;

	Animal *animal[6];
	
	for (int i = 0; i < 6; i++)
	{
		std::cout << "index :" << i << std::endl;
		if (i % 2)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}

	for (int i = 0; i < 6; i++)
	{
		std::cout << "index :" << i << std::endl;
		if (i % 2)
			delete animal[i];
		else
			delete animal[i];
	}
	
}
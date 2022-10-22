/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:25:58 by samajat           #+#    #+#             */
/*   Updated: 2022/10/22 20:13:07 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "test/WrongAnimal.hpp"
#include "test/WrongCat.hpp"
#include "Dog.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    Animal a = Animal();
    //-------------------------
    // const WrongAnimal* meta = new WrongAnimal();
    // const WrongAnimal* i = new WrongCat();
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // meta->makeSound();
    // WrongAnimal a = WrongAnimal();
    return 0;
}
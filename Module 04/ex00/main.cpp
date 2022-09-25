/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:25:58 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 21:27:47 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
    const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    return 0;
}
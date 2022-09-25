/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:26:13 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 17:13:44 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class human
{
    
    public:
    human(std::string name):name(name), age(10){}
    std::string name;
    int age;   
};

class student :public human
{
    public:
    student(std::string name):human(name){}
};


int main()
{
    student a("soufiane");

    std::cout << a.age << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:51:26 by samajat           #+#    #+#             */
/*   Updated: 2022/09/28 11:10:41 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
#define BRAIN

//includes
#include<iostream>
#include <string>

class Brain
{
private:
    std::string idea[100];

public:
    Brain(void);
    Brain(Brain &copy);
    Brain& operator=(Brain &copy);
    ~Brain();
};

#endif
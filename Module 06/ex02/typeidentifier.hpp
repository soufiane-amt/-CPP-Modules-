/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeidentifier.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:38:12 by samajat           #+#    #+#             */
/*   Updated: 2022/10/12 14:12:46 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEIDENTIFIER
#define TYPEIDENTIFIER

// #Headers
#include <iostream>
#include <cstdlib>



//Classes
class Base
{
public:
    virtual ~Base(){};
};

class A : public Base
{
public:
    virtual ~A(){};
};

class B : public Base
{   
public:
    virtual ~B(){};
};

class C : public Base
{
public:
    virtual ~C(){};
};

//Funcs
Base    *generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif
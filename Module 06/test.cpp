/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:46:24 by samajat           #+#    #+#             */
/*   Updated: 2022/10/11 21:31:22 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Base
{
  public: virtual ~Base() {}

  bool isA() {
    return (dynamic_cast<Base*>(this) != NULL);
  }
};

class D1: public Base {};
class D2: public Base {};
class D22: public D2 {};

int main(int argc,char* argv[])
{
  D1*   d1  = new D1();
  D2*   d2  = new D2();
  D22*  d22 = new D22();

  Base*  x = d22;

  if( x->isA<D22>() )
  {
    std::cout << "IS A D22" << std::endl;
  }
  if( x->isA<D2>() )
  {
    std::cout << "IS A D2" << std::endl;
  }
  if( x->isA<D1>() )
  {
    std::cout << "IS A D1" << std::endl;
  }
  if(x->isA<Base>() )
  {
    std::cout << "IS A Base" << std::endl;
  }
}

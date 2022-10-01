/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:25:09 by samajat           #+#    #+#             */
/*   Updated: 2022/10/01 13:18:32 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// using namespace std;
#include <iostream>

class A
{
   public:
      A (){};
      A (const A &a) { member = a.member; }
      A & operator = (const A &a)
      {
            member = a.member;
         return *this;
      }
      ~A () { }
  
  private:
      int member;
};

class base {
  public:
    base()    
    {
      type = "";
      std::cout << "Constructing base\n"; }
    base(base &copy)
    {
      std::cout << "CopConstructing base\n";
      type = copy.type;
    }
    base &operator=(const base &copy)
    {
      type = copy.type;
      return (*this);
    }
    ~base()
    { std::cout << "Destructing base\n"; }
  
    private:
    std::string type;
};
 
// class derived : public base {
//   public:
//     derived()    
//     { std::cout << "Constructing derived\n"; }
//     ~derived()
//     { std::cout << "Destructing derived\n"; }
// };

int main()
{
  // A a = A();
  base a = base();
  return 0;
}
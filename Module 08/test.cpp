#include <iostream>
#include <vector>
#include <stack>
#include <iterator>

// void print(std::vector <int> const &a) {
//    std::cout << "The vector elements are : ";

//    for(int i=0; i < a.size(); i++)
//    std::cout << a.at(i) << ' ';
// }

// void func(int *arr)
// {
//     std::cout << arr[0] << std::endl;
//     std::cout << arr[1] << std::endl;
// }

// void func(std::vector<int> arr)
// {
//   std::cout << arr.size() << std::endl;
// }

#include <algorithm>
#include <iostream>

int main() 
{
  int a[] = {45, 32, 1, 543, 23};
  std::vector <int> arr(a, a + 5);
  for (std::vector <int>::iterator i = arr.begin(); i != arr.end(); i++)
  {
    std::cout << *i << std::endl;
  }
  
}



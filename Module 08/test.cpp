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

void func(std::vector<int> arr)
{
  std::cout << arr.size() << std::endl;
}

int main() 
{
  std::stack <int> l;
  l.push(42);  
  l.push(2);  
  l.push(12);  
  l.push(32);
  std::stack <int> d;
  d = l;
  d.push(100);  
  d.push(3200);
  size_t le = d.size();
  for (size_t i = 0; i < le; i++)
  {
    std::cout << d.top() << std::endl;
    d.pop();
  }
      
}



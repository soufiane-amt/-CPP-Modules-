#include <iostream>
#include <vector>
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
  std::vector <int>arr;
  arr.push_back(454);
  arr.push_back(3);
  arr.push_back(2);
  arr.erase(arr.begin(), arr.end());
}



#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

// void print(std::vector <int> const &a) {
//    std::cout << "The vector elements are : ";

//    for(int i=0; i < a.size(); i++)
//    std::cout << a.at(i) << ' ';
// }

void func(int *arr)
{
    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;
}

int main()
{
    std::vector< int> array;
    func((int[]){4, 43, 2});

    return 0;
}
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5 };
    v.push_back(10);
    std::cout << "The third element is:" << v[2] << '\n';
    std::cout << "The fourth element is:" << v.at(3) << '\n';
    std::cout << "The last element is: " << v.at(v.size()-1) << '\n';
    std::cout << "The vector's size is: " << v.size();
}

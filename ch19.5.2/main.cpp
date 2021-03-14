#include <iostream>

void myfunction(int& byreference)
{
    byreference++; // we can modify the value of the argument
    std::cout << "Argument passed by reference: " << byreference << '\n';
}
int main()
{
    int x = 123;
    myfunction(x);
    std::cout << "Argument passed by reference: " << x;
}

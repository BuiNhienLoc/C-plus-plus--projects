#include <iostream>

using namespace std;

int main()
{
    int x = 123;
    int& y = x;
    x = 456;// both x and y now hold the value of 456
    y = 789;// both x and y now hold the value of 789
    const int& z = x; // const reference
    x = 456;
    // both x and y now hold the value of 456
}

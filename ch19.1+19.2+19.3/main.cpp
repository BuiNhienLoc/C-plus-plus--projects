#include <iostream>

void myfunction(); // function declaration
int mysquarednumber(int x);
int mysum(int x, int y);

int main()
{
    myfunction(); // a call to a function
    int myresult1 = mysquarednumber(2);
    std::cout << "Number 2 squared is: " << myresult1 << '\n';
    int myresult2 = mysum(5, 10);
    std::cout << "The sum of 5 and 10 is: " << myresult2 << '\n';
}

void myfunction()
{
    std::cout << "Hello World from a function.\n";
}

int mysquarednumber(int x)
{
    return x * x;
}

int mysum(int x, int y)
{
    return x + y;
}

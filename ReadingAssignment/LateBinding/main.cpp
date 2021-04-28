#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int (*pFcn)(int, int) = add;
    std::cout << pFcn(5, 3) << '\n';

    return 0;
}

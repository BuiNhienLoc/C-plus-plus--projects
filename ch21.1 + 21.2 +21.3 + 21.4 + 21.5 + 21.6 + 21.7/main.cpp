#include <iostream>

int main()
{
    int x = 123; // first x' scope begins here
    {
        int x = 456; // redefinition of x, second x' scope begins here
    } // block ends, second x' scope ends here
    // the first x resumes here
    int* p = new int;
    *p = 123;
    std::cout << "The pointed-to value is: " << *p << '\n';
    delete p;
    int* q = new int[3];
    q[0] = 1;
    q[1] = 2;
    q[2] = 3;
    std::cout << "The values are: " << q[0] << ' ' << q[1] << ' ' << q[2];
    delete[] p;
}// block ends, scope of first x's ends here

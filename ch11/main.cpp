#include <iostream>

int main()
{
    char c = 'a';
    char* p = &c;
    int x = 123;
    int* q = &x;
    std::cout << "The value of the interger dereferenced pointer is: " << *p << "\n";
    std::cout << "The value of the character dereferenced pointer is: " << *q << "\n";
    *q = 456; // change the value of pointed-to object
    std::cout << "The new interger value is: " << x;
}

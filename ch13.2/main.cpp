#include <iostream>
#include <string>

int main()
{
    std::string s = "Hello ";
    std::string c = "World";
    char b = '!';
    std::string d = s + c + b;
    std::cout << d;
}

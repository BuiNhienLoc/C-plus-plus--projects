#include <iostream>

int main()
{
    std::cout << "Please enter a character, an integer and a double: ";
    char c = 0; //char c;
    int x = 0; //int x;
    double d = 0.0; //double d;
    std::cin >> c >> x >> d;
    std::cout << "You entered: " << c << ", " << x << " and " << d;
}

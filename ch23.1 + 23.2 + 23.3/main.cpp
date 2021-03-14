#include <iostream>

class MyClass
{
    private:
        int x; // x now has private access
    public:
        void printx()
        {
            std::cout << "The value of x is:" << x; // x is accessible to printx()
        }
};

int main()
{
    MyClass o; // Create an object
    o.x = 123; // Error, x has private access and is not accessible to object o
    o.printx(); // printx() is accessible from object o
}

//line 17: error: 'int MyClass::x' is private within this context

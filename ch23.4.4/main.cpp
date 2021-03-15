#include <iostream>

class MyClass
{
    public:
        MyClass& operator=(const MyClass& rhs);
};

MyClass& MyClass::operator=(const MyClass& rhs)
{
    // implement the copy logic here
    return *this;
}

int main()
{
    MyClass copyfrom;
    MyClass copyto;
    copyto = copyfrom; // uses a copy assignment operator
}

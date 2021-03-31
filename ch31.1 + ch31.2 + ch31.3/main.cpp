#ifndef My_Header_H
#define My_Header_H
#include<iostream>
#include "math.h"
#endif // My_Header_H


namespace MyNameSpace
{
    int x;
    double d;
}

namespace MyNameSpace
{
    char c;
    bool b;
}

using namespace MyNameSpace;

namespace MySecondNameSpace
{
    int x;
}

int main()
{
    x = 123;
    MySecondNameSpace::x = 456;
    std::cout << "1st x: " << x << ", 2nd x: " <<MySecondNameSpace::x;
}

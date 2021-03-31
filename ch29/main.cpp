#include<iostream>

enum class MyEnum : char
{
    myfirstvalue='a',
    mysecondvalue,
    mythirdvalue
};

int main()
{
    MyEnum myenum = MyEnum::myfirstvalue;
}

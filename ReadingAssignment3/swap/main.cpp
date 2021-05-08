#include <iostream>
#include <string>

using namespace std;

template <typename T>
void Swap(T &x, T &y) {
    T temp = y;
    y = x;
    x = temp;
}

int main()
{
    int a = 3;
    int b = 7;
    Swap<int>(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    double x = 3.0;
    double y = 7.0;
    Swap<double>(x, y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    string s1 = "g";
    string s2 = "e";
    Swap<string>(s1, s2);
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    return 0;
}

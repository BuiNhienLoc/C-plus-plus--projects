#include <iostream>
#include <string>

using namespace std;

template <typename A>
A Add(A &a, A &b) {
    return a + b;
}

int main() {
    int a = 1;
    int b = 2;
    cout << Add(a, b) << endl;

    double x = 1.0;
    double y = 2.0;
    cout << Add(x, y) << endl;

    string s1 = "a";
    string s2 = "b";
    cout << Add(s1, s2) << endl;
}

#include <iostream>
#include <string>

using namespace std;

int Add(int a, int b) {  // Volume of a cube.
  return a + b;
}

double Add(double a, double b) {  // Volume of a cylinder.
  return a + b;
}

string Add(string a, string b) {  // Volume of a cuboid.
  return a + b;
}

int main() {
  cout << Add(10, 11) << endl;
  cout << Add(2, 8) << endl;
  cout << Add("a", "b") << endl;
}

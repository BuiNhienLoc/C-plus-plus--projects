#include <iostream>
#include <string>

using namespace std;

/*template <class temp>
void Sum(temp intVal , temp doubleVal) {
	cout << int1 + double1 << endl;
} --> bug :)))*/

template <class temp , class temp1>
void Sum(temp intVal , temp1 doubleVal)
{
	cout<< intVal + doubleVal << endl;
}

int main() {
	int intVal = 1;
	double doubleVal = 1.1;
	Sum(intVal , doubleVal);
    return 0;
}

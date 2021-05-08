#include <iostream>

using namespace std;

template <typename T>
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubleSort(T arr[], int length) {
    for (int i=1; i<length; i++) {
        for (int j=0; j<length; j++) {
            if (arr[i] < arr[j]) {
                Swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {21, 43, 213, 31, 213, 56, 57, 522};
    int length = sizeof(arr)/sizeof(arr[0]);
    bubleSort<int>(arr, length);
    for (int i=0; i<length; i++) {
        cout << arr[i] << " ";
    }
    putchar('\n');
    return 0;
}

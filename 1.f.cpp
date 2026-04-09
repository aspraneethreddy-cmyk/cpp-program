#include <iostream>
using namespace std;

int value = 100;  // Global variable

int main() {
    int local = 50;

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Global value: " << value << endl;

    int a = 10, b = 20;
    int max = (a > b) ? a : b;

    cout << "Max is: " << max << endl;

    return 0;
}

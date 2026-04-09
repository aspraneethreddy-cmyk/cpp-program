#include <iostream>
using namespace std;

int main() {
    int x = 7;
    double y = 3.5;

    double result = x / y;
    int z = (int)result;

    cout << "Result = " << result << endl;
    cout << "After casting (int) = " << z << endl;

    return 0;
}

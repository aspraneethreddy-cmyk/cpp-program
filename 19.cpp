#include <iostream>
using namespace std;

inline int square(int n) {
    return n * n;
}

int main() {
    int x = 5;
    cout << "Square = " << square(x);
    return 0;
}

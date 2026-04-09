#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {}
    operator int() {
        return length;
    }
};

int main() {
    Box b1(10);
    int x = b1;
    cout << "Length = " << x << endl;
    return 0;
}

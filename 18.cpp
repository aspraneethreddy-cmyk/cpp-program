#include <iostream>
using namespace std;

class Box {
    int length;
public:
    void setLength(int l) {
        length = l;
    }
    void compare(Box b) {
        if (length > b.length)
            cout << "Current bigger";
        else
            cout << "Passed bigger";
    }
};

int main() {
    Box b1, b2;
    b1.setLength(10);
    b2.setLength(5);
    b1.compare(b2);
    return 0;
}

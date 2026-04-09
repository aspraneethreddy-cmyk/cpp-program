#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) {
        length = l;
    }
    void show() {
        cout << "Length = " << length << endl;
    }
};

int main() {
    Box b1 = 10;
    b1.show();
    Box b2(25);
    b2.show();
    return 0;
}

#include <iostream>
using namespace std;

class Box {
    int length;
public:
    void setLength(int l) {
        length = l;
    }
    void display() {
        cout << "Length = " << length;
    }
};

int main() {
    Box b;
    b.setLength(10);
    b.display();
    return 0;
}

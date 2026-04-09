#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    Box(int w) {
        width = w;
    }
    friend int getWidth(Box b);
};

int getWidth(Box b) {
    return b.width;
}

int main() {
    Box box(10);
    cout << "Width of the Box: " << getWidth(box);
    return 0;
}

#include <iostream>
using namespace std;

class Function1 {
public:
    void func(int x) {
        cout << "Value of x is " << x << endl;
    }
    void func(double x) {
        cout << "Value of x is " << x << endl;
    }
    void func(int x, int y) {
        cout << "Value of x & y is " << x << " " << y << endl;
    }
};

int main() {
    Function1 obj;
    obj.func(7);
    obj.func(9.13);
    obj.func(8, 6);
    return 0;
}

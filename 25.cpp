#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}
    friend Number operator-(Number n);
    void display() {
        cout << "Value = " << value << endl;
    }
};

Number operator-(Number n) {
    n.value = -n.value;
    return n;
}

int main() {
    Number n1(10), n2(0);
    n2 = -n1;
    n2.display();
    return 0;
}

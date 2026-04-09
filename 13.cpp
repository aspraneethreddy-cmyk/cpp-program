#include <iostream>
using namespace std;

class Base {
protected:
    int value;

public:
    Base(int v) {
        value = v;
        cout << "Base Constructor, value = " << value << endl;
    }
    ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived(int v) : Base(v) {
        cout << "Derived Constructor" << endl;
    }
    void showValue() {
        cout << "Value = " << value << endl;
    }
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    cout << "Creating object of Derived..." << endl;
    Derived d(50);
    cout << "\nCalling showValue()" << endl;
    d.showValue();
    cout << "\nExiting main..." << endl;
    return 0;
}

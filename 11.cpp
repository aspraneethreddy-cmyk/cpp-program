#include <iostream>
using namespace std;

class Demo {
    int x;   

public:
    Demo() {
        x = 0;
        cout << "Default Constructor, x = " << x << endl;
    }

    Demo(int val) {
        x = val;
        cout << "Parameterized Constructor, x = " << x << endl;
    }

    Demo(const Demo &d) {
        x = d.x;
        cout << "Copy Constructor, x = " << x << endl;
    }

    ~Demo() {
        cout << "Destructor called for x = " << x << endl;
    }
};

int main() {
    cout << "Creating object (default)..." << endl;
    Demo obj1;  
    cout << "\nCreating object (parameterized)..." << endl;
    Demo obj2(10); 
    cout << "\nCreating object (copy of obj2)..." << endl;
    Demo obj3(obj2);   
    cout << "\nExiting main, destructors will be called automatically..." << endl;
    return 0;
}

#include <iostream>
using namespace std;

class MyClass {
public: int x;
private: int y;
protected: int z;
};

int main() {
    MyClass obj;
    obj.x = 10;
    cout << "x = " << obj.x << endl;
    return 0;
}

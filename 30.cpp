#include <iostream>
using namespace std;

class Demo {
    static int count;
public:
    static void show() {
        cout << count;
    }
};

int Demo::count = 10;

int main() {
    Demo::show();
    return 0;
}

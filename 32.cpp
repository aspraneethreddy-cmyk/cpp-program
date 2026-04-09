#include <iostream>
using namespace std;

class Demo {
    static int count;
public:
    Demo() {
        count++;
    }
    static void show() {
        cout << "Objects = " << count;
    }
};

int Demo::count = 0;

int main() {
    Demo a, b, c;
    Demo::show();
}

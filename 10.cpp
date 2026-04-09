#include <iostream>
using namespace std;

class Student {
    int roll;  
public:
    void setRoll(int x) {  
        roll = x;
    }

    void display() {  
        cout << "Roll = " << roll;
    }
};

int main() {
    Student s1;   

    s1.setRoll(101);   
    s1.display();      

    return 0;
}

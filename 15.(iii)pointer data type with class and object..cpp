//code by sumi
#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {}
    ~MyClass() { cout << "Destructor called" << endl; }
};
int main() {
    MyClass *obj = new MyClass(5);
    cout << "x = " << obj->x << endl;
    delete obj;
    return 0;
}

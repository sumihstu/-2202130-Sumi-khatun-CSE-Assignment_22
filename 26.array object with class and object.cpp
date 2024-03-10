//code by sumi

#include <bits/stdc++.h>
using namespace std;
class test
{
    int a, b;

public:
    int setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    // this funtion will take an object as argument

    void add(test o1, test o2)
    {
        a = o1.a + o2.b;
        b = o1.b + o2.a;
    }

    void print()
    {
        cout << "your nmuber is " << a << " " << b << endl;
    }
};

int main()
{
    test c1, c2, c3; // creates object
    cout << "number before passing arguments " << endl;
    c1.setdata(6,8); // values are initilaized for both object
    c1.print();

    c2.setdata(15, 25);
    c2.print();

    // passing object as an argument to function add
    cout << "number after passing argument " << endl;
    c3.add(c1, c2);
    c3.print();
}


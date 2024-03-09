//code by sumi
//function overloading
#include <iostream>
using namespace std;

void sum(int s, int n) //function with two parameters
{
    cout << "Total Sum is: " << s+n;
}

void sum(int x, int y, int z) //function with three parameters
{
    cout << "Total Sum is: " << x+y+z;
}

int main()
{
    sum(4,8); // calling two parametered function with same name

    cout << endl;

    sum(5,10,7); // calling three parametered function with same name
}

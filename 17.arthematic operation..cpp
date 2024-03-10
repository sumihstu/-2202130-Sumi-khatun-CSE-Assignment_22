
//code by sumi
#include<iostream>
using namespace std;

class Operation{//class declaration
public:
    void add(int a, int b) //function for adding variables
    {
        cout << a+b << endl;
    }

    void sub(int a, int b) //function for substituting variables
    {
        cout << a-b << endl;
    }

    void mul(int a, int b) //function for multiplying variables
    {
        cout << a*b << endl;
    }

    void div(int a, int b) //function for dividing variables
    {
        cout << (float)a/b << endl;
    }
};

int main()
{
    Operation obj; //object declarae
    obj.add(8,4); //first execution
    obj.sub(9,4); //second execution
    obj.mul(5,4); //third execution
    obj.div(8,4); //fourth execution
}

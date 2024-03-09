//code by sumi
#include<iostream>
using namespace std;

class text //class
{
    private:
    int x =5;//private variable

    public:
    void display()//user defined function
    {
        cout << "The value is: " << x << endl;
    }
};

int main()
{
    text t;//object of class text
    t.display();

    return 0;
}

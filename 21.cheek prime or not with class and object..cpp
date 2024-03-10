//code by sumi
#include<iostream>
using namespace std;

class Factorial//class declaration
{


private:
    public:
        int factorial(int n)
        {
            if (n==0 || n==1)
                return 1;
            else
                return n*factorial(n-1);//condition of facterial
        }
        Factorial(int f)
        {
            cout << factorial(f) << endl;
        }

};


int main()
{
    Factorial obj(8);//object created and object name is obj

    return 0;
}

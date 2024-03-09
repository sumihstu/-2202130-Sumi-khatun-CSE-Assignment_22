//code by sumi(2202130)
//static and consant variables in c++
#include<iostream>

using namespace std;
int main()
{
    const int s = 10;
    // here a is constant and value of a is unchangable
    cout << s<< endl;
    cout << endl;

    for(int i=1;i<s;i++)
    {
        static int n = 0; //this keyword is keep static code in first loop
        cout << n<< endl;
        n++;
    }

    return 0;
}

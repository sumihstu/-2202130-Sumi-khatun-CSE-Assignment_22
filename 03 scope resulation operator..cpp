#include<iostream>
using namespace std;
int k=10;//declare global variable
int main()
{
    int k = 20;//declare variable
    {
        int k = 30;
        cout<<"The value of k in inner block = "<<k<<endl;
        cout<<"The global value of k is = "<<::k<<endl;//using scope resulation operator
    }
    cout<<"The value of k in outer block is = "<<k<<endl;
    cout<<"The global value of k is = "<<::k<<endl;//again using scope resulation operator
    return 0;

}

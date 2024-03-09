//code by sumi(2202130)
#include<iostream>
using namespace std;
int main(){
    int *s=new int(8);
    float*n=new float(8.45);
    cout<<"The value stored in s = "<<*s<<endl;
    cout<<"The value stored in n = "<<*n<<endl;
    delete s;
    cout<<"Now the value stored in s = "<<*s<<endl;
    cout<<"Now the value stored in n= "<<*n<<endl;

    return 0;
}

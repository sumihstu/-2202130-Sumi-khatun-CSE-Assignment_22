//code by sumi
#include<iostream>
#include<math.h>
using namespace std;
class S{
public:
    int sum(int x,int y)

    {
     return x+y;
    }
    int sum(double x,double y)
    {
        return x+y;
    }
    };
int main()
{
    S n;
    n.sum(5,10);
    cout<<"summation is:"<<n.sum(5,10)<<endl;
    n.sum(5.5,10.5);
    cout<<"summation is"<<n.sum(5.5,10.5)<<endl;
    return 0;
}

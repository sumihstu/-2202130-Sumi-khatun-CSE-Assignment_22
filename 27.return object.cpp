//code by sumi

#include<iostream>
using namespace std;
class sample{
int a;
int b;
public:
    void setvalue()
    {
        a=25;
        b=40;
    }
friend float mean(sample s);
};
float mean(sample s)
{
    return float (s.a + s.b)/2;


}
int main()
{
    sample x;
    x.setvalue();
    cout<<"Mean is "<<mean(x)<<endl;
return 0;}



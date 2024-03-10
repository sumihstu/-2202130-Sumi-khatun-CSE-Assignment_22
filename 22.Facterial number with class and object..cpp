//code by sumi
#include<iostream>
using namespace std;

class Summation{//class declaration
    private:
    public:

        Summation(int i, int j)//declare publicly member function
        {
            int a, sum = 0;
            if(a<j){
                for(a=i;a<j;a++)
                {
                    sum = sum +a;
                }
                cout << sum;
            }

            else{
                cout << "Second Number must be larger !!!";
            }


        }
};

int main()
{
    Summation series1(5,15);//object are created

    return 0;
}

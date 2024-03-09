//code by sumi
//inline function
#include <iostream>
using namespace std;

inline void displayNum(int s) //inline function declaration
{
    cout <<s<< endl;
}

int main()
{
    displayNum(3); // first function call

    displayNum(6); // second function call

    return 0;
}

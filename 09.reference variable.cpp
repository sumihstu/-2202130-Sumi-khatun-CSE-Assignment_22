//code by sumi
//call by reference for user defined funcrions
#include<iostream>
using namespace std;

void swap(int *a, int *b) //user defined function
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int s,n; //declaring variables
    cout << "Enter TWONumber: ";
    cin >> s >> n;
    cout << endl;
    cout << "The value of s: " << s << " and the value of n: " << n << endl;
    cout << endl;

    swap(&s,&n); //call by reference pointers
    cout << "The value of n: " << n << " and the value of s: " << n << endl;


    return 0;
}

//code by sumi
//call by reference for user defined funcrions
#include<iostream>
using namespace std;

void swap(int *s, int *n) //user defined function
{
    int temp = *s;
    *s = *n;
    *n = temp;
}

int main()
{
    int x,y; //declaring variables
    cout << "Enter two number Number: ";
    cin >> x >> y;
    cout << endl;
    cout << "The value of x: " << x << " and the value of y: " << y << endl;
    cout << endl;

    swap(&x,&y); //call by reference pointers
    cout << "The value of x: " << x << " and the value of y: " << y << endl;


    return 0;
}

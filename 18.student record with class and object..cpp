//code by sumi
#include<iostream>
#include<string>
using namespace std;

class Record{ //records class declaration
private:
    string name;
    int std_id;
    float cgpa;

public:
    void getData() //user defined function for data input
    {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << endl;

        cout << "Enter your Student ID: ";
        cin >> std_id;
        cout << endl;

        cout << "Enter your CGPA: ";
        cin >> cgpa;
        cout << endl;
    }

    void showData()  //user defined function for data output
    {
        cout << "Your name is: " << name << endl;
        cout << "Your Student ID is: " << std_id << endl;
        cout << "Your CGPA is: " << cgpa << endl;
    }
};


int main()
{
    Record s1; //object of class

    s1.getData(); //initializing object
    s1.showData();

    return 0;
}

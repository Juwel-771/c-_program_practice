#include<iostream>
using namespace std;

int main()
{
    int length, breadth;

    cout << "Enter Length: " <<endl;
    cin >> length;
    cout << "Enter Breadth: " <<endl;
    cin >> breadth;

    if(length==breadth){
        cout << "It's Square";
    } else {
        cout << "Not Square";
    }


}

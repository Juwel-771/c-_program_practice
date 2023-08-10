#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter Your Number: ";
    cin >> num;

    if(num > 0){
        cout << "Positive Number";
    } else if(num < 0){
        cout << "Negative Number";
    } else {
        cout << "Not A Number";
    }
}

#include<iostream>
using namespace std;

int main()
{
    int num, num2;

    cout << "Enter Your Number: ";
    cin >>num >>num2;

    if(num > 0){
        cout << "Positive Number" <<endl;
    } else if(num < 0){
        cout << "Negative Number" <<endl;
    } else {
        cout << "Not A Number" <<endl;
    }

    if(num%2==0){
        cout << "Even Number" <<endl;
    } else {
        cout << "Odd Number"<<endl;
    }

    if(num > num2){
        cout << "Number 1 is Larger" <<endl;
    } else if(num < num2){
        cout << "Number 2 is Larger" <<endl;
    } else{
        cout << "Both are equal" <<endl;
    }

    int mark;

    cout << "Enter your marks: ";
    cin >> mark;

    if(mark > 33){
        cout << "Passed" <<endl;
    } else {
        cout << "failed" <<endl;
    }


    return 0;
}

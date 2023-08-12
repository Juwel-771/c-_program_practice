#include<iostream>
using namespace std;

int main()
{
    int leap;

    cout << "Enter Year: ";
    cin >>leap;

    if ((leap%4==0 && leap%100!=0)||(leap%400==0)){
        cout << "Leap Year";
    } /*else if(leap%400==0){
        cout << "Leap Year";
    } */ else {
        cout << "Not leap year";
    }
}

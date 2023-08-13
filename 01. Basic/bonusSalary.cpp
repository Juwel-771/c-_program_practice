#include<iostream>

using namespace std;

int main()
{
    int salay, year;
    cout << "Enter Your Salary: " <<endl;
    cin >> salay;
    cout << "Enter Your Service Year: " <<endl;
    cin >> year;

    if(year > 5){
        cout << "Your salary: " <<salay + (salay*0.05);
    }
    else{
        cout << "You will not get any bonus: " <<salay;
    }

    return 0;
}

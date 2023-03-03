
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float num1, num2;

     num1 = 20;
     num2 = 12;

     float all = num1+num2;
     float sub = num1-num2;
     float div = num1/num2;
     // float mul = num1*num2;

     cout << showpoint;
     cout << setprecision(2);
     cout << fixed;
     cout << setw(20) << "Total Number: " <<all <<endl;
     cout << noshowpoint;
     cout << setw(20) << "Substraction: " <<sub <<endl;
     cout << setw(20) << "Divide: " <<div <<endl;
     // cout << "Multiplication: " <<mul <<endl;

     return 0;
}

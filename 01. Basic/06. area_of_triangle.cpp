#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double base, height, area;
    cout << "Enter Base: ";
    cin >> base;

    cout << "Enter Height: ";
    cin >> height;

    area = 0.5 * base * height;

    cout << setprecision(3);
    cout << "Total Area: " << area;
    return 0;

}

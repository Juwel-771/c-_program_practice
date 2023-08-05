#include<iostream>
using namespace std;

int main()
{
    double farn, cels, kel;

    cout << "Enter celsius temperature: ";
    cin >> cels;

    farn = 1.8 * cels + 32;
    cout << "Farenhit: " << farn;

    cels = (farn - 32)/1.8;
    cout << endl;
    cout << "Cels: " << cels;

    kel = cels + 273;
    cout << endl;
    cout <<"Kelvin: " << kel;
}

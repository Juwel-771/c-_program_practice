#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter Word: ";
    cin >> ch;

    ch = tolower(ch);

    if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << "VOWEL";
    } /*else if (ch > 0 || ch < 0) {
        cout << "Number";
    } */ else {
        cout << "Consonent";
    }
}

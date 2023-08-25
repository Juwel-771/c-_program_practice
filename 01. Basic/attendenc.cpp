#include<iostream>

using namespace std;

int main()
{
    double totalClaas, classAttend, percentageClass;
    char medicalCause[100] = "Do you have a Medical Issue?";

    cout <<"Enter Total Class: ";
    cin >>totalClaas;
    cout <<"Enter Class Attend: ";
    cin >>classAttend;

    percentageClass = (classAttend/totalClaas)*100;

    if(percentageClass < 75){
        cout <<percentageClass <<endl;
        cout <<"You are not allowed to exam due to less than 75% attendance" <<endl;
        cout <<medicalCause <<endl;
        cin >>medicalCause;

        if(medicalCause=="Y" && medicalCause == "y"){
            cout << "Provide your Medical Certificate: ";
        }else {
            cout <<"You are not allowed";
        }

    } else {
        cout <<percentageClass <<endl;
        cout <<"You are applicable to attend exam";
    }

}

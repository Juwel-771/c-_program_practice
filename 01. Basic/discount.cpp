#include<iostream>
using namespace std;

int main()
{
    int purchaseQuantity, unitCost, originalPay;

    cout << "Enter Your Quantity: ";
    cin >> purchaseQuantity;

    unitCost = purchaseQuantity*100;


    if(unitCost > 1000){
        originalPay = unitCost - (unitCost*.1);
        cout << "Pay with discount: " <<originalPay;
    }
    else {
        cout << "No Discount: " <<unitCost;
    }


    return 0;
}

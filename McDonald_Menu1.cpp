#include <iostream>
#include "McDonald_Menu1.h"
using namespace std;

int main()
{
    string name;
    int NumPizza;
    int NumBurger;
    int NumSandwitch;
    int NumParath;
    float Bill;
    float Tax;
    float TaxBill;

    cout << "--------------------- Menu-----------------------";
    cout << "\n Pizza slice------------ $1.89";
    cout << "\n Burger----------------- $4.99";
    cout << "\n Sandwitch--------------- $5.39";
    cout << "\n Parath Roll------------ $29.89";

    cout << "\n\n\n --------------------Order Now----------------";
    cout << "\n what is customer Name:";
    cin >> name;

    cout << "\n Home many Pizza you want :";
    cin >> NumPizza;
    cout << "\n Home many Burgers you want :";
    cin >> NumBurger;
    cout << "\n Home many Sandwitches you want :";
    cin >> NumSandwitch;
    cout << "\n Home many parath Roll you want :";
    cin >> NumParath;

    Bill = (NumPizza * 1.89 + NumBurger * 4.99 + NumSandwitch * 5.39 + NumParath * 29.89);
    Tax = (Bill * 0.085);
    TaxBill = Tax + Bill;

    cout << "\n-------------------------------------Receipt of Order--------------------------;";
    cout << "\n\t Customer Name \t\t\t " << name;
    cout << "\n\t Pizza \t\t\t " << NumPizza;
    cout << "\n\t Burgers \t\t\t " << NumBurger;
    cout << "\n\t Sandwitches \t\t\t " << NumSandwitch;
    cout << "\n\t Rarath Roll \t\t\t " << NumParath;
    cout << "\n\t\t\t\t\t---------------------------------";

    cout << "\n\t              Bill           :\t" << Bill;
    cout << "\n\t              Tax  8.5%         :\t" << Tax;
    cout << "\n\t              Sub Total           :\t" << TaxBill;

    if (TaxBill > 1000)
    {
        float dBill = (TaxBill * 0.02);
        float dtbill = (TaxBill - dBill);
        cout << "\n---- Discount : \t" << dBill;
        cout << "\n\t\t\t\t\t--------------------";
        cout << "\n\t            Total Bill     :\t" << dtbill;
        cout << "\n\t\t\t\t\t---------------------------------";
    }
    else
    {
        cout << "\n---- Discount : \t0.00"; // No discount if the total bill is not over $1000
        cout << "\n\t\t\t\t\t--------------------\t";
        cout << "\n\t            Total Bill     :\t" << TaxBill;
        cout << "\n\t\t\t\t\t---------------------------------";
    }

    return 0;
}

/*
CSC 134
M2T2 Lab
CSC 134
davisc
9/27/25
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //create simple reciept that also handles sales tax
    //declare variables
    string item = "🍕 Pizza";
    double item_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount;
    double total;

    //greet user and take order
    cout << "Welcome to our CSC 134 Resturant!!" << endl;
    cout << "You ordered one " << item << ". " << endl;
    //calculate meal price
    //calculate sales tax and total
    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;



    //print reciept
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "______________________________" << endl;
    cout << item << "\t$" << item_price      << endl;
    cout << "Tax" << "\t\t$" << tax_amount   << endl;
    cout << "______________________________" << endl;
    cout << "Total" << "\t\t$" << total      << endl;
    cout << endl;


return 0;
}
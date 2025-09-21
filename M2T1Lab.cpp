/*
CSC 134
M1LAB1 *Apple Sales*
CSC 134
davisc
9/21/25

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// set up variables

string first_name, last_name, full_name;
string product = "lemons"
int amount_purchased;
double cost_each = 0.55;
double total_cost;

//greeting
cout << "Welcome to the " << product << "store!" << endl;

//ask for name
cout << "What's your first name?";
cin >> first_name;
cout << "What's your last name?";
cin >> last_name;

//combine f and l names, then use full name
full_name = first_name + " " + last_name;

cout << "Nice to meet you," << full_name << endl;

//Ask how many lemons customer wants and calculation

cout << "How many " << product << " would you like today?"

cin >> amount_purchased;

total_cost = amount_purchased * cost_each;

//set prices to 2 decimal places
cout << setprecision(2) << fixed;
//results

cout << "For " << amount _purchased << " " << product << endl;
cout << "That will be: $" << total_cost << endl;
cout << "Thank you for shopping with us!" << endl;

return 0;

}
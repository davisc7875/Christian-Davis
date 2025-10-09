#include <iostream>
using namespace std;

int main() {

    /*
    INPUT
    Name*/
    string first_name, last_name, full_name;
    
    double deposit, withdrawal;

    int acc_num = 121348;

    cout << "Question 1 💰";
    cout << "Please enter your first name: ";

    cin >> first_name;

    cout << "Please enter your last name: ";

    cin >> last_name;

    full_name = first_name + " " + last_name;


    /*Int account balance*/
    cout << "What is your starting account balance? ";

    double balance;

    cin >> balance;

    /*Deposit*/

    cout << "How much would you like to deposit? ";

    cin >> deposit;

    /*withdrawal*/
    cout << "How much would you like to withdraw? ";

    cin >> withdrawal;

    /*Calculate*/

    balance = balance + deposit - withdrawal;

    /*OUTPUT] ----->
    */
    cout << "Full name: " << full_name << endl;


    cout << "Account number: " << acc_num << endl;

    cout << "Final balance: " << balance << endl;

    cout << "Question 2 🎉";
    cout << "Lets go FTCC!" << endl;
    cout << "Lets go FTCC!" << endl;
    cout << "Lets go FTCC!" << endl;
    cout << "🎉Lets go Trojans!🎉" << endl;


return 0;
}
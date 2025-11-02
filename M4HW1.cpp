/*
M4HW
CSC 134
davisc
11/2/25
Multiplication Table
Silver rank
*/

// This program asks the user for a number between 1 and 12, afterwards multiplying the number in order from 1 to 12
// This program will use loops that stop after 12 iterations
#include <iostream>
using namespace std;

int main() {
    
int num1, num2, answer;
cout << "Enter your number: " << endl;
cin >> num1;

if (num1 <= 12) {
for (int i = 1; i <= 12; i++) {
    answer = num1 * i;
    cout << num1 << " x " << i << " is " << answer << endl;
}

}

else {
    cout << "Your number grade is larger than 12" << endl;
}

}
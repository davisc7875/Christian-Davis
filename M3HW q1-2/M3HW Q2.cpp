// CSC 134
// M3HW - Bronze
// Christian Davis
// 10/19/25
// Question 2

/* Beforehand, the program generates 2 numbers.
add them together. 
It takes the previous addition and adds it to an if statement.
In the program's question, it asks the user what the 2 didgts are by including the previously added numbers.
If the user's input is the same as the addition the program flags it as correct, if not, it flags it as incorrect.
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main() {

    int num1,num2,pg_ans,user_ans;

    num1 = rand() % 10;

    num2 = rand() % 10;

    pg_ans = num1 + num2;

    cout << "What is " << num1 << " plus " << num2 << "?" << endl;

    cin >> user_ans;

        if (user_ans == pg_ans) {
        cout << "Correct!" << endl;
}
        else {
        cout << "Incorrect" << endl;
}
    return 0;
}
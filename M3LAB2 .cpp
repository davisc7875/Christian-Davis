/*
CSC 134
M2T2 Lab
CSC 134
davisc
10/18/25
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Set up grade variable
double grade;

//Ask user to input grade
cout << "Enter your numerical grade:" << endl;

cin >> grade;

//Process the entered grade and output the letter grade

cout << endl;
int main() {
    if (grade <= 100 && grade >= 90) {
    cout << "Your letter grade is: A" << endl;
}
    else if (grade <= 89 && grade >= 80) {
    cout << "Your letter grade is: B" << endl;
}
    else if (grade <= 79 && grade >= 70) {
    cout << "Your letter grade is: B" << endl;
} 
    else if (grade <= 69 && grade >= 60) {
    cout << "Your letter grade is: D" << endl;
}
    else if (grade <= 59 && grade >= 0) {
    cout << "Your letter grade is: D" << endl;
}
    else {
    cout << "Your number grade is outside the valid range" << endl;
}
 return 0;
}

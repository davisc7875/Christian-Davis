// CSC 134
// M3HW - Bronze
// Christian Davis
// 10/19/25
// Question 1

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {

    string choice;
    cout << "Hi! I'm a C++ program, are you having a good day or a bad day?" << endl;    

    cin >> choice;
    cout << endl;
    
    if (choice == "good") {
    cout << "Thats good to hear! I hope the rest of yur day goes well." << endl;
}
    else if (choice == "bad") {
    cout << "Im sorry to hear that, hope it gets better soon." << endl;
}
    else {
    cout << "No worries if you're not sure." << endl;
}

  cout << "Thank you for playing!" << endl;
  return 0;
}

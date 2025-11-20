/*
M3LAB1
CSC 134
davisc
10/18/25

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

string choice;

cout << "You have 4 paths before you," << endl;
cout << "Choose one of the paths to see where it leads." << endl;

cin >> choice;
cout << endl;

  if (choice == "Path 1") {
    cout << "Path 1 leads to green pastures" << endl;
  }
  else if (choice == "Path 2") {
    cout << "Path 2 leads to a winter wonderland" << endl;
  }
  else if (choice == "Path 3") {
    cout << "Path 3 leads to a volcanic mountain" << endl;
  }
    else if (choice == "Path 4") {
    cout << "Path 4 leads to a radioactive forest" << endl;
  }
  else {
    cout << "That's not one of the choices provided" << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0;
}
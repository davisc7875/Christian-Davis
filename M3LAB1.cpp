/*
M3LAB1
CSC 134
davisc
10/17/25

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

string red, green, blue;
int choice

cout << "Before you are a red, green, and blue barrel," << endl;
cout << "Choose one of the barrels to shoot by typing their color." << endl;

cin >> choice;
cout << endl;

  if (red == choice) {
    cout << "Shooting the red barrel causes it to explode" << endl;
  }
  else if (green == choice) {
    cout << "Shooting the green barrel causes it to leak acid melting its surrounding area" endl;
  }
  else if (blue == choice) {
    cout << "Shooting the blue barrel causes it to leak Liquid Nitrogen freezing its surrounding area" endl;
  }
  else {
    cout << "That's not one of the choices provided" << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0;
}
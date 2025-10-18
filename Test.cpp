#include <iostream>
#include <iomanip>
using namespace std;

int main() {

cout << "Before you are a red, green, and blue barrel," << endl;
cout << "Choose one of the barrels to shoot by typing their color." << endl;

cin >> barrel;
cout << endl; 

switch (barrel){
case red:
cout  << "Shooting the red barrel causes it to explode";
break;
case green:
cout  << ""Shooting the green barrel causes it to leak acid melting its surrounding area";
break;
case blue:
cout << "Shooting the blue barrel causes it to leak Liquid Nitrogen freezing its surrounding area"
break;
} 
return 0;
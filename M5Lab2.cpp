// M5LAB2
// Header goes here

#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main(){
	
   double length,    // The rectangle's length
          width,    // The rectangle's width
          area;      // The rectangle's area
          
   length = getLength();
   width = getWidth();

   area = getArea(length, width);

   displayData(length, width, area);
          
   return 0;
}

double getLength() {
    double len;
    cout << "Please enter your length: ";
    return len;
}

double getWidth() {
    double wid;
    cout << "Please enter your width: ";
    return wid;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "Length: " << length << '\n';
    cout << "Width : " << width  << '\n';
    cout << "Area  : " << area   << '\n';
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************
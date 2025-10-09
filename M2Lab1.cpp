/* 
The purpose of this lab is to understand how developers teach programs how to solve a problem

Programs only know as much as you input, so you need to know how the solve the problem before the program can

Same goes with everything else it does, if you dont give it the right tools it cant work (variables)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    double length,
        width,
        height,
        volume,
        cost,
        charge,
        profit;


    cout << "Please enter the dimensions of the crate in feet" endl;
    cout << "Length?" ;
    cin >> length;
    
    cout << "Width?" ;
    cin >> width;
    
    cout << "Height?" ;
    cin >> height;

    volume = length * width

return 0;
}



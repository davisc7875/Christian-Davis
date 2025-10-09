/* 
The purpose of this lab is to understand how developers teach programs how to solve a problem

Programs only know as much as you input, so you need to know how the solve the problem before the program can

Same goes with everything else it does, if you dont give it the right tools it cant work (variables)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    /* Hello, what tools, and rules will i use for this job?
    */

    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    

    double length,
        width,
        height,
        volume,
        cost,
        charge,
        profit;

        cout << setprecision(2) << fixed << showpoint;
    /* Okay thanks, how do i use these?
    */
   // Prompt
    cout << "Please enter the dimensions of the crate in feet:\n";
    cout << "Length?" ;
    cin >> length;
    
    cout << "Width?" ;
    cin >> width;
    
    cout << "Height?" ;
    cin >> height;
    // Process
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet. \n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;

return 0;
}



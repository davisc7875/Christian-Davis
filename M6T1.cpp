/*
CSC-134
M5T1 - Basic Functions
davisc
12/3/25
My (human not ai) review:
The purpose of these 2 versions it to show a program using a simple loop and one using an array.
Both gather the amount of cars each day, add them all up to get a total, then divide by the number of days to get the average
once its finished with the first method main calls the second one
The array version is able to print a graph, but also reuses strings making it a little more efficient.

This bridges everything we know about the previous chapters and introduces some new concepts in the current chapter.

On another note, in the real world, the cars could be picked up by a sensor or some kind of pressure plate.
maybe osha would use this to get statistics for the site, or even an advertisement company wants to know how many people saw their billboard
Everytime they pass it, it  adds one to the counter in the system.
I'll use the example youve given.
*/
#include <iostream>
using namespace std;
    // Function Declarations
void method1();
void method2();

// main
int main() {
    // calls the 2 methods of counting cars
    method1();
    method2();

    return 0;
}

// function definitions
void method1() {
    // Method one - no arrays
    // Count 5 days Pokemon, get total and average
    cout << "Enter each car that passes the site per day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int SIZE = 5;
    int count = 0;
    int car_today;     // current value, to add
    int car_total = 0; // add up 
    double car_avg = 0;// average

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> car_today;
        car_total += car_today;
        count++; // Move to next day
    }
    cout << "Total = " << car_total << endl;
    car_avg = (double) car_total / SIZE;
    cout << "Average = " << car_avg << endl;
}

void method2() {
    // Method 2 uses two arrays:
    // Names of the days
    // # pokemon found on the days

    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"}; // initialized
    int cara[SIZE]; // not initialized
    /*cara means car array
    */
    int cara_total = 0;
    double cara_avg = 0.0;

    for (int i=0; i < SIZE; i++) {
        cout << "Number of cars on " << days[i] << ": ";
        cin >> cara[i];
    }
    // print output in "tabular" (table) format
    cout << "Day\tCars" << endl;
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << "\t" << cara[i] << endl;
        // find the total
        cara_total += cara[i];
    }
    // find total, print results
    cara_avg = (double) cara_total / SIZE;
    cout << "Total = " << cara_total << endl;
    cout << "Average = " << cara_avg << endl;

}

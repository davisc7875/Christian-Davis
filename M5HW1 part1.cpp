/*
This program uses a loop to prompt the user multiple times and then uses those inputs to calculate the average rainfall for 3 months

every time a month is added by an if statement, counter goes up, when the counter goes to 3, the average calculation is triggered and the program ends
If you enter a month twice */
#include <iostream>
using namespace std;
int main() {
int counter = 0;

string month, january , february, march;
double jan_rf, feb_rf, mar_rf, avg_rainfall;

while (counter < 3) {
cout << "Enter a month from January to March: ";
cin >> month;


if (month == "January") {
    cout << "Enter rainfall for January: ";
    cin >> jan_rf;
  } else if (month == "February") {
    cout << "Enter rainfall for February: ";
    cin >> feb_rf;
  } else if (month == "March") {
    cout << "Enter rainfall for March: ";
    cin >> mar_rf;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
  }
}
avg_rainfall = ((jan_rf + feb_rf + mar_rf) / 3);
cout << "the average rainfall for January, February, and March is " << avg_rainfall << "inches." << endl;
counter++;

return 0;
};
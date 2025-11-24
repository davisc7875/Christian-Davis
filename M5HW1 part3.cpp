#include <iostream>
using namespace std;
int main() {
    int number;
    string rnumeral;

cout << "Enter a number between 1 and 10" << endl;
cin >> number;

if (number == 1)
{
    rnumeral == "I";
}
else if (number == 2)
{
    rnumeral == "II";
}
else if (number == 3)
{
    rnumeral == "III";
}
else if (number == 4)
{
    rnumeral == "IV";
}
else if (number == 5)
{
    rnumeral == "V";
}
else if (number == 6)
{
    rnumeral == "VI";
}
else if (number == 7)
{
    rnumeral == "VII";
}
else if (number == 8)
{
    rnumeral == "VIII";
}
else if (number == 9)
{
    rnumeral == "IX";
}
else if (number == 10)
{
    rnumeral == "X";
}
else {
    cout << "Your number is over or under the numbers 1 - 10" << endl;
}
cout << "The Roman Numeral version of " << number <<  "is" << rnumeral << endl;

return 0;
}
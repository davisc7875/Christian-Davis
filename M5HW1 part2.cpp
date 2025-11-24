#include <iostream>
using namespace std;
int main() {
    int counter = 0;

    while (counter < 1) {
    double length, width, height, volume;

    cout << "Enter the block's length: " << endl;
    cin >> length;
    
    cout << "Enter the block's width: " << endl;
    cin >> width;
    
    cout << "Enter the block's height: " << endl;
    cin >> height;

    if (length > 0 && width > 0 && height > 0)
{
    volume = length * width * height;
    cout << "The block's volume is" << volume << endl;
    counter++;
}
else {
    cout << "One of your measurements is a nonzero number, please try again" << endl;
}
    }


return 0;
}
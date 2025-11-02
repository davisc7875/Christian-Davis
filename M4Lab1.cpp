#include <iostream>
using namespace std;

int main() {
    cout << "M4LAB, Boxes\n";

    int height, width;

    cout << "How tall is the box?: " << endl;
    cin >> height;
    
     cout << "How wide is the box?: " << endl;
    cin >> width;

    cout << "one row" << endl;
    for (int i = 0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl;

    cout <<"One column" << endl;
    for (int j=0; j < height; j++) {
    
        cout << "*" << endl;
    }

    cout << "Box" << endl;
    for (int j=0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    }

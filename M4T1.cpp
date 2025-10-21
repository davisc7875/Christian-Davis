//Hello squared

#include <iostream>
using namespace std;
int main()
{
    const int MIN_NUMBER = 1,
              MAX_NUMBER = 5;

    int num = MIN_NUMBER;

    cout << "Hello Number  Number squared\n";
    cout << "-----------------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t Hello" <<  (num * num) << endl;
        num++;
    }
        cout << "That's all!\n";
        return 0;
}
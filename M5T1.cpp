/*
CSC-134
M5T1 - Basic Functions
davisc
11/9/25

Create one goal function, one value function, call them both main()
*/

//Have some declarations
void say_hi();
int give_answer ();
int double_number (int num);

//Lets start
#include <iostream>
using namespace std;
int main()
{
    cout << "Hi from main()!" << endl;
    say_hi();
    int answer = give_answer ();
    cout << "The answer is: " << answer << endl;

    //double the answer
    int twotimes = double_number(7);
       cout << "Here's another number: " << twotimes << endl;
       return 0;
   }
   void say_hi() {
       cout << "Hi from say_hi()! " << endl;
       return;
   }
   int give_answer() {
       return 35;
   }
   int double_number(int num) {
       int new_num = num * 2;
       return new_num;
   }
   
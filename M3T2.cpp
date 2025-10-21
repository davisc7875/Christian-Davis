//For out pseudo random numbers
#include <iostream>

//For true randomness
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    cout << "Dice Roll" << endl;
    int session = time(0);
    cout << "Session:" << session << endl;
    srand(session);

    //A dice has 6 sides so we will set the max count to 6
    const int MAX = 6;
    //Lets make 2 dice and something to store their numbers added together
    int roll1, roll2, total;

    //Now we have to teach the program how we use these dice
    roll1 = (rand() % MAX) + 1;
    cout << "Dice 1: " << roll1 << endl;

    roll2 = (rand() % MAX) + 1;
    cout << "Dice 2: " << roll1 << endl;
    
    total = roll1 + roll2;
    cout << "Total: " << total << endl;

    //craps segment
    // 7 and 11 wins
    // 2 and 12 loses

    if (total == 7) {
        cout << "Lucky 7! Nice roll! you win!" << endl;
    }
    else if (total == 11) {
        cout << "Heaven 11! you win!" << endl;
    }
    else if (total == 2) {
        cout << "Ahh! Snake eyes! too bad you lose!" << endl;
    } 
    else if (total == 3) {
        cout << "Oh no! Unlucky 3! You lose!" << endl;
    } 
    else if (total == 12) {
        cout << "Watch out!! (crash!!) Boxcars.. Sorry you lose." << endl;
    } 
    else {
        cout <<"Your points: " << total << endl;
    }










    return 0;
}
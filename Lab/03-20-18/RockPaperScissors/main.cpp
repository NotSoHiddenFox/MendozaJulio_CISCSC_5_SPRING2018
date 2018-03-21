/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza 
 * Created on March 20, 2018, 11:47AM
 * Purpose:  Hello World Template
 */
//p=80
//r=82
//s=83

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int> (time(0)));
    //Input or initialize values Here

    char p1, p2;
    p1 = rand() % 3 + 'R';
    p1 = p1 > 'S' ? 'P' : p1;
    p2 = rand() % 3 + 'R';
    p2 = p2 > 'S' ? 'P' : p2;
    //player choice
    cout << "Rock Paper Scissors game." << endl;
    cout << "Player 1= " << p1 << endl;
    cout << "Player 2= " << p2 << endl;
    //Determine the winner
    if (p1 == p2) {
        cout << "The game ends in DRAW.";
    } else if (p1 == 'P') {
        if (p2 == 'S') {
            cout << "Player 2 WINS." << endl;
        } else {
            cout << "Player 1 WINS.";
        }
    } else if (p1 == 'S') {
        if (p2 == 'R') {
            cout << "Player 2 WINS." << endl;
        } else {
            cout << "Player 1 WINS.";
        }
    } else if (p1 == 'R') {
        if (p2 == 'S') {
            cout << "Player 1 WINS." << endl;
        } else {
            cout << "Player 2 WINS.";
        }
    }

    //Output Located Here


    //Exit
    return 0;
}


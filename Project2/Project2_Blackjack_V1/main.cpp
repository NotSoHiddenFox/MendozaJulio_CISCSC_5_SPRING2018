/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on May 15, 2018, 2:00 PM
 *Purpose: Allows you to play a simple game of blackjack against the program.
 *        This version is receiving performance improvements.
 * 
 * ToDo:
 *
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <cstdlib>//used for number gen
#include <ctime>//used for seed for rng
#include <iomanip>//formatting
using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns

//Function Prototypes go here.
int dealer();
int deck();


//Executions Begin Here!

int main(int argc, char** argv) {
    //seed rng
    srand(static_cast<unsigned int> (time(0)));
    //declare variables
    cout << deck();

}

dealer() {
    int toBeat; //this will be the score to beat
    //this defines the score to beat. It is a simple value determined without
    //actually playing the game.
    //this assumes the dealer is capable enough to play two aces as two ones.
    //it also assumes the dealer will occasionally get three tens.
    toBeat = rand() % 31 + 2; //[4-30]
    if (toBeat > 21) toBeat = 0; //this is used to know the dealer is bust.
    return toBeat;
}

deck() {
    string suit = ""; //the suit of the card
    int card = 0; //The face of the card drawn.
    int value = 0; //the value of the card drawn.

    string dSuit[3]; //The array holding the suit of the cards. 4
    int dCard[12]; //The array holding the card number drawn. 13

    //decide the suit drawn
    bool test = true;

    do {
        cout << rand() % 4;
    } while (test == true);




    return value;


}
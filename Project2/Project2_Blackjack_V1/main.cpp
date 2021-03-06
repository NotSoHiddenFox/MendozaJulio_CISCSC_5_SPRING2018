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
#include <string>//for txt
#include <fstream>//for txt
#include <cmath>
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
    return 0;
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
    //Declarations
    ifstream suit; //the suit of the card
    ifstream card; //The face of the card drawn. 
    suit.open("suit.dat");
    card.open("card.dat");

    
    int value = 0; //the value of the card drawn.
    string dSuit[3]={"","",""}; //The array holding the suit of the cards. 4
    string dCard[12]={"","","","","","","","","","","",""}; //The array holding the card number drawn. 13

    //open the files holding the cards
    
    //load the Suits into the program from suit.dat
    for (int i = 0; i < 4; i++) {
        suit >> dSuit[i];
    }

    //load the Cards into the from program from card.dat

    for (int i = 0; i < 13; i++) {
           card >> dCard[i];
    }


    //decide the suit drawn

    cout << rand() % 4;
    suit.close();
    card.close();
    for (int i = 0; i < 4; i++) {

        cout << endl << "Suit From Array:   " << dSuit[i] << endl;

    }
    for (int i = 0; i < 13; i++) {
        cout << endl << "Card From Array:   " << dCard[i] << endl;
    }

   
    return value;

}
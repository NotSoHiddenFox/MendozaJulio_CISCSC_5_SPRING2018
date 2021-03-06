/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on May 15, 2018, 2:00 PM
 *Purpose: This program draws cards from a deck.
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
//int dealer();
string deckSuit();
string deckCard();

//Executions Begin Here!

int main(int argc, char** argv) {
    //seed rng
    srand(static_cast<unsigned int> (time(0)));
    //declare variables

    cout << "Draw two cards for player one:" << endl;
    deckSuit();
    deckCard();
    cout << "I have received the following in MAIN:\nSuit: " << deckSuit()
            << "\nCard: " << deckCard() << endl;
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

string deckSuit() {
    //Declarations 
    int rSuit = 0; //used to select suit array location randomly
    ifstream suit; //the suit of the card
    suit.open("suit.dat");
    string dSuit[4]; //The array holding the suit of the cards.
    //Initialize the Arrays
    dSuit[0] = "0";
    dSuit[1] = "0";
    dSuit[2] = "0";
    dSuit[3] = "0";
    //load the Suits into the program from suit.dat
    for (int i = 0; i < 4; i++) {
        suit >> dSuit[i];
    }
    //close the card program
    suit.close();
    //decide the suit drawn
    rSuit = rand() % 4;
    return dSuit[rSuit];
}

string deckCard() {
    //Declarations
    int rCard = 0; //used to select card array location randomly
    ifstream card; //The face of the card drawn. 
    card.open("card.dat");
    string dCard[13]; //The array holding the card number drawn. 13
    //Initialize the Arrays
    for (int i = 0; i < 13; i++) {
        dCard[i] = "0";
    }
    //load the Cards into the from program from card.dat
    for (int i = 0; i < 13; i++) {
        card >> dCard[i];
    }
    //close the card program
    card.close();
    //decide the card drawn
    rCard = rand() % 13;
    return dCard[rCard];

}
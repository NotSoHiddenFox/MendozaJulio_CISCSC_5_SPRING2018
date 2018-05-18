/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on May 18, 2018, 1:30 PM
 *Purpose: This program draws five cards from a deck.
 *         It then stores the cards in the player's hand.
 *         It also checks for duplicates as they are stored.
 * 
 * ToDo:
 *      Place the deck in an array: COMPLETE
 *      Draw five cards at random: COMPLETE
 *      Store the cards in the player's hand: COMPLETE
 *      Prevent duplicates in the hand: COMPLETE
 *      Add a value to the cards: INCOMPLETE
 *      Allow the user to decide if to draw a card: INCOMPLETE
 *      Add a Win/Lose condition: INCOMPLETE
 *      Integrate the Dealer Function:  INCOMPLETE
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <cstdlib>//used for number gen
#include <ctime>//used for seed for rng
#include <iomanip>//formatting
#include <string>//for txt
#include <fstream>//for txt
#include <cmath>//here for moral support
using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns

//Function Prototypes go here.
//int dealer();
string deckSuit();
string deckCard();
bool isDupe(string [], int length, string toTest, int skip);

//Executions Begin Here!

int main(int argc, char** argv) {
    //seed rng
    srand(static_cast<unsigned int> (time(0)));
    //declare variables
    bool reDraw = false; //used to prevent duplicates.
    int p1Round = 0; //keeps track of the number of cards in hands of player one.
    cout << "Draw five cards for player one:" << endl;

    //This is the working area



    string playOne[5]; //used to hold the player one cards
    //card 1
    playOne[p1Round] = deckCard() + " of " + deckSuit();
    p1Round++;


    //card 2
    playOne[p1Round] = deckCard() + " of " + deckSuit();
    //check if the new card is duplicated
    if (isDupe(playOne, 5, playOne[p1Round], p1Round) == true) {
        reDraw = true;
        //If Duplicate
        do {
            playOne[p1Round] = deckCard() + " of " + deckSuit();

            if (isDupe(playOne, 5, playOne[p1Round], p1Round) == false) reDraw = false;

        } while (reDraw == true);
    }
    p1Round++;


    //card 3
    playOne[p1Round] = deckCard() + " of " + deckSuit();
    //check if the new card is duplicated
    if (isDupe(playOne, 5, playOne[p1Round], p1Round) == true) {
        reDraw = true;
        //If Duplicate
        do {
            playOne[p1Round] = deckCard() + " of " + deckSuit();

            if (isDupe(playOne, 5, playOne[p1Round], p1Round) == false) reDraw = false;

        } while (reDraw == true);
    }
    p1Round++;


    //card 4
    playOne[p1Round] = deckCard() + " of " + deckSuit();
    //check if the new card is duplicated
    if (isDupe(playOne, 5, playOne[p1Round], p1Round) == true) {
        reDraw = true;
        //If Duplicate
        do {
            playOne[p1Round] = deckCard() + " of " + deckSuit();

            if (isDupe(playOne, 5, playOne[p1Round], p1Round) == false) reDraw = false;

        } while (reDraw == true);
    }
    p1Round++;


    //card 5
    playOne[p1Round] = deckCard() + " of " + deckSuit();
    //check if the new card is duplicated
    if (isDupe(playOne, 5, playOne[p1Round], p1Round) == true) {
        reDraw = true;
        //If Duplicate
        do {
            playOne[p1Round] = deckCard() + " of " + deckSuit();

            if (isDupe(playOne, 5, playOne[p1Round], p1Round) == false) reDraw = false;

        } while (reDraw == true);
    }

    //State what was received
    cout << "I have received the following in MAIN:\n";
    for (int i = 0; i < 5; i++) {
        cout << playOne[i] << endl;
    }



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

bool isDupe(string hand[], int length, string toTest, int skip) {
    bool x; //the return value
    bool reDraw; //to check for duplicates
    x == false;


    //Check to see if duplicate
    for (int i = 0; i < length; i++) {
        //Prevent values to be tested against themselves.
        if (i == skip) i++;

        if (toTest == hand[i]) x = true;
    }
    //return the result
    return x;
}

string deckSuit() {
    //Declarations 
    int rSuit = 0; //used to select suit array location randomly
    ifstream suit; //the suit of the card
    suit.open("suit.dat");
    string dSuit[4]; //The array holding the suit of the cards.
    //Initialize the Arrays
    dSuit[0] = "0"; //To later hold Spades
    dSuit[1] = "0"; //To later hold Hearts
    dSuit[2] = "0"; //To later hold Clovers
    dSuit[3] = "0"; //To later hold Diamonds
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
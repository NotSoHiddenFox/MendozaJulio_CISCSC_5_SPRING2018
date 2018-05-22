/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on May 22, 2018, 1:50 AM
 *Purpose: This program draws five cards from a deck.
 *         It then stores the cards in the player's hand.
 *         It also checks for duplicates as they are stored.
 * 
 * ToDo:
 *      Place the deck in an array: COMPLETE
 *      Draw five cards at random: COMPLETE
 *      Store the cards in the player's hand: COMPLETE
 *      Prevent duplicates in the hand: COMPLETE     
 *      Allow the user to decide if to draw a card: COMPLETE
 *      State the card drawn per round: COMPLETE
 *      Add a value to the cards: COMPLETE
 *      Add a Win/Lose condition: INCOMPLETE
 *      Integrate the Dealer Function:  INCOMPLETE
 * Past Challenge:
 *                Stating the card when using two different functions to draw 
 *                a card meant that the results would need to be combined,
 * Past Challenge:
 *                Using cin as integer has allowed the program to continue
 *                Attempt to change it to a char and then have the program
 *                display the cards
 *                as they are drawn.
 * Past Challenge:
 *                Extracting the value as an integer from a string was not as
 *                simple as I thought. I used a temporary value to take 
 *                advantage of the segmented nature of the draw card functions.
 * Past Challenge:
 *                The issue with the isDupe and getValue functions has been
 *                resolved. Redrawing due to duplicate does no longer cause
 *                the value to not add up properly.
 * Current Challenge:
 *                   I will now attempt to create conditions stating if you 
 *                   win or lose. This should be easily done with a function 
 *                   and the use of the value variable in main.
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
int getVal(string); //this assigns a value to a card
int score(int, int);
bool isDupe(string [], int length, string toTest, int skip);


//Executions Begin Here!

int main(int argc, char** argv) {
    //seed rng
    srand(static_cast<unsigned int> (time(0)));
    //declare variables
    bool p1Draw = true; //allows the user to decide to draw a card.
    bool p1ReDraw = false; //used to prevent duplicates.
    int p1Round = 0; //keeps track of the number of cards in hands of player one.
    int p1Temp = 1; //for deciding if to draw a card
    int value = 0; //for keeping score
    string playOne[6]; //used to hold the player one cards
    string valTemp = "0"; //Assists in getting the value of a card

    for (int i = 0; i < 5; i++) {
        playOne[i] = "nothing";
    }

    cout << "Draw two cards for player one:" << endl;

    //card 1
    //r0
    valTemp = deckCard();
    playOne[p1Round] = valTemp + " of " + deckSuit();


    //get value for the card.
    value = getVal(valTemp);

    p1Round++; //r1
    //card 2
    valTemp = deckCard();
    playOne[p1Round] = valTemp + " of " + deckSuit();


    //get value for the card.
    value += getVal(valTemp);


    //check if the new card is duplicated
    if (isDupe(playOne, 5, playOne[p1Round], p1Round) == true) {
        p1ReDraw = true;
        //If Duplicate
        do {
            playOne[p1Round] = deckCard() + " of " + deckSuit();

            if (isDupe(playOne, 5, playOne[p1Round], p1Round) == false)
                p1ReDraw = false;

        } while (p1ReDraw == true);
    }

    //state the current cards held.

    cout << "You have drawn " << playOne[0] << " and "
            << playOne[1] << "." << endl;


    //ask to draw another card.
    if (p1Draw == true) {
        cout << "You currently score " << value << "." << endl;
        score(value, p1Round);
        cout << "Press 1 to draw another card or 0 to stay.";
        cin >> p1Temp;

        if (p1Temp == 1) {
            p1Draw = true;
        } else if (p1Temp == 0) {
            p1Draw = false;
        }
    }

    p1Round++; //r2

    //card 3


    if (p1Draw == true) {
        valTemp = deckCard();
        playOne[p1Round] = valTemp + " of " + deckSuit();
        //check if the new card is duplicated
        if (isDupe(playOne, 5, playOne[p1Round], p1Round) == true) {
            p1ReDraw = true;
            //If Duplicate
            do {
                valTemp = deckCard();
                playOne[p1Round] = valTemp + " of " + deckSuit();

                if (isDupe(playOne, 5, playOne[p1Round], p1Round) == false)
                    p1ReDraw = false;

            } while (p1ReDraw == true);
        }
        //get value for the card.
        value += getVal(valTemp);
    } else {

        p1Draw = false;

    }

    //state the current cards held
    cout << "You have drawn " << playOne[2] << " and placed it next to your "
            << endl;
    cout << playOne[0] << ", ";
    cout << playOne[1] << ".\n";


    //ask to draw another card.
    if (p1Draw == true) {
        cout << "You currently score " << value << "." << endl;
        score(value, p1Round);
        cout << "Press 1 to draw another card or 0 to stay.";
        cin>>p1Temp;

        if (p1Temp == 1) {
            p1Draw = true;
        } else if (p1Temp == 0) {
            p1Draw = false;
        }
    }

    p1Round++; //r3


    //card 4



    if (p1Draw == true) {
        valTemp = deckCard();
        playOne[p1Round] = valTemp + " of " + deckSuit();
        //check if the new card is duplicated
        if (isDupe(playOne, 5, playOne[p1Round], p1Round) == true) {
            p1ReDraw = true;
            //If Duplicate
            do {
                valTemp = deckCard();
                playOne[p1Round] = valTemp + " of " + deckSuit();

                if (isDupe(playOne, 5, playOne[p1Round], p1Round) == false)
                    p1ReDraw = false;

            } while (p1ReDraw == true);
        }
        //get value for the card.
        value += getVal(valTemp);
    } else {

        p1Draw = false;

    }

    //state the current cards held.
    if (p1Draw == true) {
        cout << "You have drawn " << playOne[3] << " and placed it next to your "
                << endl;
        cout << playOne[0] << ", ";
        cout << playOne[1] << ", ";
        cout << playOne[2] << ".\n";
    }

    //ask to draw another card.
    if (p1Draw == true) {
        cout << "You currently score " << value << "." << endl;
        score(value, p1Round);
        cout << "Press 1 to draw another card or 0 to stay." << endl;



        if (p1Temp == 1) {
            p1Draw = true;
        } else if (p1Temp == 0) {
            p1Draw = false;
        }
    }



    p1Round++; //r4

    //card 5



    if (p1Draw == true) {
        valTemp = deckCard();
        playOne[p1Round] = valTemp + " of " + deckSuit();
        //check if the new card is duplicated
        if (isDupe(playOne, 5, playOne[p1Round], p1Round) == true) {
            p1ReDraw = true;
            //If Duplicate
            do {
                valTemp = deckCard();
                playOne[p1Round] = valTemp + " of " + deckSuit();

                if (isDupe(playOne, 5, playOne[p1Round], p1Round) == false)
                    p1ReDraw = false;

            } while (p1ReDraw == true);
        }
        //get value for the card.
        value += getVal(valTemp);
    } else {

        p1Draw = false;

    }
    score(value, p1Round);
    //State what was received

    cout << "You scored " << value << "." << endl;
    cout << "\n\n\n\n"
            "______________________________________\n"
            "I have received the following in MAIN:\n";
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

int score(int score, int round) {

    //condition for going bust and losing. (0)
    if (score > 21) {
        score = 0;
    }//condition for wining with a blackjack (1)
    else if (score == 21 && round == 1) {
        score = 1;

    }//condition for winning with 5 cards (2)
    else if (score <= 21 && round == 4) {
        score = 2;
    }//condition for winning by scoring 21 (3)
    else if (score == 21) {
        score = 3;
    }

    return score;
}

int getVal(string card) {
    int value = 0;
    int decide = 3;
    if (card == "2") {
        value = 2;
        return value;
    } else if (card == "3") {
        value = 3;
        return value;
    } else if (card == "4") {
        value = 4;
        return value;
    } else if (card == "5") {
        value = 5;
        return value;
    } else if (card == "6") {
        value = 6;
        return value;
    } else if (card == "7") {
        value = 7;
        return value;
    } else if (card == "8") {
        value = 8;
        return value;
    } else if (card == "9") {
        value = 9;
        return value;
    } else if (card == "10") {
        value = 10;
        return value;
    } else if (card == "Jack") {
        value = 10;
        return value;
    } else if (card == "Queen") {
        value = 10;
        return value;
    } else if (card == "King") {
        value = 10;
        return value;
    } else if (card == "Ace") {

        cout << "Press '1' to play the Ace has a 1, or '0' to play it as an 11."
                << endl;
        cin>>decide;
        if (decide == 1) {
            value = 1;
            return value;
        }
        if (decide == 0) {
            value = 11;
            return value;
        }
    } else return value;


}
// if (isDupe(playOne, 5, playOne[p1Round], p1Round) == true)

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
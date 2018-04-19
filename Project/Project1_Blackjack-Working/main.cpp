/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on April 19, 2018, 11:00 AM
 *Purpose: Allows you to pull a random card from a deck
 *      Bugfix ED  
 *        
 * 
 * ToDo:
 *fix if first card is ace it allows to only play one card
 * fix endless loop with invalid input for ACES
 * BUGFIXING
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


//Executions Begin Here!

int main(int argc, char** argv) {
    //seed rng
    srand(static_cast<unsigned int> (time(0)));
    //declare variables
    bool draw; //Determines if another card will be drawn
    int card; //The card being drawn
    int pcard1; //the value of player card one.
    int pcard2; //the value of player card two.
    int pcard3; //the value of player card three.
    int pcard4; //the value of player card four.
    int pcard5; //the value of player card five.
    int choice; //used to assign a value of "1" or "11" to an Ace card.
    int tally; //used to keep track of your score so far.
    int held; //used to count the number of cards held.
    int target; //the score to beat.
    bool remain; //checks if variable "choice" is valid.
    char ask; //used to ask to draw another card.
    bool exit;

    //initialize variables to something that won't work yet.
    card = 0; //Initialize the card counter.
    pcard1 = 999; //useless value for card1.
    pcard2 = 999; //useless value for card 2.
    pcard3 = 999; //useless value for card 3.
    pcard4 = 999; //useless value for card 4.
    pcard5 = 999; //useless value for card 5.
    choice = 0; //initialized to zero, used for selecting the value of an ace.
    tally = 0; //score starts at zero.
    held = 0; //cards held starts at zero.
    draw = true; //used to see if it's possible to draw again.
    remain = true; //used to prevent illegal values for Aces.
    exit = true; //used for a loop further down.
    target = dealer(); //find the score to beat!

    //Begin by assigning a value to all 52 cards.
    //this loop individually checks each card to ensure it does not have a value
    //before being assigned one. It will assign a value if necessary.
    do {
        remain = true; //Resets the selection loop for Aces.
        //card = rand() % 52; //[0-51]
card = rand() % 1+49; //[0-51]


        //2 of spades
        if (card == 0) {
            if (pcard1 == 999) {
                pcard1 = 2; //value of card
                held++; //note an extra card held
                tally += pcard1; //add value of card to value of hand
                cout << "You have drawn a 2 of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 2; //value of card
                held++; //note extra card held
                tally += pcard2; //add value of card to the value of hand
                cout << "You have drawn a 2 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false; //ensures user falls into the do-loop
                    //loop ensures valid input is entered
                    do {
                        cin>>ask;
                        //draw another card
                        if (ask == 'y') {
                            draw = true;
                            exit = true; //used to exit the loop
                        } else if (ask == 'n') {//do not draw another card
                            draw = false;
                            exit = true; //exit the loop
                        } else {
                            exit = false; //stay in the loop
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 2; //value of card
                held++; //note an extra card being held
                tally += pcard3; //add value of card to hand
                cout << "You have drawn a 2 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card if user has less than five
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false; //forces loop to run
                    do {
                        cin>>ask;
                        if (ask == 'y') {//draw another card
                            draw = true;
                            exit = true; //exit the loop
                        } else if (ask == 'n') {//do not draw a card
                            draw = false;
                            exit = true; //exit the loop
                        } else {
                            exit = false; //stay in the loop
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 2; //value of card
                held++; //add to hand
                tally += pcard4; //add value of card to hand
                cout << "You have drawn a 2 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false; //keeps you in the loop
                    do {
                        cin>>ask;
                        if (ask == 'y') {//draw a card
                            draw = true;
                            exit = true; //exit the loop
                        } else if (ask == 'n') {//do not draw a card
                            draw = false;
                            exit = true; //exit the loop
                        } else {//in case of invalid input
                            exit = false; //stay in the loop
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 2;
                held++; //note extra card held
                tally += pcard5;
                cout << "You have drawn a 2 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }// 3 of spades
        else if (card == 1) {
            if (pcard1 == 999) {
                pcard1 = 3;
                held++; //note extra card held

                tally += pcard1;
                cout << "You have drawn a 3 of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 3;
                held++; //note extra card held
                tally += pcard2;
                cout << "You have drawn a 3 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 3;
                held++; //note extra card held
                tally += pcard3;
                cout << "You have drawn a 3 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 3;
                held++; //note extra card held
                tally += pcard4;
                cout << "You have drawn a 3 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 3;
                held++; //note extra card held
                tally += pcard5;
                cout << "You have drawn a 3 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//4 of spades
        else if (card == 2) {
            if (pcard1 == 999) {
                pcard1 = 4;
                held++; //note extra card held
                tally += pcard1;
                cout << "You have drawn a 4 of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 4;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 4 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 4;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 4 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 4;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 4 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 4;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 4 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//5 of spades
        else if (card == 3) {
            if (pcard1 == 999) {
                pcard1 = 5;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 5 of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 5;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 5 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 5;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 5 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 5;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 5 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 5;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 5 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//6 of spades
        else if (card == 4) {
            if (pcard1 == 999) {
                pcard1 = 6;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 6 of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 6;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 6 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 6;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 6 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 6;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 6 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 6;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 6 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//7 of spades
        else if (card == 5) {
            if (pcard1 == 999) {
                pcard1 = 7;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 7 of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 7;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 7 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 7;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 7 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 7;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 7 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 7;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 7 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//8 of spades
        else if (card == 6) {
            if (pcard1 == 999) {
                pcard1 = 8;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 8 of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 8;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 8 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 8;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 8 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 8;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 8 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 8;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 8 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//9 of spades
        else if (card == 7) {
            if (pcard1 == 999) {
                pcard1 = 9;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 9 of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 9;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 9 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 9;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 9 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 9;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 9 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 9;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 9 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//10 of spades
        else if (card == 8) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 10 of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 10 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 10 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 10 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 10 of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//jack of spades
        else if (card == 9) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a Jack of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a Jack of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a Jack of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a Jack of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a Jack of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//queen of spades
        else if (card == 10) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a Queen of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a Queen of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a Queen of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a Queen of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a Queen of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//king of spades
        else if (card == 11) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a King of spades.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a King of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a King of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a King of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a King of spades.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//two of hearts
        else if (card == 12) {
            if (pcard1 == 999) {
                pcard1 = 2;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 2 of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 2;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 2 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 2;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 2 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 2;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 2 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 2;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 2 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//three of hearts
        else if (card == 13) {
            if (pcard1 == 999) {
                pcard1 = 3;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 3 of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 3;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 3 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 3;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 3 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 3;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 3 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 3;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 3 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//four of hearts
        else if (card == 14) {
            if (pcard1 == 999) {
                pcard1 = 4;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 4 of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 4;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 4 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 4;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 4 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 4;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 4 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 4;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 4 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//five of hearts
        else if (card == 15) {
            if (pcard1 == 999) {
                pcard1 = 5;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 5 of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 5;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 5 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 5;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 5 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 5;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 5 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 5;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 5 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//six of hearts
        else if (card == 16) {
            if (pcard1 == 999) {
                pcard1 = 6;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 6 of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 6;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 6 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 6;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 6 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 6;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 6 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 6;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 6 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//seven of hearts
        else if (card == 17) {
            if (pcard1 == 999) {
                pcard1 = 7;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 7 of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 7;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 7 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 7;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 7 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 7;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 7 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 7;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 7 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//eight of hearts
        else if (card == 18) {
            if (pcard1 == 999) {
                pcard1 = 8;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 8 of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 8;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 8 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 8;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 8 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 8;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 8 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 8;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 8 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//nine of heatys
        else if (card == 19) {
            if (pcard1 == 999) {
                pcard1 = 9;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 9 of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 9;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 9 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 9;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 9 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 9;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 9 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 9;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 9 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//ten of hearts
        else if (card == 20) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 10 of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 10 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 10 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 10 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 10 of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//jack of hearts
        else if (card == 21) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a Jack of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a Jack of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a Jack of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a Jack of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a Jack of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//queen of hearts
        else if (card == 22) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a Queen of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a Queen of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a Queen of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a Queen of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a Queen of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//kinf og heats
        else if (card == 23) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a King of Hearts.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a King of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a King of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a King of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a King of Hearts.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//two fo Clover
        else if (card == 24) {
            if (pcard1 == 999) {
                pcard1 = 2;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 2 of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 2;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 2 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 2;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 2 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 2;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 2 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 2;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 2 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//three of clover
        else if (card == 25) {
            if (pcard1 == 999) {
                pcard1 = 3;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 3 of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 3;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 3 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 3;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 3 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 3;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 3 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 3;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 3 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//four of clover
        else if (card == 26) {
            if (pcard1 == 999) {
                pcard1 = 4;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 4 of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 4;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 4 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 4;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 4 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 4;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 4 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 4;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 4 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//five of clover
        else if (card == 27) {
            if (pcard1 == 999) {
                pcard1 = 5;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 5 of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 5;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 5 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 5;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 5 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 5;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 5 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 5;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 5 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//six of clover  
        else if (card == 28) {
            if (pcard1 == 999) {
                pcard1 = 6;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 6 of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 6;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 6 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 6;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 6 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 6;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 6 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 6;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 6 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//seven of clover
        else if (card == 29) {
            if (pcard1 == 999) {
                pcard1 = 7;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 7 of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 7;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 7 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 7;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 7 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 7;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 7 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 7;
                held++; //add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 7 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//eight of clover
        else if (card == 30) {
            if (pcard1 == 999) {
                pcard1 = 8;
                held++; //add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 8 of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 8;
                held++; //add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 8 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 8;
                held++; //add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 8 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 8;
                held++; //add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 8 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 8;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 8 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//nine of clover
        else if (card == 31) {
            if (pcard1 == 999) {
                pcard1 = 9;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 9 of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 9;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 9 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 9;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 9 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 9;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 9 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 9;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 9 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//ten of vlocer
        else if (card == 32) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 10 of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 10 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 10 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 10 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 10 of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//jack of clover
        else if (card == 33) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a Jack of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a Jack of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a Jack of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a Jack of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a Jack of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//queen of clover
        else if (card == 34) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a Queen of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a Queen of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a Queen of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a Queen of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a Queen of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//king of clover
        else if (card == 35) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a King of Clover.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a King of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a King of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a King of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a King of Clover.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//two of diamons
        else if (card == 36) {
            if (pcard1 == 999) {
                pcard1 = 2;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 2 of diamond.\n";
            } else if (pcard2 == 999) {
                pcard2 = 2;
                held++;
                tally += pcard2;
                cout << "You have drawn a 2 of diamond.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 2;
                held++;
                tally += pcard3;
                cout << "You have drawn a 2 of diamond.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 2;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 2 of diamond.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 2;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 2 of diamond.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//three of diamons
        else if (card == 37) {
            if (pcard1 == 999) {
                pcard1 = 3;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 3 of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 3;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 3 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 3;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 3 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 3;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 3 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 3;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 3 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//four of diamons
        else if (card == 38) {
            if (pcard1 == 999) {
                pcard1 = 4;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 4 of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 4;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 4 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 4;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 4 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 4;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 4 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 4;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 4 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//five of diamons
        else if (card == 39) {
            if (pcard1 == 999) {
                pcard1 = 5;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 5 of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 5;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 5 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 5;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 5 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 5;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 5 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 5;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 5 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//six of diamons
        else if (card == 40) {
            if (pcard1 == 999) {
                pcard1 = 6;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 6 of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 6;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 6 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 6;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 6 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 6;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 6 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 6;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 6 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//seven of diamonds
        else if (card == 41) {
            if (pcard1 == 999) {
                pcard1 = 7;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 7 of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 7;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 7 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 7;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 7 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 7;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 7 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 7;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 7 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//eight of diamonds
        else if (card == 42) {
            if (pcard1 == 999) {
                pcard1 = 8;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 8 of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 8;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 8 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 8;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 8 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 8;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 8 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 8;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 8 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//nine of diamonds
        else if (card == 43) {
            if (pcard1 == 999) {
                pcard1 = 9;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 9 of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 9;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 9 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 9;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 9 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 9;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 9 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 9;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 9 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//ten of diamonds
        else if (card == 44) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a 10 of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a 10 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a 10 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a 10 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a 10 of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//jack of diamonds
        else if (card == 45) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a Jack of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a Jack of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a Jack of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a Jack of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a Jack of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//queen of diamonds
        else if (card == 46) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a Queen of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a Queen of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a Queen of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a Queen of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a Queen of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//king of diamonds
        else if (card == 47) {
            if (pcard1 == 999) {
                pcard1 = 10;
                held++; //Add to number of cards held.
                tally += pcard1;
                cout << "You have drawn a King of Diamonds.\n";
            } else if (pcard2 == 999) {
                pcard2 = 10;
                held++; //Add to number of cards held.
                tally += pcard2;
                cout << "You have drawn a King of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard3 == 999) {
                pcard3 = 10;
                held++; //Add to number of cards held.
                tally += pcard3;
                cout << "You have drawn a King of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard4 == 999) {
                pcard4 = 10;
                held++; //Add to number of cards held.
                tally += pcard4;
                cout << "You have drawn a King of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else if (pcard5 == 999) {
                pcard5 = 10;
                held++; //Add to number of cards held.
                tally += pcard5;
                cout << "You have drawn a King of Diamonds.\n";
                cout << "You currently score at: " << tally << " with "
                        << held << " cards.\n";
                //ask to draw another card.
                if (held < 5) {
                    cout << "Would you like to draw another card?" << endl;
                    cout << "type y for yes, n for no. ";
                    exit = false;
                    do {
                        cin>>ask;
                        if (ask == 'y') {
                            draw = true;
                            exit = true;
                        } else if (ask == 'n') {
                            draw = false;
                            exit = true;
                        } else {
                            exit = false;
                        }

                    } while (exit == false);
                }
            } else draw = false;
        }//Ace of spades
        else if (card == 48) {
            cout << "You have drawn an Ace of Spades.\n";
            cout << "You currently score at: " << tally << " with "
                    << held << " cards.\n";
            //prompt user to play ace as "1" or "11".
            cout << "Would you to play this card to be a ""1"" or an ""11""?";
            do {
                //take the choice.
                cin>>choice;
                //assign value.

                //Played as "1".
                if (choice == 1) {
                    if (pcard1 == 999) {
                        held++; //Add to number of cards held.
                        pcard1 = 1;
                        tally += pcard1;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard2;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard3;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard4;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard5;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else remain = false;
                }//played as "11".
                else if (choice == 11) {
                    if (pcard1 == 999) {
                        pcard1 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard1;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard2;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard3;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard4;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard5;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else remain = false;
                }//prompt again if input is invalid.
                else if (choice != 1 || choice != 11) {
                    cout << "Invalid input." << endl <<
                            "Would you like to play this card as a"
                            " ""1"" or ""11?""";
                    cin>>choice;
                } else remain = false;
            } while (remain == true);

        }//Ace of hearts
        else if (card == 49) {
            cout << "You have drawn an Ace of Hearts.\n";
            cout << "You currently score at: " << tally << " with "
                    << held << " cards.\n";
            //prompt user to play ace as "1" or "11".
            cout << "Would you to play this card to be a ""1"" or an ""11""?";
            do {
                //take the choice.
                cin>>choice;
                //assign value.

                //Played as "1".
                if (choice == 1) {
                    if (pcard1 == 999) {
                        held++; //Add to number of cards held.
                        pcard1 = 1;
                        tally += pcard1;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard2;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard3;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard4;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard5;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else remain = false;
                }//played as "11".
                else if (choice == 11) {
                    if (pcard1 == 999) {
                        pcard1 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard1;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard2;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard3;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard4;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard5;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else remain = false;
                }//prompt again if input is invalid.
                else if (choice != 1 || choice != 11) {
                    cout << "Invalid input." << endl <<
                            "Would you like to play this card as a"
                            " ""1"" or ""11?""";
                    remain=false;
                    cin>>choice;
                    
                } else remain = false;
            } while (remain == true);

        }//Ace of Clover
        else if (card == 50) {
            cout << "You have drawn an Ace of Clover.\n";
            cout << "You currently score at: " << tally << " with "
                    << held << " cards.\n";
            //prompt user to play ace as "1" or "11".
            cout << "Would you to play this card to be a ""1"" or an ""11""?";
            do {
                //take the choice.
                cin>>choice;
                //assign value.

                //Played as "1".
                if (choice == 1) {
                    if (pcard1 == 999) {
                        held++; //Add to number of cards held.
                        pcard1 = 1;
                        tally += pcard1;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard2;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard3;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard4;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard5;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else remain = false;
                }//played as "11".
                else if (choice == 11) {
                    if (pcard1 == 999) {
                        pcard1 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard1;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard2;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard3;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard4;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard5;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else remain = false;
                }//prompt again if input is invalid.
                else if (choice != 1 || choice != 11) {
                    cout << "Invalid input." << endl <<
                            "Would you like to play this card as a"
                            " ""1"" or ""11?""";
                    cin>>choice;
                } else remain = false;
            } while (remain == true);

        }//Ace of Diamond
        else if (card == 51) {
            cout << "You have drawn an Ace of Spades.\n";
            cout << "You currently score at: " << tally << " with "
                    << held << " cards.\n";
            //prompt user to play ace as "1" or "11".
            cout << "Would you to play this card to be a ""1"" or an ""11""?";
            do {
                //take the choice.
                cin>>choice;
                //assign value.

                //Played as "1".
                if (choice == 1) {
                    if (pcard1 == 999) {
                        held++; //Add to number of cards held.
                        pcard1 = 1;
                        tally += pcard1;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard2;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard3;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard4;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 1;
                        held++; //Add to number of cards held.
                        tally += pcard5;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else remain = false;
                }//played as "11".
                else if (choice == 11) {
                    if (pcard1 == 999) {
                        pcard1 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard1;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard2;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard3;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard4;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 11;
                        held++; //Add to number of cards held.
                        tally += pcard5;
                        //ask to draw another card.
                        if (held < 5) {
                            cout << "Would you like to draw another card?" << endl;
                            cout << "type y for yes, n for no. ";
                            exit = false;
                            do {
                                cin>>ask;
                                if (ask == 'y') {
                                    draw = true;
                                    exit = true;
                                } else if (ask == 'n') {
                                    draw = false;
                                    exit = true;
                                } else {
                                    exit = false;
                                }

                            } while (exit == false);
                        }

                        remain = false;
                    } else remain = false;
                }//prompt again if input is invalid.
                else if (choice != 1 || choice != 11) {
                    cout << "Invalid input." << endl <<
                            "Would you like to play this card as a"
                            " ""1"" or ""11?""";
                    cin>>choice;
                } else remain = false;
            } while (remain == true);

        }
        //This checks for a Blackjack win.




    } while (draw == true);
    //This is the results screen!
    cout << "You have ";
    if (pcard1 != 999)cout << pcard1 << ", ";
    if (pcard2 != 999)cout << pcard2 << ", ";
    if (pcard3 != 999)cout << pcard3 << ", ";
    if (pcard4 != 999)cout << pcard4 << ", ";
    if (pcard5 != 999)cout << pcard5 << ", ";
    cout << "in your hand, which totals to " << tally << endl;
    if (tally == 21 && draw == 2) {
        cout << "Blackjack! Great Win!" << endl;
        draw = false;
    }//Checks to see if you have attained a score of 21.
    else if (tally == 21) {
        cout << "You have scored 21! You Win!" << endl;
        draw = false;
    }//Checks to see if you are bust.
    else if (tally > 21) {
        cout << "You are Bust! Game Over!" << endl;
        draw = false;
    }//Checks if you won by drawing five cards.
    else if (tally > 21 && draw == 5) {
        cout << "You drew five cards without going bust!You win." << endl;
        draw = false;
    }
    if (tally > target && target != 0 && tally <= 21) {
        cout << "You have beat the dealer, who only scored " << target
                << "!" << endl;
    } else if (tally <= 21 && target == 0) {
        cout << "The dealer has gone bust, you won!" << endl;
    } else if (tally <= target) {
        cout << "The dealer scored " << target << " and beat you!" << endl;
    }

    return 0;
}

dealer() {
    int toBeat; //this will be the score to beat
    //this defines the score to beat. It is a simple value determined without
    //actually playing the game.
    //this assumes the dealer is stupid enough to play two aces as two ones.
    //it also assumes the dealer will occasionally get three tens.
    toBeat = rand() % 31 + 2; //[4-30]
    if (toBeat > 21) toBeat = 0; //this is used to know the dealer is bust.
    return toBeat;
}
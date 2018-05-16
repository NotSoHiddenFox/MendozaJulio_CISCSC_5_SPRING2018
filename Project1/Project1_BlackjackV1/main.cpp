/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on Aril 7, 2018, 12:41 AM
 *Purpose: Allows you to pull a random card from a deck
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
    bool remain; //checks if variable "choice" is valid.

    //initialize variables to something that won't work yet.
    card = 0;
    pcard1 = 999;
    pcard2 = 999;
    pcard3 = 999;
    pcard4 = 999;
    pcard5 = 999;
    choice = 0;
    draw = true; //used to see if it's possible to draw again.
    remain = true; //used to prevent illegal values for Aces.

    //Begin by assigning a value to all 52 cards.
    //this loop individually checks each card to ensure it does not have a value
    //before being assigned one. It will assign a value if necessary.
    do {
        remain = true; //Resets the selection loop for Aces.
        card = rand() % 2 + 47; //[0-51]***CURRENTLY BEING USED FOR TESTING***
        //2 of spades
        if (card == 0) {
            if (pcard1 == 999) pcard1 = 2;
            else if (pcard2 == 999)pcard2 = 2;
            else if (pcard3 == 999)pcard3 = 2;
            else if (pcard4 == 999)pcard4 = 2;
            else if (pcard5 == 999)pcard5 = 2;
            else draw = false;
        }// 3 of spades
        else if (card == 1) {
            if (pcard1 == 999) pcard1 = 3;
            else if (pcard2 == 999)pcard2 = 3;
            else if (pcard3 == 999)pcard3 = 3;
            else if (pcard4 == 999)pcard4 = 3;
            else if (pcard5 == 999)pcard5 = 3;
            else draw = false;
        }//4 of spades
        else if (card == 2) {
            if (pcard1 == 999) pcard1 = 4;
            else if (pcard2 == 999)pcard2 = 4;
            else if (pcard3 == 999)pcard3 = 4;
            else if (pcard4 == 999)pcard4 = 4;
            else if (pcard5 == 999)pcard5 = 4;
            else draw = false;
        }//5 of spades
        else if (card == 3) {
            if (pcard1 == 999) pcard1 = 5;
            else if (pcard2 == 999)pcard2 = 5;
            else if (pcard3 == 999)pcard3 = 5;
            else if (pcard4 == 999)pcard4 = 5;
            else if (pcard5 == 999)pcard5 = 5;
            else draw = false;
        }//6 of spades
        else if (card == 4) {
            if (pcard1 == 999) pcard1 = 6;
            else if (pcard2 == 999)pcard2 = 6;
            else if (pcard3 == 999)pcard3 = 6;
            else if (pcard4 == 999)pcard4 = 6;
            else if (pcard5 == 999)pcard5 = 6;
            else draw = false;
        }//7 of spades
        else if (card == 5) {
            if (pcard1 == 999) pcard1 = 7;
            else if (pcard2 == 999)pcard2 = 7;
            else if (pcard3 == 999)pcard3 = 7;
            else if (pcard4 == 999)pcard4 = 7;
            else if (pcard5 == 999)pcard5 = 7;
            else draw = false;
        }//8 of spades
        else if (card == 6) {
            if (pcard1 == 999) pcard1 = 8;
            else if (pcard2 == 999)pcard2 = 8;
            else if (pcard3 == 999)pcard3 = 8;
            else if (pcard4 == 999)pcard4 = 8;
            else if (pcard5 == 999)pcard5 = 8;
            else draw = false;
        }//9 of spades
        else if (card == 7) {
            if (pcard1 == 999) pcard1 = 9;
            else if (pcard2 == 999)pcard2 = 9;
            else if (pcard3 == 999)pcard3 = 9;
            else if (pcard4 == 999)pcard4 = 9;
            else if (pcard5 == 999)pcard5 = 9;
            else draw = false;
        }//10 of spades
        else if (card == 8) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//jack of spades
        else if (card == 9) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//queen of spades
        else if (card == 10) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//king of spades
        else if (card == 11) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//two of hearts
        else if (card == 12) {
            if (pcard1 == 999) pcard1 = 2;
            else if (pcard2 == 999)pcard2 = 2;
            else if (pcard3 == 999)pcard3 = 2;
            else if (pcard4 == 999)pcard4 = 2;
            else if (pcard5 == 999)pcard5 = 2;
            else draw = false;
        }//three of hearts
        else if (card == 13) {
            if (pcard1 == 999) pcard1 = 3;
            else if (pcard2 == 999)pcard2 = 3;
            else if (pcard3 == 999)pcard3 = 3;
            else if (pcard4 == 999)pcard4 = 3;
            else if (pcard5 == 999)pcard5 = 3;
            else draw = false;
        }//four of hearts
        else if (card == 14) {
            if (pcard1 == 999) pcard1 = 4;
            else if (pcard2 == 999)pcard2 = 4;
            else if (pcard3 == 999)pcard3 = 4;
            else if (pcard4 == 999)pcard4 = 4;
            else if (pcard5 == 999)pcard5 = 4;
            else draw = false;
        }//five of hearts
        else if (card == 15) {
            if (pcard1 == 999) pcard1 = 5;
            else if (pcard2 == 999)pcard2 = 5;
            else if (pcard3 == 999)pcard3 = 5;
            else if (pcard4 == 999)pcard4 = 5;
            else if (pcard5 == 999)pcard5 = 5;
            else draw = false;
        }//six of hearts
        else if (card == 16) {
            if (pcard1 == 999) pcard1 = 6;
            else if (pcard2 == 999)pcard2 = 6;
            else if (pcard3 == 999)pcard3 = 6;
            else if (pcard4 == 999)pcard4 = 6;
            else if (pcard5 == 999)pcard5 = 6;
            else draw = false;
        }//seven of hearts
        else if (card == 17) {
            if (pcard1 == 999) pcard1 = 7;
            else if (pcard2 == 999)pcard2 = 7;
            else if (pcard3 == 999)pcard3 = 7;
            else if (pcard4 == 999)pcard4 = 7;
            else if (pcard5 == 999)pcard5 = 7;
            else draw = false;
        }//eight of hearts
        else if (card == 18) {
            if (pcard1 == 999) pcard1 = 8;
            else if (pcard2 == 999)pcard2 = 8;
            else if (pcard3 == 999)pcard3 = 8;
            else if (pcard4 == 999)pcard4 = 8;
            else if (pcard5 == 999)pcard5 = 8;
            else draw = false;
        }//nine of heatys
        else if (card == 19) {
            if (pcard1 == 999) pcard1 = 9;
            else if (pcard2 == 999)pcard2 = 9;
            else if (pcard3 == 999)pcard3 = 9;
            else if (pcard4 == 999)pcard4 = 9;
            else if (pcard5 == 999)pcard5 = 9;
            else draw = false;
        }//ten of hearts
        else if (card == 20) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//jack of hearts
        else if (card == 21) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//queen of hearts
        else if (card == 22) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//kinf og heats
        else if (card == 23) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//two fo clover
        else if (card == 24) {
            if (pcard1 == 999) pcard1 = 2;
            else if (pcard2 == 999)pcard2 = 2;
            else if (pcard3 == 999)pcard3 = 2;
            else if (pcard4 == 999)pcard4 = 2;
            else if (pcard5 == 999)pcard5 = 2;
            else draw = false;
        }//three of clover
        else if (card == 25) {
            if (pcard1 == 999) pcard1 = 3;
            else if (pcard2 == 999)pcard2 = 3;
            else if (pcard3 == 999)pcard3 = 3;
            else if (pcard4 == 999)pcard4 = 3;
            else if (pcard5 == 999)pcard5 = 3;
            else draw = false;
        }//four of clover
        else if (card == 26) {
            if (pcard1 == 999) pcard1 = 4;
            else if (pcard2 == 999)pcard2 = 4;
            else if (pcard3 == 999)pcard3 = 4;
            else if (pcard4 == 999)pcard4 = 4;
            else if (pcard5 == 999)pcard5 = 4;
            else draw = false;
        }//five of clover
        else if (card == 27) {
            if (pcard1 == 999) pcard1 = 5;
            else if (pcard2 == 999)pcard2 = 5;
            else if (pcard3 == 999)pcard3 = 5;
            else if (pcard4 == 999)pcard4 = 5;
            else if (pcard5 == 999)pcard5 = 5;
            else draw = false;
        }//six of clover  
        else if (card == 28) {
            if (pcard1 == 999) pcard1 = 6;
            else if (pcard2 == 999)pcard2 = 6;
            else if (pcard3 == 999)pcard3 = 6;
            else if (pcard4 == 999)pcard4 = 6;
            else if (pcard5 == 999)pcard5 = 6;
            else draw = false;
        }//seven of clover
        else if (card == 29) {
            if (pcard1 == 999) pcard1 = 7;
            else if (pcard2 == 999)pcard2 = 7;
            else if (pcard3 == 999)pcard3 = 7;
            else if (pcard4 == 999)pcard4 = 7;
            else if (pcard5 == 999)pcard5 = 7;
            else draw = false;
        }//eight of clover
        else if (card == 30) {
            if (pcard1 == 999) pcard1 = 8;
            else if (pcard2 == 999)pcard2 = 8;
            else if (pcard3 == 999)pcard3 = 8;
            else if (pcard4 == 999)pcard4 = 8;
            else if (pcard5 == 999)pcard5 = 8;
            else draw = false;
        }//nine of clover
        else if (card == 31) {
            if (pcard1 == 999) pcard1 = 9;
            else if (pcard2 == 999)pcard2 = 9;
            else if (pcard3 == 999)pcard3 = 9;
            else if (pcard4 == 999)pcard4 = 9;
            else if (pcard5 == 999)pcard5 = 9;
            else draw = false;
        }//ten of vlocer
        else if (card == 32) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//jack of clover
        else if (card == 33) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//queen of clover
        else if (card == 34) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//king of clover
        else if (card == 35) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//two of diamons
        else if (card == 36) {
            if (pcard1 == 999) pcard1 = 2;
            else if (pcard2 == 999)pcard2 = 2;
            else if (pcard3 == 999)pcard3 = 2;
            else if (pcard4 == 999)pcard4 = 2;
            else if (pcard5 == 999)pcard5 = 2;
            else draw = false;
        }//three of diamons
        else if (card == 37) {
            if (pcard1 == 999) pcard1 = 3;
            else if (pcard2 == 999)pcard2 = 3;
            else if (pcard3 == 999)pcard3 = 3;
            else if (pcard4 == 999)pcard4 = 3;
            else if (pcard5 == 999)pcard5 = 3;
            else draw = false;
        }//four of diamons
        else if (card == 38) {
            if (pcard1 == 999) pcard1 = 4;
            else if (pcard2 == 999)pcard2 = 4;
            else if (pcard3 == 999)pcard3 = 4;
            else if (pcard4 == 999)pcard4 = 4;
            else if (pcard5 == 999)pcard5 = 4;
            else draw = false;
        }//five of diamons
        else if (card == 39) {
            if (pcard1 == 999) pcard1 = 5;
            else if (pcard2 == 999)pcard2 = 5;
            else if (pcard3 == 999)pcard3 = 5;
            else if (pcard4 == 999)pcard4 = 5;
            else if (pcard5 == 999)pcard5 = 5;
            else draw = false;
        }//six of diamons
        else if (card == 40) {
            if (pcard1 == 999) pcard1 = 6;
            else if (pcard2 == 999)pcard2 = 6;
            else if (pcard3 == 999)pcard3 = 6;
            else if (pcard4 == 999)pcard4 = 6;
            else if (pcard5 == 999)pcard5 = 6;
            else draw = false;
        }//seven of diamonds
        else if (card == 41) {
            if (pcard1 == 999) pcard1 = 7;
            else if (pcard2 == 999)pcard2 = 7;
            else if (pcard3 == 999)pcard3 = 7;
            else if (pcard4 == 999)pcard4 = 7;
            else if (pcard5 == 999)pcard5 = 7;
            else draw = false;
        }//eight of diamonds
        else if (card == 42) {
            if (pcard1 == 999) pcard1 = 8;
            else if (pcard2 == 999)pcard2 = 8;
            else if (pcard3 == 999)pcard3 = 8;
            else if (pcard4 == 999)pcard4 = 8;
            else if (pcard5 == 999)pcard5 = 8;
            else draw = false;
        }//nine of diamonds
        else if (card == 43) {
            if (pcard1 == 999) pcard1 = 9;
            else if (pcard2 == 999)pcard2 = 9;
            else if (pcard3 == 999)pcard3 = 9;
            else if (pcard4 == 999)pcard4 = 9;
            else if (pcard5 == 999)pcard5 = 9;
            else draw = false;
        }//ten of diamonds
        else if (card == 44) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//jack of diamonds
        else if (card == 45) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//queen of diamonds
        else if (card == 46) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//king of diamonds
        else if (card == 47) {
            if (pcard1 == 999) pcard1 = 10;
            else if (pcard2 == 999)pcard2 = 10;
            else if (pcard3 == 999)pcard3 = 10;
            else if (pcard4 == 999)pcard4 = 10;
            else if (pcard5 == 999)pcard5 = 10;
            else draw = false;
        }//Ace of spades
        else if (card == 48) {
            //prompt user to play ace as "1" or "11".
            cout << "Would you to play this card to be a ""1"" or an ""11""?";
            do {
                //take the choice.
                cin>>choice;
                //assign value.

                //Played as "1".
                if (choice == 1) {
                    if (pcard1 == 999) {
                        pcard1 = 1;
                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 1;
                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 1;
                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 1;
                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 1;
                        remain = false;
                    } else remain = false;
                }//played as "11".
                else if (choice == 11) {
                    if (pcard1 == 999) {
                        pcard1 = 11;
                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 11;
                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 11;
                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 11;
                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 11;
                        remain = false;
                    } else remain = false;
                }//prompt again if input is invalid.
                else if (choice != 1 || choice != 11) {
                    cout << "Invalid input." << endl <<
                            "Would you like to play this card as a"
                            " ""1"" or ""11?""";
                } else remain = false;
            } while (remain == true);
        }//Ace of hearts
        else if (card == 49) {
            //prompt user to play ace as "1" or "11".
            cout << "Would you to play this card to be a ""1"" or an ""11""?";
            do {
                //take the choice.
                cin>>choice;
                //assign value.

                //Played as "1".
                if (choice == 1) {
                    if (pcard1 == 999) {
                        pcard1 = 1;
                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 1;
                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 1;
                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 1;
                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 1;
                        remain = false;
                    } else remain = false;
                }//played as "11".
                else if (choice == 11) {
                    if (pcard1 == 999) {
                        pcard1 = 11;
                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 11;
                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 11;
                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 11;
                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 11;
                        remain = false;
                    } else remain = false;
                }//prompt again if input is invalid.
                else if (choice != 1 || choice != 11) {
                    cout << "Invalid input." << endl <<
                            "Would you like to play this card as a"
                            " ""1"" or ""11?""";
                } else remain = false;
            } while (remain == true);
        }//Ace of Clover
        else if (card == 50) {
            //prompt user to play ace as "1" or "11".
            cout << "Would you to play this card to be a ""1"" or an ""11""?";
            do {
                //take the choice.
                cin>>choice;
                //assign value.

                //Played as "1".
                if (choice == 1) {
                    if (pcard1 == 999) {
                        pcard1 = 1;
                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 1;
                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 1;
                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 1;
                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 1;
                        remain = false;
                    } else remain = false;
                }//played as "11".
                else if (choice == 11) {
                    if (pcard1 == 999) {
                        pcard1 = 11;
                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 11;
                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 11;
                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 11;
                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 11;
                        remain = false;
                    } else remain = false;
                }//prompt again if input is invalid.
                else if (choice != 1 || choice != 11) {
                    cout << "Invalid input." << endl <<
                            "Would you like to play this card as a"
                            " ""1"" or ""11?""";
                } else remain = false;
            } while (remain == true);
        }//Ace of Diamond
        else if (card == 51) {
            //prompt user to play ace as "1" or "11".
            cout << "Would you to play this card to be a ""1"" or an ""11""?";
            do {
                //take the choice.
                cin>>choice;
                //assign value.

                //Played as "1".
                if (choice == 1) {
                    if (pcard1 == 999) {
                        pcard1 = 1;
                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 1;
                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 1;
                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 1;
                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 1;
                        remain = false;
                    } else remain = false;
                }//played as "11".
                else if (choice == 11) {
                    if (pcard1 == 999) {
                        pcard1 = 11;
                        remain = false;
                    } else if (pcard2 == 999) {
                        pcard2 = 11;
                        remain = false;
                    } else if (pcard3 == 999) {
                        pcard3 = 11;
                        remain = false;
                    } else if (pcard4 == 999) {
                        pcard4 = 11;
                        remain = false;
                    } else if (pcard5 == 999) {
                        pcard5 = 11;
                        remain = false;
                    } else remain = false;
                }//prompt again if input is invalid.
                else if (choice != 1 || choice != 11) {
                    cout << "Invalid input." << endl <<
                            "Would you like to play this card as a"
                            " ""1"" or ""11?""";
                } else remain = false;
            } while (remain == true);
        }


    } while (draw == true);
    //***USED FOR VERIFICATION***
    cout << pcard1 << endl << pcard2 <<
            endl << pcard3 << endl << pcard4 << endl << pcard5;

    return 0;
}


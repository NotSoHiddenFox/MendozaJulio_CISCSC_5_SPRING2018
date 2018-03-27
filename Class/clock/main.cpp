/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 27, 201, 11:50AM?
 * Purpose:  Clock loop
 */

//System Libraries Here
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    char a = 'P'; //Used for AM and PM.
    int round = 0; //Number of days passed.
    int limit = 4; //Number of days before the program closes.   
    ofstream out;


    // out.open("Clock.out"); //Just dumps everything into a file.


    //Input or initialize values Here

    //Process/Calculations Here

    //"p" in the variables refers to position.
    //ex. p1 = position 1, p4 = position 4.

    for (char p1 = '0'; p1 <= '1'; p1++) {

        for (char p2 = '0'; p2 <= '9'; p2++) {

            for (char p3 = '0'; p3 <= '5'; p3++) {

                for (char p4 = '0'; p4 <= '9'; p4++) {

                    for (char p5 = '0'; p5 <= '5'; p5++) {

                        for (char p6 = '0'; p6 <= '9'; p6++) {

                            if (p1 == '1' && p2 == '2') {
                                p1 = '0';
                                p2 = '0';
                                round++;

                                if (a == 'A') {
                                    a += 15;
                                    if (round > limit) {
                                        return 0;
                                    }
                                } else if (a == 'P') {
                                    a -= 15;
                                    if (round > limit) {
                                        return 0;
                                    }
                                }
                            }

                            cout << p1 << p2 << ":" << p3 << p4 << ":" << p5 <<
                                    p6 << " " << a << "M" << endl;
                            out << p1 << p2 << ":" << p3 << p4 << ":" << p5 <<
                                    p6 << " " << a << "M" << endl;

                        }
                    }
                }
            }
        }
    }

    //Output Located Here

    out.close();
    //Exit
    return 0;
}


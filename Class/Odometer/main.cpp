/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 27, 2018, 10:21 AM
 * Purpose:  Nested Loop- Odometer
 */

//System Libraries Here
#include <iostream>
#include <fstream>//File library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    ofstream out; // Declaring the file

    //Input or initialize values Here
    out.open("Odometer.out"); //opening the file
    //Process/Calculations Here
    for (char tn1000s = '0'; tn1000s <= '9'; tn1000s++) {
        out << tn1000s;
        for (char n1000s = '0'; n1000s <= '9'; n1000s++) {
            out << n1000s;
            for (char n100s = '0'; n100s <= '9'; n100s++) {
                out << n100s;
                for (char n10s = '0'; n10s <= '9'; n10s++) {
                    out << n10s;
                    for (char n1s = '0'; n1s <= '9'; n1s++) {
                        out << n1s;
                        for (char tnths = '0'; tnths <= '9'; tnths++) {
                            out << '.' << tnths << endl;
                        }
                    }
                }
            }
        }
    }
    //Output Located Here


    //close file
    out.close();

    //Exit
    return 0;
}


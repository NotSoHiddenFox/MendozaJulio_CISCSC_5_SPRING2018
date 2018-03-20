/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 08, 2018, 12:30 PM
 * Purpose:  converts days time HH:MM:SS
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int HOURS = 24; //Hours in a day
const int MINUTES = 1440; //Minutes in a day
const int SECONDS = 86400; //Seconds in a day
//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    int days;



    //Input or initialize values Here

    //Process/Calculations Here
    cout << "This program converts your days into HH:MM:SS format." << endl;
    cout << "Enter the amount of days you intend to spend in vacation:";
    cin>>days;


    //Output Located Here
    cout << "\nYour vacation time in hours:" << days * HOURS <<
            "\nYour vacation time in minutes:" << days * MINUTES <<
            "\nYour vacation time in seconds:" << days * SECONDS <<
            endl;

    //Exit
    return 0;
}


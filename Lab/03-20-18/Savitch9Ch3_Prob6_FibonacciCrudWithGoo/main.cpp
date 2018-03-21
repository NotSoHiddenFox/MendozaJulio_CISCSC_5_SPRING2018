/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza 
 * Created on March 20, 2018, 12:00PM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here


//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    int fn, fnm1, fnm2, intCrud, days;
    //Input or initialize values Here
    fnm2 = 1;
    fnm1 = 1;
    intCrud = 10;
    days = 0;
    //print out the first 2 in the sequence
    cout << "Fibonacci Sequence with green crud." << endl;
    cout << "On day " << setw(3) << days << " there is " << setw(4) << fnm2 * intCrud <<
            "lbs of crud." << endl;


    //Process/Calculations Here
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    //day5
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    days += 5;

    cout << "On day " << setw(3) << days << " there is " << setw(4) << fnm2 * intCrud <<
            "lbs of crud." << endl;
    //day10
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    days += 5;
    cout << "On day " << setw(3) << days << " there is " << setw(4) << fnm2 * intCrud <<
            "lbs of crud." << endl;

    //day15
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    days += 5;
    cout << "On day " << setw(3) << days << " there is " << setw(4) << fnm2 * intCrud <<
            "lbs of crud." << endl;

    //day20
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    days += 5;
    cout << "On day " << setw(3) << days << " there is " << setw(4) << fnm2 * intCrud <<
            "lbs of crud." << endl;


    //Output Located Here


    //Exit
    return 0;
}


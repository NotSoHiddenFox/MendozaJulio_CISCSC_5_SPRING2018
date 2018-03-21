/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza 
 * Created on March 20, 2018, 11:50AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here


//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    int fn, fnm1, fnm2;
    //Input or initialize values Here
    fnm2 = 1;
    fnm1 = 1;

    //print out the first 2 in the sequence
    cout << "Fibonacci Sequence" << endl;
    cout << "{" << fnm2 << "," << fnm1;
    //Process/Calculations Here
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    cout << "," << fn;
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    cout << "," << fn;
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    cout << "," << fn;
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    cout << "," << fn;
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    cout << "," << fn;
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    cout << "," << fn;
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    cout << "," << fn;
    fn = fnm1 + fnm2;
    fnm2 = fnm1;
    fnm1 = fn;
    cout << "," << fn<<"}";


    //Output Located Here
    

    //Exit
    return 0;
}


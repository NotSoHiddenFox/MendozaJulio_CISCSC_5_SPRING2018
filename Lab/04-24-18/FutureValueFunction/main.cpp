/* 
 * File:   main.cpp
 * Author: 
 * Created on apil 24, 19:07 AM
 * Purpose:  Information on Functions
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cmath>    //Math Library
#include <iomanip>  //Formatting Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float CNVPERC = 1e2f; //100
//Function Prototypes Here
float fval1(float, float, int); //future value with power function.
float fval2(float, float, int); //future value with Log/Exponential Function.
float fval3(float, float, int); //future value with a for-loop.
float fval4(float, float, int); //future value by recursion.

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float presVal, //Present Value in Dollars.
            intRate; //Interest rate in percentage.
    int numCmp; //Number of compounding periods in years.

    //Input or initialize values Here
    presVal = 1e2f; //$100's
    intRate = 6; //6 per cent

    //by the rule of 72
    numCmp = 72 / intRate;


    //Output Located Here
    cout << fixed << setprecision(2) << showpoint;
    cout << "Present Value = $" << presVal << endl;
    cout << "Interest Rate = " << intRate << "%" << endl;
    cout << "Number of compounding periods = " << numCmp << " years." << endl;
    cout << "Savings using FV -> Power     = $"
            << fval1(presVal, intRate / CNVPERC, numCmp) << endl;
    cout << "Savings using FV -> Log/Exp   = $"
            << fval2(presVal, intRate / CNVPERC, numCmp) << endl;
    cout << "Savings using FV -> for-loop  = $"
            << fval3(presVal, intRate / CNVPERC, numCmp) << endl;
    cout << "Savings using FV -> Recursion = $"
            << fval4(presVal, intRate / CNVPERC, numCmp);


    //Exit
    return 0;
}


//                  Future Value Functions
//Inputs:
//  pv -> present value in $'s
//  ir -> Interest rate in decimal value
//  n -> number of compounding periods in years
//Outputs:
//fv -> Future value in $'s

//This is calling just one function.

float fval1(float pv, float ir, int n) {
    return pv * pow((1 + ir), n);
}

//this function goes two levels deep

float fval2(float pv, float ir, int n) {
    return pv * exp(n * log(1 + ir));
}
//this function uses a loop.
float fval3(float pv, float ir, int n) {
    return pv * exp(n * log(1 + ir));
}

//this function calls itself to solve the problem.

float fval4(float pv, float ir, int n) {
    if (n <= 0)return pv;
    return fval4(pv, ir, n - 1)*(1 + ir);
}
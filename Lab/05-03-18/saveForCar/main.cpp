/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on May 3, 2018, 10:40 AM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float carCost, downPay, tax, reg, loan, yearInt, mPay, total;
    int years;

    //Initialize Variables
    years = 3; //length of loan in years
    carCost = 1e4; //$10k 
    downPay = 1e-1; //10%
    tax = 8e-1; //8%
    reg = 2e-1; //2%
    loan = carCost; //Currently financing the entire purchase
    yearInt = 2e-1; //2% interest per year

    //find interest paid
    for (int i = 0; i < years; i++) {
        yearInt += yearInt;

    }







    return 0;
}
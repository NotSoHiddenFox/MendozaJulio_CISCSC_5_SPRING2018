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
    //Salary in Dollars per year, roi as percent,
    //savings required in Dollars, percentage deposit in percent.
    float salary, roi, savReq, perDep; //Initial Conditions
    //Interest earned at the end of the year
    //Deposit at the end of the Year.
    int nYears;
    float svBegYr, inEndYr, dpEndYr;

    //Initialize values
    salary = 1.e5; //$100k
    roi = 5e-2; //5%
    savReq = salary / roi;
    perDep = 1e-1; //10% deposit
    nYears = 50; //50 years
    svBegYr = 0; //Savings at the start in dollars
    inEndYr = 0; //No interest at the beginning.
    dpEndYr = perDep*salary; //Deposited at the end of every year


    //Process/Map inputs to outputs
    //this thing checks two conditions at once.
    int year = 2021;
    cout << fixed << setprecision(2) << showpoint;
    cout << "Year    Year   Savings     Interest     Deposit" << endl;
    for
        (int nYear = 0; nYear < nYears && savReq > svBegYr; nYear++, year++) {
        cout
                << setw(4) << nYear
                << setw(8) << year
                << setw(10) << svBegYr
                << setw(13) << inEndYr
                << setw(12) << dpEndYr << endl;
        int isvBegYr = (svBegYr + inEndYr + dpEndYr)*100; //calculates in pennies
        svBegYr = isvBegYr*roi; //shifts back to dollars
        inEndYr = svBegYr*roi;
    }

    cout << "Savings to Retire = $" << svBegYr
            << " in year " << year << endl;
    //Output data

    //Exit stage right!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 20, 2018, 10:04 AM
 * Purpose:  prime numbers
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    srand(static_cast<unsigned int> (time(0)));
    //Declare all Variables Here
    char num2Tst; //2-100
    bool prime; //Determines if num2Tst is prime
    num2Tst = rand() % 9999 + 2000; //gives 2-100
    num2Tst = 4555;


    prime = num2Tst == 2 ? true : num2Tst % 2;
    prime = num2Tst == 3 ? true && prime : num2Tst % 3;
    prime = num2Tst == 4 ? true && prime : num2Tst % 4;
    prime = num2Tst == 2 ? true && prime : num2Tst % 2;

    // prime = num2Tst % 2;
    // prime = prime && num2Tst % 3;
    // prime = prime && num2Tst % 5;
    // prime = prime && num2Tst % 7;


    //Process/Calculations Here

    //Output Located Here
    cout << static_cast<unsigned int> (num2Tst) << " is " << (prime ? "prime" : "Not Prime");

    //Exit
    return 0;
}


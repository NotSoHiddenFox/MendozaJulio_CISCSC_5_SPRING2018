/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 13, 2018, 10:00 AM
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
    short sumPos, sumNeg, sumTot, x;


    //Input or initialize values Here

    sumPos = sumNeg = sumTot = 0;


    //Process/Calculations Here
    cout << "This program sums 10 negative or positive numbers." << endl;
    cout << "Utilize numbers between -100,100" << endl;


    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;
    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;
    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;
    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;
    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;
    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;
    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;
    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;
    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;
    sumTot += x;
    cout << "Input and integer ";
    cin>>x;
    if (x > 0)sumPos = x;
    if (x < 0)sumNeg = x;
    sumTot += x;




    //Output Located Here
    cout << "The positive sum = " << sumPos << endl;
    cout << "The negative sum = " << sumNeg << endl;
    cout << "The total    sum =" << sumTot << endl;

    //Exit
    return 0;
}


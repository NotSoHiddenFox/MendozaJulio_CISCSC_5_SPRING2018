/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI = 4 * atan(1);
//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float approxPi;
    int nTerms;
    //Input or initialize values Here
    approxPi = 0;
    nTerms = 10000;
    
    //Process/Calculations Here
    for (int sign =-1, term = 1, cntr = 1; term <= nTerms; term++, cntr += 2) {
        sign *= -1;
        approxPi += (static_cast<float>(sign)/cntr);//atan(1)

    }
    approxPi *= 4;

    //Output Located Here
    cout << "After " << nTerms << " terms the Approximate value of PI = " << approxPi << endl;
    cout << "Pi = " << PI << endl;
    cout << "The difference  = " << (PI - approxPi) / PI * 100 << "%" << endl;

    //Exit
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Julio A Mendoza 
 * Created on March 13, 2018, 12:12 PM
 * Purpose:  Compares numbers
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
    float x, y;
    cout << "This program will determine which number is higher.\n"
            "Please enter two numbers. -->" ;
    //Input or initialize values Here
    cin>>x;
    if (x/1==0)
        cout<<"INVALID INPUT, THE PROGRAM WILL NOW CLOSE.";
   // return 0;
    cin>>y;
    if (y/1==0)
        cout<<"INVALID INPUT, THE PROGRAM WILL NOW CLOSE.";
   // return 0;

    //Process/Calculations Here

    //Output Located Here
    if (x > y)
        cout << x << " is larger than " << y << endl;
    else if (x < y)
        cout << x << " is smaller than " << y << endl;
    else if (x == y)
        cout << "The numbers are equal ";
    else
        cout << "There has been an error";



    

    //Exit
    return 0;
}


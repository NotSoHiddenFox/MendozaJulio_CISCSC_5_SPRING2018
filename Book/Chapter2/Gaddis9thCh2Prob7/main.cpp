/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 26, 2018, 1:38 PM
 *Purpose: this finds acres
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const int ACRE = 43450; //43,450 square feet in an acre.
//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float land = 869.0f*360.0f;
    float result=land/ACRE;
    //Initialize Variables

    //Map/Process Inputs to Outputs

    //Display the Outputs
    cout<<"A plot of land measuring 869 X 360 feet is "<<result<<" acres";
    //Exit Program!
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 26, 2018, 1:50 PM
 *Purpose: Land Calculation
 * turns square feet into square meters in half an acre.
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const int ACRE= 43450;  //Feet in an Acre.
//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float meter;    //Holds meters
    float feet; //Holds feet
    
    //Initialize Variables
    feet = ACRE/2;
    meter= feet / 10.1639;
    
    //Map/Process Inputs to Outputs

    //Display the Outputs
    cout<<"There are "<<meter<<" square meters in half an acre."<<endl;
    cout<<"Which is equivalent to "<<feet<<" square feet.";
    //Exit Program!
    return 0;
}


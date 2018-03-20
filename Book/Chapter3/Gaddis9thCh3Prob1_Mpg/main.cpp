/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 6, 2018, 2:30PM
 * Purpose: Calculates the MPG of a vehicle.
 * Takes user input to determine MPG.
 *  //Function Prototypes go here.
 */



//Executions Begin Here!
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns

//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float mpg, //miles per gallon
            cap, //user reported fuel capacity of the vehicle in gallons
            range; //user reported range of the vehicle.
    //Initialize Variables
    cout << "Please enter the amount of gallons of fuel your vehicle can hold.\n";
    cin>>cap;
    cout << "Please enter the range of your vehicle in miles.\n";
    cin>>range;
    //Map/Process Inputs to Outputs
    mpg = range / cap;
    //Display the Outputs
    cout << "Your vehicle's MPG: " << mpg;
    //Exit Program!
    return 0;
}


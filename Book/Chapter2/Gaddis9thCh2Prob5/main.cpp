/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 26, 2018, 1:22 PM
 *Purpose: Miles per gallon.
 * This programs tells the mpg of a specific car
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns

//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float cap; //The fuel capacity of the vehicle in Gallons.
    float range; //The range in miles the vehicle can travel with one tank.
    float mpg; //The miles traveled per gallon of fuel.

    //Initialize Variables
    cap = 16.0f;
    range = 312.0f;
    mpg = range / cap;
    //Map/Process Inputs to Outputs

    //Display the Outputs
    cout << "This vehicle gets " << mpg << " miles per gallon of fuel.";
    //Exit Program!
    return 0;
}


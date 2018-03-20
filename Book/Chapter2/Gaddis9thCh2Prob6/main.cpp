/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 26, 2018, 1:30 PM
 *Purpose: Finding the range of a specific vehicle
 * given the mpg and capacity.
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
    float capacity; //The fuel capacity of the vehicle in Gallons
    float mpgt; //The miles per gallon in town
    float mpgh; //The miles per gallon on the highway.
    float ranget;   //The range in town.
    float rangeh;   //The range in highway.
    
    //Initialize Variables
    capacity = 20.0f;
    mpgt = 23.5f;
    mpgh=28.9f;
    ranget=capacity*mpgt;
    rangeh=capacity*mpgh;
    //Map/Process Inputs to Outputs

    //Display the Outputs
    cout<<"This vehicle has a range of:\n"<<ranget<<" Miles in town.\n"
            <<rangeh<<" Miles in the highway.";
    //Exit Program!
    return 0;
}


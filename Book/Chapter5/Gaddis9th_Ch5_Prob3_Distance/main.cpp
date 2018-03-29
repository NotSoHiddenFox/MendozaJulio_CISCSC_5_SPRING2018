/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 28, 2018 5:20 PM
 *Purpose: Finds distance based on speed and time.
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <cstdlib>
#include <iomanip>
using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns

//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float speed = 0.0f; //User entered speed of the vehicle
    int time = 0; //User entered time traveled at 'speed'.
    float distance = 0.0f;
    //Map/Process Inputs to Outputs
    cout<<"This program takes in time and speed to give a distance."<<endl;
    cout<<"Please enter the speed in mph at which you traveled:";
    cin>>speed;
    cout<<"Please enter the time in hours for which you traveled:";
    cin>>time;
    //Display the Outputs
    cout << "Hour          Miles Traveled" << endl << ""
            "----------------------------"<<endl;
    
    for (int x = 1; x <= time; x++) {
        distance = speed*x;
        cout << " " << x << "                 " << distance<<endl;
    }
    //Exit Program!
    return 0;
}


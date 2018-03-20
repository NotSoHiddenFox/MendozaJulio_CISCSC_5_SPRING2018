/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 17, 2018, 9:10PM
 *Purpose: Governs time.
 *         By taking in seconds and telling you how much that is in days
 * and stuff.
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const int DSEC = 864e2; //seconds in a day
const int HSEC = 36e2; //seconds in an hour
const int MSEC = 60; //seconds in a minute...

//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float x = 0; //user input

    //Map/Process Inputs to Outputs
    cout << "Enter A number of seconds.\n ";
    cin>>x;
    if (x >= DSEC) {
        x /= DSEC;
        cout << "That is the same as " << x << " days.";
    }
    if (x < DSEC && x > HSEC) {
        x /= HSEC;
        cout << "That is the same as " << x << " hours.";
    }
    if (x < HSEC && x >= MSEC) {
        x /= MSEC;
        cout << "That is the same as " << x << " minutes.";
    } else if (x < 60) {
        cout << "That is the same as " << x << " seconds...";
    }
    //Display the Outputs

    //Exit Program!
    return 0;
}


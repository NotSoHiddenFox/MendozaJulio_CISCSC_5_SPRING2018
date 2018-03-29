/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 28, 2018 4:40 PM
 *Purpose: Shows ASCII characters via loop
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
    char x; //This is what is used to display characters

    //Initialize Variables
    int y = 32; //counter
    x = 32; //Starting point for the characters displayed.
    for (; y < 128; y++) {
       

        if (y % 16 == 0) {
            cout << endl;
        }
        cout << x<<" ";
        x++;
    }
    //Map/Process Inputs to Outputs

    //Display the Outputs

    //Exit Program!
    return 0;
}


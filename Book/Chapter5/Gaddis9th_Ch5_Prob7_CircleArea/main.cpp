/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 31 , 2018, 10:00 PM
 *Purpose: Shows a table of circles
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <iomanip>

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const float PI = 3.14f;
//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    cout << "This program outputs a table of circles." << endl;
    int circle = 1;
    int radius = 1;
    cout << "Circle          Radius          Circumference\n"
            "---------------------------------------------" << endl;
    //Map/Process Inputs to Outputs
    for (; circle <= 8; circle++) {
        cout << fixed << setprecision(2) << setw(4) << circle
                << "               " << setw(4) << radius << "             " <<
                setw(4) << PI * (radius * radius) << endl;
        radius *= 2;
    }

    //Display the Outputs

    //Exit Program!
    return 0;
}


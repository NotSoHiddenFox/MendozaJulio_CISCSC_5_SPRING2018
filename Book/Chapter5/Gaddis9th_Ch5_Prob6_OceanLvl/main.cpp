/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 31, 2018 9:50 PM
 *Purpose: Calculates rising ocean levels
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
    float rise = 3.1f; //rising ocean levels per year in millimeter.
    float years = 25.0f; // the numbers of years the ocean will rise
    float result; //the amounf of millimeters the ocean has risem
    //Map/Process Inputs to Outputs
    result = years*rise;
    cout << "After " << years << " years, the ocean will have risen " << result
            << " millimeters." << endl;



    //Display the Outputs

    //Exit Program!
    return 0;
}


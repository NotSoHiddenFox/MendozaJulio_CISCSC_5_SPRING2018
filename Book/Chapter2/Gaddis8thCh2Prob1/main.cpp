/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 21, 2018, 8:05 PM
 *Purpose: Add and Store Variables
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
    int fty; //50
    int hdrd; //100
    int total; //100+50
    //Initialize Variables
    fty = 50;
    hdrd = 100;
    total = fty + hdrd;
    //Map/Process Inputs to Outputs

    //Display the Outputs
    cout << fty << "+" << hdrd << "=" << total;  //This proves the variables were stored.
    //Exit Program!
    return 0;
}


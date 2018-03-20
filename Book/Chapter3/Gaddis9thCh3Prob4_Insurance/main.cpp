/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 8 , 2018, 8:15PM
 *Purpose: Gives you 80% of a number
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <iomanip>

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns

//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float value;
    //Initialize Variables
    cout<<"Enter the replacement cost of your building in USD with no"
            "signage:";
    cin>>value;
    //Map/Process Inputs to Outputs

    //Display the Outputs
    cout<<"Financial experts around the glove suggest your insure the building "
            "for:$"<<fixed<<setprecision(2)<<value*0.8f;
    //Exit Program!
    return 0;
}


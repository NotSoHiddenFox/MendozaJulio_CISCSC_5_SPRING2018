/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 10, 2018, 7:20PM
 *Purpose: 
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
    float clrs = 80.0f, //calories in a single cookie
            eaten; //user declared cookies eaten

    //Initialize Variables

    //Map/Process Inputs to Outputs
    cout << "Enter the number of cookies eaten:";
    cin>>eaten;
    eaten *= clrs;
    //Display the Outputs
    cout << "You have eaten " << eaten << " calories.";
    //Exit Program!
    return 0;
}


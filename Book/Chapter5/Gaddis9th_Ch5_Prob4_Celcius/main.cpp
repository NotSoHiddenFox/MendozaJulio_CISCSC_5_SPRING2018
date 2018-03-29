/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 28, 2018 6:12PM
 *Purpose: Chart of the F Degree thing to Centigrade. 
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
    float table = 0.0f;
    //Initialize Variables

    //Map/Process Inputs to Outputs
    cout<<"This program displays a chart of Celsius to Fahrenheit."<<endl;
    cout<<"Celsius          Fahrenheit\n"
            "--------------------------\n";
    for (;table<=30;table++){
        cout<<table<<"                 "<<(9/(5/table))+32<<endl;
    }
    //Display the Outputs

    //Exit Program!
    return 0;
}


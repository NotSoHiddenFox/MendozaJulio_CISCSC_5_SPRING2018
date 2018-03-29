/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 28, 2018 6:20 PM 
 *Purpose: Charts KPH to MPH in increments of 10.
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
    float kph = 10.0f;
   
    cout << "This program displays a chart of KPH to MPH." << endl;
    cout << "KPH          MPH" << endl;
    cout << "-----------------" << endl;
    for (; kph <= 120; kph += 10) {
        cout<<fixed<<setprecision(0)<<kph;
        cout <<fixed << setprecision(2) <<q "          " <<
                kph * 0.6214 << endl;

    }


    //Map/Process Inputs to Outputs

    //Display the Outputs

    //Exit Program!
    return 0;
}


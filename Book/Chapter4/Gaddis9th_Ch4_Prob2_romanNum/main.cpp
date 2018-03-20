/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 14, 2018, 9:45PM
 * Converts Arabic to Roman numbers.
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
    cout << "This program translates a number to Roman.\n"
            "Please enter a whole number from 1 to 10-->";
    int x = 0; //User input initialized to something that won't work.
    cin>>x;


    //Initialize Variables

    //Map/Process Inputs to Outputs


//this program stops running after giving result.
    
    switch (x) {
        case 1:
            cout << "I";
            return 0;
        case 2:
            cout << "II";
            return 0;
        case 3:
            cout << "III";
            return 0;
        case 4:
            cout << "IV";
            return 0;
        case 5:
            cout << "V";
            return 0;
        case 6:
            cout << "VI";
            return 0;
        case 7:
            cout << "VII";
            return 0;
        case 8:
            cout << "VIII";
            return 0;
        case 9:
            cout << "IX";
            return 0;
        case 10:
            cout << "X";
            return 0;
        default:
            cout << "ERROR:INVALID INPUT!";
            return 0;
    }
    //Display the Outputs
    //Exit Program!
    return 0;
}


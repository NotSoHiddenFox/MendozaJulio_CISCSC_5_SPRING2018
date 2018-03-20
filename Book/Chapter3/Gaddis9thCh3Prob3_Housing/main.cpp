/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 7, 2018 , 8:00PM
 *Purpose: Adds numbers disguised as monthly expenses.
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
    float room, //The rent or mortgage for the building
            utilities,
            phones,
            cable; //lol, people still use cable?

    //Initialize Variables

    //Map/Process Inputs to Outputs
    cout << "Enter your following monthly expenses in USD without the dollar"
            " sign\n";
    cout << "Mortgage:";
    cin>>room;
    cout << "Utilities:";
    cin>>utilities;
    cout << "Phones:";
    cin>>phones;
    cout << "cable:";
    cin>>cable;

    //Display the Outputs
    cout << "\nYour total monthly expenses are:$" <<
            fixed << setprecision(2) <<
            room + utilities + phones + cable <<
            "." << endl;
    cout << "Your yearly expenses are :$" <<
            fixed << setprecision(2) <<
            (room + utilities + phones + cable)*12 <<
            ".";
    //Exit Program!
    return 0;
}


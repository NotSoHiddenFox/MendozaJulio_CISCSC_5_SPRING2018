/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 17, 2018 , 8:50PM
 *Purpose: multiplies constants by a user input
 * and keeps adding the result to itself on another variable.
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const float PNY = 0.01f;
const float NKL = 0.05f;
const float DME = 0.10f;
const float QTR = 0.25f;
//Function Prototypes go here.

//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    int x = 0; //user inputs
    float count = 0; //keeps counts of the change
    //Map/Process Inputs to Outputs
    cout << "Add the coins to make a dollar.\n";
    cout << "How many Pennies will you add?    ";
    cin>>x;
    count += x*PNY;
    cout << "How many Nickels will you add?    ";
    cin>>x;
    count += x*NKL;
    cout << "How many Dimes will you add?      ";
    cin>>x;
    count += x*DME;
    cout << "How many Quarters will you add?   ";
    cin>>x;
    count += x*QTR;
    if (count == 1) {
        cout << "Congratulations, despite all odds you have succeeded in the "
                "once thought unsurmountable task of putting a dollar together "
                "when faced with a limitless number of any type of US coin that"
                " we still see around these days.";
    }
    if (count > 1) {
        cout << "You have gone over the target by:$" << count - 1;
    }
    if (count < 1) {
        cout << "You have failed to reach the target by:$" << 1 - count;
    }
    //Display the Outputs

    //Exit Program!
    return 0;
}


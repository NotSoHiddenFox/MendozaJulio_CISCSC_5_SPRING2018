/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 14, 2018
 *Purpose: argh
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
    int a = 0; //user month
    int b = 0; //user day
    int c = 0; //user year
    cout << "Enter a date in the following format separated by a space:\n"
            "MM DD YY\n";
    cin>>a;
    cin>>b;
    cin>>c;
    //prevent invalid months
    //used to check for month 0 or letters
    if (a <= 0 || a > 12) cout << "Invalid Month";
    if (a <= 0 || a > 12) return 0;
    //prevent invalid dates
    if (b <= 0 || b > 31)cout << "Invalid date.";
    if (b <= 0 || b > 31) return 0;
    //check for under 30 days in Feb
    if (a == 2 && b >= 30)cout << "Invalid date";
    if (a == 2 && b >= 30)return 0;
    //Map/Process Inputs to Outputs
    if (a * b == c)cout << "Date is magic.";
    return 0;
    //Display the Outputs
    cout << "Date is not magic.";
    //Exit Program!
    return 0;
}


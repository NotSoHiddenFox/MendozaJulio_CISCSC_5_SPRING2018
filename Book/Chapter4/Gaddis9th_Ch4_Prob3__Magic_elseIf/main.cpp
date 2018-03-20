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
    int month = 0; //user month
    int day = 0; //user day
    int year = 0; //user year
    cout << "Enter a date in the following format separated by a space:\n"
            "MM DD YY\n";
    cin>>month;
    cin>>day;
    cin>>year;

    //prevent invalid months
    //used to check for month 0 or letters
    if (month <= 0 || month > 12) {
        cout << "Invalid Month.";
        return 0;
    }
        //check for invalid dates
    else if (day <= 0 || day > 31) {
        cout << "Invalid date.";
        return 0;
    }
        //check for over 30 days in Feb
    else if (month == 2 && day >= 30) {
        cout << "Invalid date.";
        return 0;
    }

        //Map/Process Inputs to Outputs
    else if (month * day == year) {
        cout << "Date is magic.";
        return 0;
    }        //Display the Outputs
    else {
        cout << "Date is not magic.";
        //Exit Program!
        return 0;
    }
    return 0;
}


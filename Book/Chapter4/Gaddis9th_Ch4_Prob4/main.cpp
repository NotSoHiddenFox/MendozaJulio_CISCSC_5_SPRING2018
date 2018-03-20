/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 17, 2018, 8:20PM
 *Purpose: Returns a number based on input range.
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
    int book = 0; //User entered variable
    int point = 0; //Return depends on book variable.

    //Map/Process Inputs to Outputs
    cout << "Enter how many books you purchased.->";
    cin>>book;
    cout << endl;
    if (book == 0) {
        cout << "No points";
        return 0;
    }

    if (0 > book) {
        cout << "Invalid input, closing program." << endl;
        return 0;
    }
    if (book >= 4) {
        point = 50;
        cout << "You have earned " << point << " points!\n";
        return 0;
    }
    if (book == 3) {
        point = 30;
        cout << "You have earned " << point << " points!\n";
        return 0;
    }

    if (book == 2) {
        point = 15;
        cout << "You have earned " << point << " points!\n";
        return 0;

    } else point = 5;
    cout << "You have earned " << point << " points!\n";






    //Display the Outputs

    //Exit Program!
    return 0;
}


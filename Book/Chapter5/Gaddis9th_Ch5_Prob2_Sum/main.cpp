/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 28, 2018 5:00 PM
 *Purpose: 
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <cstdlib>

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns

//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    int user = 0; //user entered positive integer
    int result = 0; //This adds the numbers and is then used to display it.
    cout << "This program asks for a positive integer and will add all the"
            "numbers leading to it before displaying the result." << endl;
    cout << "Please enter a positive whole number.-->";
    cin>>user;
    //Map/Process Inputs to Outputs
    for (int x = 0; x > 2; x++) {//loop used to validate number is positive. 
        user *= 1; //Runs various times to be EXTRA sure.
        if (x < 0) {
            cout << "Invalid input.";
            return 0;
        }
    }
    for (int x = 0; x <= user; x++) { //This will run up to the user's number.
        result+=x;                   //Add the lop counter to the total.
    }
    cout<<"The numbers leading up to your number add up to "<<result<<".";
    //Display the Outputs
    
    //Exit Program!
    return 0;
}


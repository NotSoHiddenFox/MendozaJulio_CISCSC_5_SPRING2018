/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 15, 2018, 10:40AM
 *Purpose: This is a menu
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
    char choice;

    cout << "Choose from the following menu" << endl;
    cout << "Type 1 for independent if example." << endl;
    cout << "Type 2 for the dependent if example" << endl;
    cout << "Type 3 for the ternary operator example" << endl;
    cout << "Type 4 for the switch-case example." << endl;
    cin >>choice;

    if (choice >= '1' && choice <= '4') {
        switch (choice) {
            case '1': cout << "Independent-If Example.";
                break;
            case '2':
                cout << "Dependent-If Example.";
                break;
            case '3': cout << "Ternary Op Example.";
                break;
            case '4':cout << "Switch-Case Example.";
                break;


        }
    } else {
        cout << "Exiting menu." << endl;
    }
    return 0;
}

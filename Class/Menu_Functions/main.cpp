/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on March 15th, 2018, 10:40 AM
 * Purpose:  Menu with construct examples
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void menu();

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    //loop and display code
    do {
        menu();
        cin>>choice;
        //process stuff
        switch (choice) {
            case'1':
            {
                problem1();
                break;
            }
            case'2':
            {
                problem2();
                break;
            }
            case'3':
            {
                problem3();
                break;
            }
            case'4':
            {
                problem4();
                break;
            }
            default:cout << "Exiting Menu" << endl;
        }
    } while (choice >= 1 && choice <= 4);
    //Exit stage right!
    return 0;
}

void problem1() {
    cout << "Independent-If Example" << endl;
    //Declare variables
    float hrsWrkd, payRate, payChk;
    //Initialize Variables
    cout << "This program calculates your payCheck" << endl;
    cout << "Input the hours you worked for the week " << endl;
    cout << "and your Pay Rate $'s/hr" << endl;
    cin >> hrsWrkd>>payRate;
    //Calculate your pay check
    payChk = hrsWrkd*payRate;
    //If you worked overtime > 40 hours
    if (hrsWrkd > 40)payChk += ((hrsWrkd - 40) * payRate);
    //Output all conditions
    cout << "Hours Worked = " << hrsWrkd << endl;
    cout << "Pay Rate = $" << payRate << "/hr" << endl;
    cout << "Pay Check = $" << payChk << endl;

}

void problem2() {
    cout << "Dependent-If Example" << endl;
    //Declare variables
    float hrsWrkd, payRate, payChk;
    //Initialize Variables
    cout << "This program calculates your payCheck" << endl;
    cout << "Input the hours you worked for the week " << endl;
    cout << "and your Pay Rate $'s/hr" << endl;
    cin >> hrsWrkd>>payRate;
    //Calculate your pay check
    if (hrsWrkd >= 0 && hrsWrkd <= 40) {
        payChk = hrsWrkd*payRate;
    } else {
        payChk = hrsWrkd * payRate + (hrsWrkd - 40) * payRate;
    }
    //Output all conditions
    cout << "Hours Worked = " << hrsWrkd << endl;
    cout << "Pay Rate = $" << payRate << "/hr" << endl;
    cout << "Pay Check = $" << payChk << endl;
}

void problem3() {
    cout << "Ternary Op Example" << endl;
    //Declare variables
    float hrsWrkd, payRate, payChk;
    //Initialize Variables
    cout << "This program calculates your payCheck" << endl;
    cout << "Input the hours you worked for the week " << endl;
    cout << "and your Pay Rate $'s/hr" << endl;
    cin >> hrsWrkd>>payRate;
    //Calculate your pay check
    payChk = (hrsWrkd >= 0 && hrsWrkd <= 40) ?
            hrsWrkd * payRate :
            hrsWrkd * payRate + (hrsWrkd - 40) * payRate;
    //Output all conditions
    cout << "Hours Worked = " << hrsWrkd << endl;
    cout << "Pay Rate = $" << payRate << "/hr" << endl;
    cout << "Pay Check = $" << payChk << endl;
}

void problem4() {
    cout << "Switch-Case Example" << endl;
    //Declare variables
    float hrsWrkd, payRate, payChk;
    //Initialize Variables
    cout << "This program calculates your payCheck" << endl;
    cout << "Input the hours you worked for the week " << endl;
    cout << "and your Pay Rate $'s/hr" << endl;
    cin >> hrsWrkd>>payRate;
    //Calculate your pay check
    switch (hrsWrkd >= 0 && hrsWrkd <= 40) {
        case true:
        {
            payChk = hrsWrkd*payRate;
            break;
        }
        default:
        {
            payChk = hrsWrkd * payRate + (hrsWrkd - 40) * payRate;
        }
    }
    //Output all conditions
    cout << "Hours Worked = " << hrsWrkd << endl;
    cout << "Pay Rate = $" << payRate << "/hr" << endl;
    cout << "Pay Check = $" << payChk << endl;
}

void menu() {
    cout << "Enter 1 for program 1\n";
    cout << "Enter 2 for program 2\n";
    cout << "Enter 3 for program 3\n";
    cout << "Enter 4 for program 4\n";
    cout << "Enter any other input to exit.\n";
}
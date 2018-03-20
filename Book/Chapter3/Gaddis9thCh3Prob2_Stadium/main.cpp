/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 6 , 2018, 2:50PM
 *Purpose: Stadium ticket records
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <iomanip>//formatting

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns

//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float classA = 15.00f;
    float classB = 12.00f;
    float classC = 9.00f;
    int classAS, //Class A sold
            classBS, //Class B sold
            classCS; //Class C sold
    //Initialize Variables

    //Map/Process Inputs to Outputs
    cout << "WARNING:\nFAILURE TO USE WHOLE NUMBERS WILL RESULT IN ERROUNOUS"
            " INFORMATION.\n\n" << endl;
    cout << "Enter the number of Class A seats sold\n";
    cin >> (classAS);
    cout << "Enter the number of Class B seats sold\n";
    cin>>classBS;
    cout << "Enter the number of Class C seats sold\n";
    cin>>classCS;

    //Display the Outputs
    cout << "The $" << classA << " seats sold today provided a revenue of $" <<
            fixed << setprecision(2) << classA * classAS << endl;
    cout << "The $" << classB << " seats sold today provided a revenue of $" <<
            fixed << setprecision(2) << classB * classBS << endl;
    cout << "The $" << classC << " seats sold today provided a revenue of $" <<
            fixed << setprecision(2) << classC * classCS << endl;
    //Exit Program!
    return 0;
}


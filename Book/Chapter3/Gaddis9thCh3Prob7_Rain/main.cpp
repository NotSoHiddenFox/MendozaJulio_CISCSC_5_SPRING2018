/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 10, 2018, 6:45 PM
 *Purpose: Calculates the average of inputs
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
    string m0, //The first month
            m1, //The seconds month
            m2; //The third month
    float r0, //Rain for the first month
            r1, //The rain for the second month
            r2;//The rain for the third month
       

    //Initialize Variables
    cout << "Enter the month we are recording:";
    cin>>m0;
    m0+=", ";
    cout << "Enter the inches of rain received:";
    cin>>r0;
    cout << "Enter the month we are recording:";
    cin>>m1;
    m1+=", ";
    cout << "Enter the inches of rain received:";
    cin>>r1;
    cout << "Enter the month we are recording:";
    cin>>m2;
    m2+=", ";
    cout << "Enter the inches of rain received:";
    cin>>r2;
    //Map/Process Inputs to Outputs
    r0+=r1+r2;//Adds...
    r0/=3;//Then divides for the average
    //Display the Outputs
    cout <<"The average monthly rainfall for the months of "
            " "<<m0+m1+m2<<"was:"<<r0;
    //Exit Program!
    return 0;
}


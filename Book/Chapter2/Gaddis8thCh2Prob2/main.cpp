/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 21, 2018, 8:12 PM
 *Purpose: Finds 58% of 8.6M
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const int PRCNT = 100;
const int MLLN = 10e6;
//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float eastCst;   //east coast 58% of sales
    float sales;     // Total sales
    float predict;  //Sales from east coast prediction
    //Initialize Variables
    eastCst = 0.58f;
    sales = 8.6f;
    predict = eastCst*sales;
    //Map/Process Inputs to Outputs

    //Display the Outputs
    cout <<"The East coast store is predicted to bring in $"<<predict<<
            " million in sales.";
    //Exit Program!
    return 0;
}


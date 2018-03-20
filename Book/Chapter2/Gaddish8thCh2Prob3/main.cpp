/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 21, 2018, 8:37 PM
 *Purpose: Find sales tax of specific purchase
 * $95 purchase with 4% + 2% taxes.
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const int PRCNT = 100;
//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float sale;
    float stateTx;
    float cntyTx;
    float total;
    float totalTx;
    //Initialize Variables
    sale = 95;      //price of the object
    stateTx = 0.04f;        //state tax
    cntyTx = 0.02f;     //county tax
    totalTx= (stateTx+cntyTx)*PRCNT;        //total taxes
    total = sale+totalTx;       //total after taxes
    
    //Map/Process Inputs to Outputs

    //Display the Outputs
    cout <<"        Receipt\nPurchase:$"<<sale<<endl;
    cout << "Taxes:$"<<totalTx<<"\nTotal:$"<<total;
    //Exit Program!
    return 0;
}


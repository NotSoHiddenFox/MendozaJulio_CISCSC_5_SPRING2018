/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 28, 2018, 4:00 PM
 *Purpose: Finds the profits of an specific sale.
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
    float cost; //The cost of the item to be sold
    float profit;   //The desired profit per sale
    float price;    //The price to be sold for to get profit
    float margin;   //The profits gained from the "profit" variable
    //Initialize Variables
    cost = 14.95f;
    profit = 0.35f;
    margin = profit*cost;
    price = cost+margin;
    //Map/Process Inputs to Outputs

    //Display the Outputs
    cout<<"The cost per item is: $"<<cost<<".\nThe desired profit from each item"
            " is: "<<profit<<"%.\nProfit per sale: $"<<margin<<
            ".\nThe item must be sold for: $"<<price<<".\n";
            
    //Exit Program!
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 21, 2018, 8:58 PM
 *Purpose: Find the total cost of a meal
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const int PRCNT =100;
//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float meal; //The original cost of the meal
    float tax;  //The taxes charged
    float tip;  //The amount to be tipped
    float total;    //Total cost of the meal
    float mealTx;    //Meal + Tax
     
    //Initialize Variables
    meal = 88.67;   //in USD
    tax = 0.0675; //6.75%
    tip = 0.2;  //20% tip
    mealTx = meal*tax;  //Taxes paid for the meal
    //Map/Process Inputs to Outputs
    
    //Display the Outputs
    cout<<"The meal was $"<<meal<<endl;
    cout<< "The tax was $"<<mealTx<<endl;
    cout<<"The total after taxes was $"<<meal+mealTx<<endl;
    cout<<"Your tip was $"<<(mealTx+meal)*tip<<endl;
    cout<<"your total is $"<<((mealTx+meal)*tip)+(meal+mealTx);
    
    //Exit Program!
    return 0;
}


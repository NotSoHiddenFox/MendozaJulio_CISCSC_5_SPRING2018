/* 
 * File:   main.cpp
 * Author: Julio A. MEndoza
 * Created on April 24th, 2016, 12:20 PM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int DOLRSPN=100;//CONVERSION from dollars to pennies.
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;
//Function Prototypes Here
int numCoin(int,int);//Calculates the number of coins
int rmder(int,int);//Remainder after subtracting coins.
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float price,amTndr;
    int pennies,n25,n10,n5,n1;
    //Input or initialize values Here
    price=9.14f;//$9.14.
    amTndr=20.00f;
    
    //Output initial conditions
    pennies=(amTndr-price+0.0005)*DOLRSPN;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Item price         = $"<<price<<endl;
    cout<<"Amount Tendered    = $"<<amTndr<<endl;
    cout<<"Change returned = "<<pennies<<" Cents"<<endl;
    
    
   
    //calculate minimum amount of change.
    pennies=(amTndr-price)*DOLRSPN;
    n25=numCoin(pennies,QUARTER);
    pennies=rmder(pennies,QUARTER);
    n10=numCoin(pennies,DIME);
    pennies=rmder(pennies,DIME);
    n5=numCoin(pennies,NICKEL);
    pennies=rmder(pennies,NICKEL);
    n1=numCoin(pennies,PENNY);
    pennies=rmder(pennies,PENNY);
    
    
    //Process/Calculations Here
    
    //Output Located Here
  
    cout<<"----------Change returned----------"<<endl;
    cout<<"Number of Quarters   = "<<n25<<endl;
    cout<<"Number of Dimes      = "<<n10<<endl;
    cout<<"Number of Nickels    = "<<n5<<endl;
    cout<<"Number of Pennies    = "<<n1;
    

    //Exit
    return 0;
}

int numCoin(int pennies,int denom){
    return pennies/denom;//number of coins of that denomination.
}

int rmder(int pennies,int denom){
    return pennies-numCoin(pennies,denom)*denom;
}
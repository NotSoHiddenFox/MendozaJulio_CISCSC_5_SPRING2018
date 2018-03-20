/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 08, 2018, 11:50 AM
 * Purpose:  take numbers and divide them
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float bat;//Times at the bat
    float hit;//Times batted successfully
    
   
    
    //Input or initialize values Here
    
    //Process/Calculations Here
     cout<<"This program finds the average batting of a player."<<endl;
     cout<<"Enter the amount of times the plater has been at the bat:";
     cin>>bat;
     cout<<"Enter the amount of times the player has hit the ball:";
     cin>>hit;
     
    //Output Located Here
    cout<<"Batting Average:"<<fixed<<setprecision(4)<<(hit/bat)*100<<"%"<<endl;

    //Exit
    return 0;
}


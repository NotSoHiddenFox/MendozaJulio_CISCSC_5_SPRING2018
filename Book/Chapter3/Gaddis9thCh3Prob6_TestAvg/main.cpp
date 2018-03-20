/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 08, 2018, 12:10 PM
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
    float t1,t2,t3,t4,t5;
    
   
    
    //Input or initialize values Here
    
    //Process/Calculations Here
     cout<<"This program finds the average of five tests."<<endl;
     cout<<"Enter the result of test 1:";
     cin>>t1;
     cout<<"Enter the result of test 2:";
     cin>>t2;
     cout<<"Enter the result of test 3:";
     cin>>t3;
     cout<<"Enter the result of test 4:";
     cin>>t4;
     cout<<"Enter the result of test 5:";
     cin>>t5;
       
    //Output Located Here
    cout<<"Test average:"<<fixed<<setprecision(1)<<(t1+t2+t3+t4+t5)/5<<"%"<<
            endl;

    //Exit
    return 0;
}


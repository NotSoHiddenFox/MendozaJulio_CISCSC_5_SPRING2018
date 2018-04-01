/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 8, 2018, 9:40 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    float interest = 0.01f; //MONTHLY interest for the loan
    int months =36; //months for the loan
    float loan= 1e4f; //the loan amount
    float temp= pow(1+interest,months); //The power function
    float temp2 = (interest*temp)*loan/ (temp-1);
    int pennies= static_cast<int>(temp2+0.005)*100;
    temp2=pennies/100;
    
   
    
  
     cout<<"Amount paid per month:$"<<fixed<<setprecision(2)<<
            temp2<<endl;
     cout<<"Total interest paid:$"<<fixed<<setprecision(2)<<(temp2*36-loan)<<endl; 
     cout<<"Total amount paid:$"<<fixed<<setprecision(2)<<(temp2*36); 
    return 0;
}


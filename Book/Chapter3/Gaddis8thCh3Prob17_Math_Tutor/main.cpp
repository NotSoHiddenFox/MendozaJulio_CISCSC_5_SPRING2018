/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 03, 2018, 11:25 AM
 * Purpose:  Random numbers addition
 *             Math Tutor
 */            

//System Libraries Here
#include <iostream>
#include <cstdlib>//to set random number
#include <ctime>//to get a seed for random
#include <iomanip>//formatting
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    unsigned short op1,op2,stuAns,correct;
    //Input or initialize values Here
    op1=rand()%900+100;//100-999 range
    op2=rand()%999+1;//1-999 range
    cout<<"This is a simple Math Tutor Program"<<endl;
    cout<<"Input the Answer to the following addition problem"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)<<op2<<endl;
    cout<<"-----"<<endl;
 
    
    //Calculate the answer
    correct=op1+op2;
    cout<<(correct>1000?" ":"  ");
    cin>>stuAns;
    
    //Output Located Here
    cout<<endl<<(stuAns==correct?"Correct Answer":"Wrong Answer")<<endl;

    //Exit
    return 0;
}


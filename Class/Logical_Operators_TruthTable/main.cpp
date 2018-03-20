/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 13, 2018 11:40 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    //Input or initialize values Here
    //Column heading of Truth table
    cout<<"X Y X&& X||Y X^Y X^Y^Y X^Y^X !X !Y !(X&&Y)"
            <<"!X||!Y !(X||Y) !X&&!Y"<<endl;
    //First Row
    x=true;
    y=true;
    cout<<(x?"T":"F")<<" "; // Makes it so it outputs "T" instead of 1 for true.
    cout<<(y?"T":"F")<<"  ";
    cout<<(x&&y?"T":"F")<<"    ";
    cout<<(x||y?"T":"F")<<"   ";
    cout<<(x^y?"T":"F")<<"    ";
    cout<<(x^y^y?"T":"F")<<"     ";
    cout<<(x^y^x?"T":"F")<<"    ";
    cout<<(!x?"T":"F")<<"  ";
    cout<<(!y?"T":"F")<<"     ";
    cout<<(!(x&&y)?"T":"F")<<"     ";
    cout<<(!x||!y?"T":"F")<<"      ";
    cout<<(!x?"T":"F")<<"      ";
    cout<<(!x&&!y?"T":"F")<<" "<<endl;
    //Second Row
    x=true;
    y=false;
    cout<<(x?"T":"F")<<" "; // Makes it so it outputs "T" instead of 1 for true.
    cout<<(y?"T":"F")<<"  ";
    cout<<(x&&y?"T":"F")<<"    ";
    cout<<(x||y?"T":"F")<<"   ";
    cout<<(x^y?"T":"F")<<"    ";
    cout<<(x^y^y?"T":"F")<<"     ";
    cout<<(x^y^x?"T":"F")<<"    ";
    cout<<(!x?"T":"F")<<"  ";
    cout<<(!y?"T":"F")<<"     ";
    cout<<(!(x&&y)?"T":"F")<<"     ";
    cout<<(!x||!y?"T":"F")<<"      ";
    cout<<(!x?"T":"F")<<"      ";
    cout<<(!x&&!y?"T":"F")<<" "<<endl;
    //Third row
    x=false;
    y=true;
    cout<<(x?"T":"F")<<" "; // Makes it so it outputs "T" instead of 1 for true.
    cout<<(y?"T":"F")<<"  ";
    cout<<(x&&y?"T":"F")<<"    ";
    cout<<(x||y?"T":"F")<<"   ";
    cout<<(x^y?"T":"F")<<"    ";
    cout<<(x^y^y?"T":"F")<<"     ";
    cout<<(x^y^x?"T":"F")<<"    ";
    cout<<(!x?"T":"F")<<"  ";
    cout<<(!y?"T":"F")<<"     ";
    cout<<(!(x&&y)?"T":"F")<<"     ";
    cout<<(!x||!y?"T":"F")<<"      ";
    cout<<(!x?"T":"F")<<"      ";
    cout<<(!x&&!y?"T":"F")<<" "<<endl;
    //Fourth row
    x=false;
    y=false;
    cout<<(x?"T":"F")<<" "; // Makes it so it outputs "T" instead of 1 for true.
    cout<<(y?"T":"F")<<"  ";
    cout<<(x&&y?"T":"F")<<"    ";
    cout<<(x||y?"T":"F")<<"   ";
    cout<<(x^y?"T":"F")<<"    ";
    cout<<(x^y^y?"T":"F")<<"     ";
    cout<<(x^y^x?"T":"F")<<"    ";
    cout<<(!x?"T":"F")<<"  ";
    cout<<(!y?"T":"F")<<"     ";
    cout<<(!(x&&y)?"T":"F")<<"     ";
    cout<<(!x||!y?"T":"F")<<"      ";
    cout<<(!x?"T":"F")<<"      ";
    cout<<(!x&&!y?"T":"F")<<" "<<endl;
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 19, 2018, 10:15 AM
 * Purpose:  Roman Numeral Conversion Program
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int THSND = 1000; //Thousands
const int HNDRD = 100; //Hundreds
const int TEN = 10; //Tens


//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    char n1000s, n100s, n10s, n1s;
    unsigned short x;
    string roman = " ";

    //Input or initialize values Here
    cout << "This program converts a number to its Roman Numeral equivalent."
            << endl;
    do {
        cout << "Input an integer value between 1-3000" << endl;
        cin>>x;
    } while (x < 1 || x > 3000);
    //Calculate number of thousands, hundreds, tens, and ones.
    n1000s = x / THSND;
    x -= n1000s*THSND;
    n100s = x / HNDRD;
    x -= n100s*HNDRD;
    n10s = x / TEN;
    x -= n10s*TEN;
    n1s = x;
    //Output thousands converted 
    switch (n1000s) {
        case 3:roman += "M"; //THIS drops through. Getting a 3 would active al 3
        case 2:roman += "M"; //giving you MMM this saves times and needs no break
        case 1:roman += "M";
    }
    //output the 100's converted
    switch (n100s) {
        case 9:roman += "CM";
            break;
        case 8:roman += "DCCC";
            break;
        case 7:roman += "DCC";
            break;
        case 6:roman += "DC";
            break;
        case 5:roman += "D";
            break;
        case 4:roman += "CD";
            break;
        case 3:roman += 'C'; //THIS drops through. Getting a 3 would active al 3
        case 2:roman += 'C'; //giving you MMM this saves times and needs no break
        case 1:roman += 'C';
    }
    switch (n10s) {
        case 9:roman += "XC";
            break;
        case 8:roman += "LXXX";
            break;
        case 7:roman += "LXX";
            break;
        case 6:roman += "LX";
            break;
        case 5:roman += "L";
            break;
        case 4:roman += "XL";
            break;
        case 3:roman += 'X'; //THIS drops through. Getting a 3 would active al 3
        case 2:roman += 'X'; //giving you MMM this saves times and needs no break
        case 1:roman += 'X';
    }
    switch (n1s) {
        case 9:roman += "IX";
            break;
        case 8:roman += "VIII";
            break;
        case 7:roman += "VII";
            break;
        case 6:roman += "VI";
            break;
        case 5:roman += "V";
            break;
        case 4:roman += "IV";
            break;
        case 3:roman += 'I'; //THIS drops through. Getting a 3 would active al 3
        case 2:roman += 'I'; //giving you MMM this saves times and needs no break
        case 1:roman += 'I';
    }
    //OUTPUT THE ROMAN NUMERAL CONVERSION
    cout << static_cast<int> (n1000s)
            << static_cast<int> (n100s)
            << static_cast<int> (n10s)
            << static_cast<int> (n1s)
            << "Roman equivalent = " << roman << endl;
    //Exit
    return 0;
}


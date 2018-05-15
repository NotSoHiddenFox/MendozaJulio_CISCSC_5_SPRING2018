/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on May 10, 2018, 11:50 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

void rdFile(ifstream &, char [], int);
void wrtFile(ofstream &, char [], char[], int);
int score(char[], char[], int);

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here

    const int NQSTNS = 20; //number of questions
    char key[NQSTNS], answers[NQSTNS]; //answers and key
    char keyFlNm[] = "key.dat";
    string ansFlNm = "answer.dat";
    char scrFlNm[] = "score.dat";
    ifstream keyFl, ansFl;
    ofstream scrFl;

    //Input or initialize values Here
    keyFl.open(keyFlNm);
    ansFl.open(ansFlNm.c_str());
    scrFl.open(scrFlNm);

    //Process/Calculations Here
    rdFile(keyFl, key, NQSTNS);
    rdFile(ansFl, answers, NQSTNS);
    wrtFile(scrFl,key,answers,NQSTNS);
    int scrs = score(answers, key, NQSTNS);

    //Output Located Here
    cout << "The Score Received = " << 100.0f * scrs / NQSTNS <<"%"<< endl;

    //close files
    keyFl.close();
    ansFl.close();
    scrFl.close();
    
    //Exit
    return 0;
}

void rdFile(ifstream & in, char keyAns[], int size) {
    for (int i = 0; i < size; i++) {
        in >> keyAns[i];
    }
}

void wrtFile(ofstream & out, char key[], char ans[], int size) {
    for (int i = 0; i < size; i++) {
        if (key[i] == ans[i]) out << i << ". Correct" << endl;
        else out << i << ". Incorrect" << endl;

    }
}

int score(char ans[], char key[], int size) {
    int correct = 0;
    for (int i = 0; i < size; i++) {
        if (key[i] == ans[i]) correct++;
    }
    return correct;
}
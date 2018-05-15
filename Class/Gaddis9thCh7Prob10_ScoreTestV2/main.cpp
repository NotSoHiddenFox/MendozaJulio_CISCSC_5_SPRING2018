/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on May 10, 2018, 11:50 AM
 * Purpose:  Score a Test
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

void rdFile(ifstream &, char [], int &);
void wrtFile(ofstream &, char [], char[], int);
int score(char[], char[], int);

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here

    const int NQSTNS = 50; //number of questions
    int nqstns;     //Number of questions from file
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
    rdFile(keyFl, key, nqstns);
    rdFile(ansFl, answers, nqstns);
    wrtFile(scrFl, key, answers, nqstns);
    int scrs = score(answers, key, nqstns);

    //Output Located Here
    cout << "The Score Received = " << 100.0f * scrs / nqstns << "%" << endl;

    //close files
    keyFl.close();
    ansFl.close();
    scrFl.close();

    //Exit
    return 0;
}

void rdFile(ifstream & in, char keyAns[], int &cnt) {
    cnt = 0;
    char kyAnsVl;
    while (in >> kyAnsVl) {
        keyAns[cnt++] = kyAnsVl;      
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
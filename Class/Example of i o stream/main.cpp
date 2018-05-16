/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 1, 2012, 10:51 AM
 * Grading Functions with Arrays
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int grading(char [],char [],int);
void readData(char [],char [],int);
void viewData(char [],int);

int main(int argc, char** argv) {
    //Build the answer array and something to compare against
    const int SIZE=10;
    char answerKey[SIZE],studentAnswers[SIZE];
    //Read the values in from a file for the Answer Key
    char fileNameAns[]="answerKey.dat";
    readData(fileNameAns,answerKey,SIZE);
    viewData(answerKey,SIZE);
    //Read the values in from a file for the Students Response
    char fileStuAns[]="studentAnswers.dat";
    readData(fileStuAns,studentAnswers,SIZE);
    viewData(answerKey,SIZE);
    //Score the results
    cout<<"The score for this example is ";
    cout<<grading(answerKey,studentAnswers,SIZE)<<"/"<<SIZE<<endl;
    return 0;
}

void viewData(char a[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<"->"<<a[i]<<endl;
    }
    cout<<endl;
}

void readData(char f[],char a[],int n){
    ifstream input(f);
    for(int i=0;i<n;i++){
        input>>a[i];
    }
    input.close();
}

int grading(char a[],char s[],int n){
    int score=0;
    for(int i=0;i<n;i++){
        if(a[i]==s[i])score++;
    } 
    return score;
}

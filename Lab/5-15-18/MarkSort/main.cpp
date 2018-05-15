/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 15, 2018, 10:20 AM
 * Purpose:  Investigate Sorts
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(int[], int);
void prntAry(int [], int, int);
void mrkSort(int [], int);
void swap(int &, int &);
void swapLgc(int &, int &);
void smlList(int [], int, int);
int binSrch(int [], int, int);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //set the seed
    srand(static_cast<unsigned int> (time(0)));

    //Declare all Variables Here
    const int SIZE = 100;
    int array[SIZE];

    //Input or initialize values Here
    fillAry(array, SIZE);

    //print the array
    prntAry(array, SIZE, 10);

    //Process/Calculations Here
    mrkSort(array, SIZE);


    //Output Located Here
    prntAry(array, SIZE, 10);

    //find the element
    int find = 50;
    cout << find << " was found at index = "
            << binSrch(array, SIZE, find) << endl;

    //Exit
    return 0;
}

int binSrch(int a[], int n, int val) {
    //declare and initialize variables
    int beg, end, middle;
    beg = 0;
    end = n;
    //loop and find
    do {
        middle = (end + beg) / 2;
        if (a[middle] == val)return middle;
        else if (a[middle] > val) {
            end = middle - 1;
        } else {
            beg = middle + 1;
        }
    } while (end >= beg);



    return -1;
}

//prints out the sorted array

void mrkSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        smlList(a, n, i);
    }
}

//sorts the numbers smallest to largest

void smlList(int a[], int n, int pos) {
    for (int i = pos + 1; i < n; i++) {
        if (a[i] < a[pos])swap(a[i], a[pos]);
    }
}

void swapLgc(int &a, int &b) {
    a = a^b;
    b = a^b;
    a = a^b;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void prntAry(int a[], int n, int perLine) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
        if (i % perLine == (perLine - 1))cout << endl;
    }
    cout << endl;
}

void fillAry(int a[], int n) {

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 90 + 10;
    }

}



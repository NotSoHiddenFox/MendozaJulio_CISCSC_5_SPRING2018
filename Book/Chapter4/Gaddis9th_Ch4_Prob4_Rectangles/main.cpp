/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 14 2018, 12:00AM
 *Purpose: Finds areas of triangled.
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns

//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    {
        //Declare Your Variables.
        float raW, raL, rbW, rbL;
        //prompt
        cout << "Enter the length and width of rectangle one.-->";
        cin>>raL;
        cin>> raW;
        cout << "Enter the length and width of rectangle two.-->";
        cin>>rbL;
        cin>>rbW;

        //Map/Process Inputs to Outputs
        raL *= raW;
        rbL *= rbW;

        if (raL == 0 || rbL == 0) {
            cout << "Invalid operation.";
            return 0;
        } else if (raL - rbL > 0) {
            cout << "Rectangle ONE has a larger area. (" << raL << " vs "
                    << rbL << ")";

        } else if (raL - rbL < 0) {
            cout << "Rectangle TWO has a larger area. (" << rbL << " vs "
                    << raL << ")";

        } else if (raL - rbL == 0) {
            cout << "The triangles have the same area. (" << raL << ")";
        } else {
            cout << "An error has occured.";
        }

    }

    //Exit Program!
    return 0;
}


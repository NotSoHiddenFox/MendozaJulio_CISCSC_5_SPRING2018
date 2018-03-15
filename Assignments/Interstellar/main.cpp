/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on February 27, 2018, 2:55 PM
 *Purpose: Find the time needed to travel light years
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const float SPEED = 16.6f;  //16.6 kilometers per second.
const float SOLK = 3e8;   //The speed of light in meters per second.
const float YEAR = 3.154e7;   //Number of seconds in a year.
const float SOLM = 186282;   //Speed of light in miles per second.
//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    float dist; //The distance in light years from the destination.
    float eta;  //The time expected to arrive based on SPEED.
    int kpy;    //Kilometers per year based on SPEED;
    float meters;
    float miles;
    
    //Initialize Variables
    cout<<
    "Please enter the distance in light years from your desired destination.\n";
    cin>>dist;  //User entered distance in light years.
    eta = (dist*SOLK)/SPEED;    //Finds an ETA based on meters.
    kpy = SPEED*YEAR;   //Finds the meters traveled in a year based on SPEED.
    meters = (SOLK*YEAR)*dist;  //Finds the meters in one Light Year.
    miles= (SOLM*YEAR)*dist;    //Finds the miles in one Light Year.

    //Map/Process Inputs to Outputs

    //Display the Outputs
    
    cout<<"You ETA is: "<<eta<<endl<<"Amount of meters traveled per year: "<<kpy
    <<endl<<"Distance from destination in Meters: "<<meters<<endl
    <<"Distance from destination in Miles: "<<miles;
    //Exit Program!
    return 0;
}


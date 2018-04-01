/* 
 * File:   main.cpp
 * Author: Julio A. Mendoza
 * Created on March 31, 2018, 10:30 PM
 *Purpose: To hold all homework and all that is dear. Also, to protect the 
 * bandwidth.
 *         
 */

//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std; //namespace I/O stream library cr

//User libraries would go here.

//Global constants would go here, such as:
//Math, Physics, Science, Conversions, 2-D Arrays Columns
const float GRAVITY = 6.673e-8f; //cm^3/g/sec^2
const float CMMTRS = 0.01f; //Centimeters to meters
const float SLGSGM = 14593.0f; //Slugs to grams
const float MTRSFT = 3.281f; //Meters to feet
const float LBSLUGS = 32.174f; //pounds per slug
const float PI = 3.14f;
//Function Prototypes go here.



//Executions Begin Here!

int main(int argc, char** argv) {
    //Declare Your Variables.
    char x;
    cout << "Type 0 for the ASCII problem." << endl;
    cout << "Type 1 for for the Sum problem." << endl;
    cout << "Type 2 for for the Distance problem." << endl;
    cout << "Type 3 for the Celcius problem." << endl;
    cout << "Type 4 for the Speed Conversion problem." << endl;
    cout << "Type 5 for the Ocean problem." << endl;
    cout << "Type 6 for the Area of circle problem." << endl;
    cout << "Type 7 for the Pennies area." << endl;
    cout << "Type 8 for the Stocks problem." << endl;
    cout << "Type 9 for Mass problem." << endl;
    cin>>x;


    switch (x) {
        case '0':
        {

            //Declare Your Variables.
            char x; //This is what is used to display characters

            //Initialize Variables
            int y = 32; //counter
            x = 32; //Starting point for the characters displayed.
            for (; y < 128; y++) {


                if (y % 16 == 0) {
                    cout << endl;
                }
                cout << x << " ";
                x++;
            }
            //Map/Process Inputs to Outputs

            //Display the Outputs

            //Exit Program!
            return 0;
        }
        case '1':
        {
            //Declare Your Variables.
            int user = 0; //user entered positive integer
            int result = 0; //This adds the numbers and is then used to display it.
            cout << "This program asks for a positive integer and will add all the"
                    "numbers leading to it before displaying the result." << endl;
            cout << "Please enter a positive whole number.-->";
            cin>>user;
            //Map/Process Inputs to Outputs
            for (int x = 0; x > 2; x++) {//loop used to validate number is positive. 
                user *= 1; //Runs various times to be EXTRA sure.
                if (x < 0) {
                    cout << "Invalid input.";
                    return 0;
                }
            }
            for (int x = 0; x <= user; x++) { //This will run up to the user's number.
                result += x; //Add the lop counter to the total.
            }
            cout << "The numbers leading up to your number add up to " << result << ".";
            //Display the Outputs

            //Exit Program!
            return 0;
        }
        case '2':
        {
            //Declare Your Variables.
            float speed = 0.0f; //User entered speed of the vehicle
            int time = 0; //User entered time traveled at 'speed'.
            float distance = 0.0f;
            //Map/Process Inputs to Outputs
            cout << "This program takes in time and speed to give a distance." << endl;
            cout << "Please enter the speed in mph at which you traveled:";
            cin>>speed;
            cout << "Please enter the time in hours for which you traveled:";
            cin>>time;
            //Display the Outputs
            cout << "Hour          Miles Traveled" << endl << ""
                    "----------------------------" << endl;

            for (int x = 1; x <= time; x++) {
                distance = speed*x;
                cout << " " << x << "                 " << distance << endl;
            }
            //Exit Program!
            return 0;
        }
        case '3':
        {
            //Declare Your Variables.
            float table = 0.0f;
            //Initialize Variables

            //Map/Process Inputs to Outputs
            cout << "This program displays a chart of Celsius to Fahrenheit." << endl;
            cout << "Celsius          Fahrenheit\n"
                    "--------------------------\n";
            for (; table <= 30; table++) {
                cout << table << "                 " << (9 / (5 / table)) + 32 << endl;
            }
            //Display the Outputs

            //Exit Program!
            return 0;
        }
        case '4':
        {
            //Declare Your Variables.
            float kph = 10.0f;

            cout << "This program displays a chart of KPH to MPH." << endl;
            cout << "KPH          MPH" << endl;
            cout << "-----------------" << endl;
            for (; kph <= 120; kph += 10) {
                cout << fixed << setprecision(0) << kph;
                cout << fixed << setprecision(2) << "          " <<
                        kph * 0.6214 << endl;

            }


            //Map/Process Inputs to Outputs

            //Display the Outputs

            //Exit Program!
            return 0;
        }
        case'5':
        {
            //Declare Your Variables.
            float rise = 3.1f; //rising ocean levels per year in millimeter.
            float years = 25.0f; // the numbers of years the ocean will rise
            float result; //the amounf of millimeters the ocean has risem
            //Map/Process Inputs to Outputs
            result = years*rise;
            cout << "After " << years << " years, the ocean will have risen " << result
                    << " millimeters." << endl;



            //Display the Outputs

            //Exit Program!
            return 0;
        }
        case'6':
        {
            //Declare Your Variables.
            cout << "This program outputs a table of circles." << endl;
            int circle = 1;
            int radius = 1;
            cout << "Circle          Radius          Circumference\n"
                    "---------------------------------------------" << endl;
            //Map/Process Inputs to Outputs
            for (; circle <= 8; circle++) {
                cout << fixed << setprecision(2) << setw(4) << circle
                        << "               " << setw(4) << radius << "             " <<
                        setw(4) << PI * (radius * radius) << endl;
                radius *= 2;
            }

            //Display the Outputs

            //Exit Program!
            return 0;
        }
        case '7':
        {
            cout << "This program keeps doubling an amount." << endl;
            //Declare all Variables Here
            unsigned int totPay, pyPrDay; //Pennies
            int numDays = 31; //Days within a month
            //Input or initialize values Here
            totPay = 0; //Total Amount
            pyPrDay = 1; //1 penny for the first day.

            //Process/Calculations Here
            cout << fixed << setprecision(2) << showpoint;
            cout << "Day        Pay            Total" << endl;
            for (int day = 1; day <= numDays; day++) {
                cout << setw(2) << day
                        << setw(12) << pyPrDay / 100.0f//This turns it into dollars.
                        << setw(14) << totPay / 100.0f << endl;
                pyPrDay *= 2;
                totPay += pyPrDay;
            }

            //Exit
            return 0;
        }
        case '8':
        {
            //initialize seed
            cout << "This program adds random stock information." << endl;
            srand(static_cast<unsigned int> (time(0)));
            //Declare all Variables Here
            int dolStk, numStk, denStk; //Stock price $ num/den
            int numShrs; //Number of shares
            float valStks; //Value of the stocks in $
            char again; //Continue or not.
            denStk = 8;
            //Process/Calculations Here
            do {
                //Randomly choose the stock price.
                dolStk = rand() % 1000; //0-999
                numStk = rand() % 8; //0-7
                numShrs = rand() % 90 + 10; //10-99
                //calculate the stock value
                valStks = numShrs * (dolStk + static_cast<float> (numStk) / denStk);
                //display outputs
                cout << fixed << setprecision(2) << showpoint;
                cout << "The number of shares of stock = " << numShrs << endl;
                cout << "The value of the stock/share = $" << dolStk << " " << numStk <<
                        "/" << denStk << endl;
                cout << "The total value of the stock = $" << valStks << endl;
                //Prompt user to see if they want to continue.
                cout << "\nWould you like to continue? Y/N" << endl;
                cin>>again;
            } while (again == 'Y' || again == 'y');
            //Output Located Here
            //Exit
            return 0;
        }
        case '9':
        {
            //Declare all Variables Here
            cout << "This program calculates your weight in Slugs." << endl;
            cout << "Enter your mass.-->";
            float myMass, msEarth, rEarth, myWt, myWtCnv;
            //Input or initialize values Here
            myMass = 0; //6 Slugs
            cin>>myMass;
            myWtCnv = myMass*LBSLUGS;
            msEarth = 5.972e27f; //grams
            rEarth = 6.371e6f; //meters
            //Process/Calculations Here
            myWt = GRAVITY * CMMTRS * CMMTRS * CMMTRS *
                    myMass * msEarth * MTRSFT
                    / (rEarth * rEarth);
            //Output Located Here
            cout << myMass << " slugs = " << myWt << " lbs" << endl;
            cout << myMass << " slugs = " << myWtCnv << " lbs" << endl;

            //Exit
            return 0;
        }
    }
    //Initialize Variables

    //Map/Process Inputs to Outputs

    //Display the Outputs

    //Exit Program!
    return 0;
}


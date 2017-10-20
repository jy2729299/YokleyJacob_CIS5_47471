/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 18, 2017, 3:47 PM
 * Purpose: Displays a table of the number of mm's the ocean's level 
 * has risen for the next 25 years
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //For setprecision and setwidth/height
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const float LVLRATE = 1.5;   //Rate in mm/year that the ocean level rises

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    unsigned short years = 25;   //Number of years to be shown
    float level;                 //To store and print the new level

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"The following table shows how many millimeters the ocean will have\nrisen in the next 25 years."<<endl;
    cout<<"Year                  Amount Risen (mm)\n"
            "========================================"<<endl;

    //Re-Display Inputs and write the Outputs
    //Counter runs loop 25 times (each count represents a year) and each time the ocean level increases by the rate
    for(int count = 1; count <= 25; count++){
        level += LVLRATE;
        cout<<setprecision(1)<<fixed;
        cout<<right<<setw(4)<<count<<setw(35)<<level<<endl;
    }
  
    //Exit function main, end of program
    return 0;
}

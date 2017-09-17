/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 17, 2017, 11:07 AM
 * Purpose: Calculate mpg of a car that holds 15 gallons of gasoline and can travel
 * 375 miles before refueling.
 */

//System Libraries
#include <iostream>  //I/O Stream Library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    short tank = 15;          //tank size in gallons
    short miles = 375;         //miles traveled before refueling
    float mpg = miles/tank;    //mpg calculated by dividing miles driven by gallons of gas used   

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"This car can be driven "<<miles<<" miles before emptying the "<<tank<<" gallon tank."<<endl;
    cout<<"Therefore, the car has a mpg of "<<mpg<<"."<<endl;
  
    //Exit function main, end of program
    return 0;
}

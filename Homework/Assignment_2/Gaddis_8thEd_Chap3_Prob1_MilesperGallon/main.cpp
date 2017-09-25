/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 2:49 PM
 * Purpose: To calculate a user's car's gas mileage using user inputs
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
    int tank;               //amount of gas held in gallons
    int miles;              //miles driven before refueling
    float mpg;   //mpg calculated by dividing miles driven by gallons

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the number of gallons your gas tank holds: "<<endl;
    cin>>tank;
    cout<<"Enter the number of miles that can be driven before refueling: "<<endl;
    cin>>miles;
    
    mpg = static_cast<float>(miles)/(tank);
    
    cout<<"MPG: "<<mpg<<" miles/gallon"<<endl;

    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

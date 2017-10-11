/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on August 28, 2017, 10:18 AM
 * Purpose: C++ Template
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //To truncate decimal places for convenience
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float weight, height, BMI;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter your weight in pounds: "<<endl;
    cin>>weight;
    cout<<"Enter your height in inches"<<endl;
    cin>>height;
    
    BMI = weight * (703/(height*height));
    cout<<setprecision(1)<<fixed;      //Manipulators. Sets at fixed floating point notation to 1 decimal
    cout<<"Your BMI is "<<BMI<<endl;

    //Re-Display Inputs and write the Outputs
    if (BMI > 25)
        cout<<"Your BMI is considered overweight."<<endl;
    else if (BMI <=25 && BMI >= 18.5)           //&& (and) statement includes TWO expressions and checks if BOTH are true
        cout<<"Your BMI is considered optimal."<<endl;
    else
        cout<<"Your BMI is considered underweight."<<endl;
  
    //Exit function main, end of program
    return 0;
}

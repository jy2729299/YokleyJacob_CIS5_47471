/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 17, 2017, 11:26 AM
 * Purpose: Calculate the average of 5 numbers
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
    short num1 = 28;         //initializing each number as a variable
    short num2 = 32;
    short num3 = 37;
    short num4 = 24;
    short num5 = 33;
    float sum = num1+num2+num3+num4+num5;   //calculate sum of all variables
    float avg = sum/5;                       //average = sum/5

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<num1<<" + "<<num2<<" + "<<num3<<" + "<<num4<<" + "<<num5<<" = "<<sum<<endl;
    cout<<sum<<"/5 = "<<avg<<endl;
    cout<<"Average = "<<avg<<endl;
  
    //Exit function main, end of program
    return 0;
}

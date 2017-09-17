/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 17, 2017, 11:13 AM
 * Purpose: Assuming the ocean's level is currently rising at about 1.5 millimeters per year,
 * write a program that displays the number of mm higher than the current level that
 * the ocean's level will be in 5, 7, and 10 years
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
    float lvlrate = 1.5;         //rate at which the ocean level rises in mm/year

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"Ocean levels are rising at approximately "<<lvlrate<<" millimeters per year."<<endl;
    cout<<"In 5 years, ocean levels will be "<<lvlrate*5<<" millimeters higher than currently."<<endl;
    cout<<"In 7 years, ocean levels will be "<<lvlrate*7<<" millimeters higher than currently."<<endl;
    cout<<"In 10 years, ocean levels will be "<<lvlrate*10<<" millimeters higher than currently."<<endl;
    //Exit function main, end of program
    return 0;
}

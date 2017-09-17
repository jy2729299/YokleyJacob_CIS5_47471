/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 17, 2017, 10:55 AM
 * Purpose: Determine amount of bytes used by the data types char, int, float, and double
 * using only a program.
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

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"Char size: "<<sizeof(char)<<" byte"<<endl;         //sizeof() command utilized to determine size of a data type
    cout<<"Int size:"<<sizeof(int)<<" bytes"<<endl;
    cout<<"Float size: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"Double size: "<<sizeof(double)<<" bytes"<<endl;
    //Exit function main, end of program
    return 0;
}

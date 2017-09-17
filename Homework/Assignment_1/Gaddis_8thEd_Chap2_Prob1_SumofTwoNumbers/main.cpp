/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 14, 2017, 7:37 AM
 * Purpose: Write a program that stores the integers 50 and 100 
 * in variables, and stores the sum of these two in a variable named total.
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
    int x = 50;        //stores integer 50 in a variable
    int y = 100;       //stores integer 100 in a variable
    int total = x+y;   /*adds the two variables together
                        * and stores the sum*/

    //Variable Initialization

    //Process Mapping - Inputs to Outputs
    cout<<x<<" + "<<y<<" = "<<total<<endl;
    //Re-Display Inputs and write the Outputs

    //Exit function main, end of program
    return 0;
}

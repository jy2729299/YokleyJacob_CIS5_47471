/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 14, 2017, 8:03 AM
 * Purpose: Write a program that displays a diamond pattern
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
    char x = '*';   //creating a variable that stores * to be used as a building block

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"What's a girl's best friend?"<<endl;   //Outputting diamond to user 
    cout<<"   "<<x<<"   "<<endl;                  //x marks where a * will appear
    cout<<"  "<<x<<x<<x<<"  "<<endl;                //Spaces are used to create shape
    cout<<" "<<x<<x<<x<<x<<x<<" "<<endl;
    cout<<x<<x<<x<<x<<x<<x<<x<<endl;
    cout<<" "<<x<<x<<x<<x<<x<<" "<<endl;
    cout<<"  "<<x<<x<<x<<"  "<<endl;  
    cout<<"   "<<x<<"   "<<endl;
  
    //Exit function main, end of program
    return 0;
}

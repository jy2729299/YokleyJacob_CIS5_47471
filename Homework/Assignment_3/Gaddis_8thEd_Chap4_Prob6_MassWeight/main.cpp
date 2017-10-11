/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 11, 2017, 1:54 PM
 * Purpose: To calculate an object's weight in newtons and determine if it's too heavy or too light
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
    float weight, mass;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the object's mass: "<<endl;
    cin>>mass;
    
    weight = mass*9.8;

    //Re-Display Inputs and write the Outputs
    cout<<"Weight = "<<weight<<" newtons"<<endl;
    if (weight > 1000)
        cout<<"Object is too heavy. Try a different one."<<endl;
    else if (weight < 10)
        cout<<"Object is too light. Try a different one."<<endl;
  
    //Exit function main, end of program
    return 0;
}

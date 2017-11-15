/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 13, 2017, 4:04 PM
 * Purpose: Kinetic Energy calculations
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cmath>     //For power expression
#include <iomanip>   //For cleaning up decimals
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
float KEcalc(float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float mass, vlcty, KE;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the mass of the object in kilograms: ";
    cin>>mass;
    cout<<endl;
    cout<<"Enter the velocity of the object in m/s: ";
    cin>>vlcty;
    cout<<endl;
    
    KE = KEcalc(mass, vlcty);

    //Re-Display Inputs and write the Outputs
    cout<<setprecision(3)<<fixed;
    cout<<"KE = "<<KE<<" Joules"<<endl;
  
    //Exit function main, end of program
    return 0;
}

float KEcalc(float mass, float vlcty){
    float KE = 0.5*(mass*(pow(vlcty, 2)));
    
    return KE;
}
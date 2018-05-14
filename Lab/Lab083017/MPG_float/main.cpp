/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on August 30, 2017, 10:40 AM
 * Purpose: Calculate MPG
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
    float  tnkGas;   //Number of Gallons to fill your tank
    float mlsDrvn;   //Miles driven on a tank of gas
    float     mpg;   //Miles per gallon
    //Variable Initialization
    cout<<"This program calculates miles per gallon."<<endl;
    cout<<"Input number of gallons held in your car tank:"<<endl;
    cin>>tnkGas;
    cout<<"Input miles driven until the tank emptied:"<<endl;
    cin>>mlsDrvn;
    
    //Process Mapping - Inputs to Outputs
    mpg=mlsDrvn/tnkGas;
    
    //Re-Display Inputs and write the Outputs
    cout<<mpg<<" mpg = "<<mlsDrvn<<" miles / "<<tnkGas<<" gallons"<<endl;
    //Exit function main, end of program
    return 0;
}

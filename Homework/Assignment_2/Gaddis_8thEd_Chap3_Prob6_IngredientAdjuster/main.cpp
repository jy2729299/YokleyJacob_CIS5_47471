/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 4:59 PM
 * Purpose: Scale a cookie recipe's ingredients to fit a user's specified number of cookies
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
    float rsugar = 1.5/48;     //Ratios for all ingredients to 48 cookies
    float rbutter = 1.00/48;   //Using 1.00 makes rbutter work properly for some reason
    float rflour = 2.75/48;
    float cookies;             //User defined cookie quantity

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"How many cookies do you want to make?"<<endl;
    cin>>cookies;
    cout<<"To make "<<cookies<<" cookies, you will need: "<<endl;
    cout<<rsugar*cookies<<" cups of sugar"<<endl;    //ratio is multiplied by entered quantity to get cups of ingredients
    cout<<rbutter*cookies<<" cups of butter"<<endl;
    cout<<rflour*cookies<<" cups of flower"<<endl;

    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

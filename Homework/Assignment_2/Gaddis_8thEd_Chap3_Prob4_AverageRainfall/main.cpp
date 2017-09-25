/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 4:35 PM
 * Purpose: Calculates the average rainfall for three months
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //For setprecision to clean up the average
#include <string>    //For string inputs (months)
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    string month1, month2, month3;     //names of each month
    float rain1, rain2, rain3;         //rainfall in inches
    float avg;                         //average rainfall store here

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter a month: "<<endl;     //taking string inputs for each month
    cin>>month1;
    cout<<"How much did it rain in inches during "<<month1<<"?"<<endl;
    cin>>rain1;
    cout<<"Enter another month: "<<endl;
    cin>>month2;
    cout<<"How much did it rain in inches during "<<month2<<"?"<<endl;
    cin>>rain2;
    cout<<"Enter one more month: "<<endl;
    cin>>month3;
    cout<<"How much did it rain in inches during "<<month3<<"?"<<endl;
    cin>>rain3;
    
    avg = (rain1 + rain2 + rain3)/3;  //averaging rainfall inputs

    //Re-Display Inputs and write the Outputs
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is "<<avg<<" inches."<<endl;
    
  
    //Exit function main, end of program
    return 0;
}

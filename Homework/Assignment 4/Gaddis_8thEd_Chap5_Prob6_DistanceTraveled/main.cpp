/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on August 28, 2017, 10:18 AM
 * Purpose: Display distance vehicle has traveled for each hour of a time period
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //For setw
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    int speed, hours;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"How fast have you been traveling in mph?"<<endl;
    cin>>speed;
    cout<<"How many hours have you been traveling?"<<endl;
    cin>>hours;
    
    cout<<"Hour     Distance Traveled"<<endl;
    cout<<"--------------------------"<<endl;
    
    for(int count = 1; count <= hours; count++){
        cout<<right<<setw(4)<<count<<setw(21)<<count*speed<<endl;
    }

    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

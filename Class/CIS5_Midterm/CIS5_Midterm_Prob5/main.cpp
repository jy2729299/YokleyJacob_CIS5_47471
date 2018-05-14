/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 27, 2017, 2:33 PM
 * Purpose: Midterm Problem 5
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //For formatting cash properly
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float salary, rate, hours;

    //Variable Initialization
    int stime = 40;     //Straight time for first 40 hours
    int dtime = 50;     //Double time for work over 50 hours
    
    //Process Mapping - Inputs to Outputs
    cout<<"Enter hours worked:"<<endl;
    cin>>hours;
    cout<<"Enter the pay received per hour:"<<endl;
    cin>>rate;
    
    //Re-Display Inputs and write the Outputs
    if (hours >= 1 && hours <= stime){
        salary = rate * hours;
    }
    else if (hours > stime && hours < dtime){
        salary = (rate * stime) + ((hours - stime) * rate * 1.5);
    }
    else if (hours >= dtime){
        salary = (rate * dtime) + ((hours - dtime)*rate*2);
    }
    
    cout<<"Gross pay is: $"<<salary<<endl;
     
    //Exit function main, end of program
    return 0;
}

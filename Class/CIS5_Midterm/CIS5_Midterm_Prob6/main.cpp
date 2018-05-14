/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 27, 2017, 10:25 PM
 * Purpose: Midterm Problem 6
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
    float x, n, power, fctrl;
    float sum = 0;

    //Variable Initialization
    float sign = -1;
  
    //Process Mapping - Inputs to Outputs
    cout<<"This program calculates the sum of this sequence: \n"
            "x - x^3/3 + x^5/5! - x^7/7! + ..."<<endl;
    cout<<"Enter the x value: "<<endl;
    cin>>x;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;

    //Re-Display Inputs and write the Outputs
    for (int counter = 1; counter <=n; counter += 2){
        power = 1*counter;
        fctrl = 1*counter;
        
        for (int fact = counter; fact >= 1; fact--){
            fctrl *=- fact;
        }
        sign = -1*sign;
        sum += sign * (x*power)/(fctrl);
    }
    cout<<"Sum = "<<x<<endl;
  
    //Exit function main, end of program
    return 0;
}

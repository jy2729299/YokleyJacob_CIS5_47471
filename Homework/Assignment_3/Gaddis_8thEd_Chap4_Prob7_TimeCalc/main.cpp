/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 11, 2017, 8:33 AM
 * Purpose: Write a program that converts seconds to days, hours, or minutes
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //For general cleanliness with decimals
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const float DAY = 86400;
const float HOUR = 3600;
const float MINUTE = 60;
const float SECOND = 1;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float time;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter a time in seconds: "<<endl;
    cin>>time;
    
    /*The problem asks to convert seconds to days, hours, minutes, or leave it at seconds
     *  if the time entered is greater than the number of seconds in a day, hour, or minute
     */
    cout<<setprecision(2)<<fixed;
    
    if (time >= DAY)      //If the seconds entered are greater than the seconds in a day, then the day conversion is done
        cout<<time<<" seconds is equal to "<<time/DAY<<" day(s)."<<endl;
    else if (time >= HOUR)    //Else if statements repeat the if statement except for hours, minutes, and seconds
        cout<<time<<" seconds is equal to "<<time/HOUR<<" hour(s)."<<endl;
    else if (time >= MINUTE)
        cout<<time<<" seconds is equal to "<<time/MINUTE<<" minute(s)."<<endl;
    else if (time <60 && time > 0)
        cout<<"Yes, this is indeed "<<time<<" seconds. Did you really need to convert that?"<<endl;
    else if (time < 0)
        cout<<"Seconds entered must be positive—and I'm positive you're an idiot."<<endl;
    else
        cout<<"You're not a very bright one, are you?"<<endl;
    
    //The program also insults the user if they can't understand that it wants a positive number
    
    
    

    //Re-Display Inputs and write the Outputs
    
  
    //Exit function main, end of program
    return 0;
}

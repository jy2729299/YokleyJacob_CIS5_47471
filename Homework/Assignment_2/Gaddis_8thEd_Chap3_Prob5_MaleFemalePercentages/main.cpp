/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 8:32 PM
 * Purpose: Calculates percentage of males and females in a class
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //For cleaning up final percentage
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float males;      //gender quantities
    float females;
    float total;
    float percm;    //percentage values
    float percf;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"How many males are in the class?"<<endl;
    cin>>males;
    cout<<"How many females are in the class?"<<endl;
    cin>>females;
    
    total = males + females;        //Processing total of classmates and percentages
    
    percm = (males/total)*100;
    percf = (females/total)*100;

    //Re-Display Inputs and write the Outputs
    cout<<setprecision(1)<<fixed;     //Cleans up percentage to only one decimal place
    cout<<percm<<"% of students in the class are male."<<endl;
    cout<<percf<<"% of students in the class are female."<<endl;
  
    //Exit function main, end of program
    return 0;
}

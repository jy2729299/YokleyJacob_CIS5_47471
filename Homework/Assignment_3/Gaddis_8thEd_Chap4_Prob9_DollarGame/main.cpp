/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 11, 2017, 12:59 PM
 * Purpose: Change-counting game that takes user input of coins required to make a dollar
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //For setprecision() and fixed
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const float QUARTER = 0.25;
const float DIME = 0.10;
const float NICKEL = 0.05;
const float PENNY = 0.01;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    unsigned short quarter, dime, nickel, penny;  //For storing quantity of coins
    float vquart, vdime, vnick, vpenny, sum;    //For storing total values of coins after being multiplied with quantity

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<setprecision(2)<<fixed;   //To guarantee that cash values stay at 2 decimal places
    
    cout<<"This game asks for you to enter the number of coins required to make exactly one dollar."<<endl;
    cout<<"The program will ask you to enter a number of quarters, dimes, nickels, and pennies."<<endl;
    cout<<"The goal is to select a number for all these coins that would make them add up to one dollar in total."<<endl;
    cout<<"You lose if you go over or under one dollar."<<endl;
    cout<<"Hit enter when ready to start!"<<endl;
    cin.get();        //Function for taking enter as an input to continue
    
    cout<<"How many quarters do you want to use?"<<endl;
    cin>>quarter;
    cout<<"Dimes?"<<endl;
    cin>>dime;
    cout<<"Nickels?"<<endl;
    cin>>nickel;
    cout<<"Pennies?"<<endl;
    cin>>penny;
    
    vquart = quarter*QUARTER;  //Multiplies quantities with coin values
    vdime = dime*DIME;
    vnick = nickel*NICKEL;
    vpenny = penny*PENNY;
    sum = vquart + vdime + vnick + vpenny;

    //Re-Display Inputs and write the Outputs
    if (sum == 1.00)
        cout<<"Congratulations! You win!"<<endl;
    else
        cout<<"Game Over. Your total was $"<<sum<<" Try again!"<<endl;
  
    //Exit function main, end of program
    return 0;
}

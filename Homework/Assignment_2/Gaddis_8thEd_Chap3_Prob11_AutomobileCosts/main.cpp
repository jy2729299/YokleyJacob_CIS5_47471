/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 9:08 PM
 * Purpose: Calculate total monthly and annual costs of owning an automobile
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //important for properly truncating cash value to two decimals
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float loan, insrnce, gas, oil, tires, mntnce, totmnth, annual;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"How much do you pay on loans each month?"<<endl;
    cin>>loan;
    cout<<"How much do you pay on insurance each month?"<<endl;
    cin>>insrnce;
    cout<<"How much do you pay on gas each month?"<<endl;
    cin>>gas;
    cout<<"How much do you pay on oil each month?"<<endl;
    cin>>oil;
    cout<<"How much do you pay on tires each month?"<<endl;
    cin>>tires;
    cout<<"How much do you pay on maintenance each month?"<<endl;
    cin>>mntnce;
    
    totmnth = loan + insrnce + gas + oil + tires + mntnce;  //add all user inputs for total monthly payment
    annual = totmnth*12;    //monthly cost multiplied by 12 months = annual payment

    //Re-Display Inputs and write the Outputs
    cout<<"Total monthly payment: $"<<totmnth<<" per month"<<endl;
    cout<<"Total annual payment: $"<<annual<<" per year"<<endl;
  
    //Exit function main, end of program
    return 0;
}

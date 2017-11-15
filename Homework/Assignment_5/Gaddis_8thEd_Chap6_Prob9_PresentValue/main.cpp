/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 13, 2017, 2:32 PM
 * Purpose: Present value equation utilizing functions
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //Money format
#include <cmath>     //For powers
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
float fValue(float, float, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float F2 = 0, i = 0, P2 = 0; //F2 = future value, r = monthly interest rate, P2 = present value
    int t = 0;        //t = number of months
    //Added a 2 to some variables so that the program that contains the both
    //of these programs doesn't freak out
    
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the present value of the account: $";
    cin>>P2;
    cout<<endl;
    
    cout<<"Enter the monthly interest rate: ";
    cin>>i;
    cout<<endl;
    
    cout<<"Enter the number of months you plan on storing your money: ";
    cin>>t;
    cout<<endl;
    
    F2 = fValue(P2, i, t);
    //Re-Display Inputs and write the Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"You will have $"<<F2<<" after "<<t<<" months"<<endl;
    
    //Exit function main, end of program
    return 0;
}

float fValue(float P2, float i, int t){
    float F2;
    i *= 0.01;
    i += 1;
    F2 = P2*(pow(i, t));
    
    return F2;
    
}
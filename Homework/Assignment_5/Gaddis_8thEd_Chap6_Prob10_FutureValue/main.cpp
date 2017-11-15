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
float pValue(float, float, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float F = 0, r = 0, P = 0; //F = future value, r = annual interest rate, P = present value
    int n = 0;        //n = number of years

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the amount of money you want to save in the account: $";
    cin>>F;
    cout<<endl;
    
    cout<<"Enter the annual interest rate: ";
    cin>>r;
    cout<<endl;
    
    cout<<"Enter the number of years you plan on storing your money: ";
    cin>>n;
    cout<<endl;
    
    P = pValue(F, r, n);
    //Re-Display Inputs and write the Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"You must deposit $"<<P<<" in order to save $"<<F<<" in "<<n<<" years"
            <<endl;
    
    //Exit function main, end of program
    return 0;
}

float pValue(float F,float r,int n){
    float P;
    P = F / (pow(1 + (r*0.01),n));
    
    return P;
    
}
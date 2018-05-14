/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 23, 2017, 8:15 AM
 * Purpose: All the ways to write a function
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cmath>     //Math library
#include <iomanip>   //Format library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const int CNVPRCT = 100;    //Conversion to percent

//Function Prototypes
float save1(float, float, int);
float save2(float, float, int);
float save3(float, float, int);
float save4(float, float, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float balance, intRate;
    int nCmPrds;

    //Variable Initialization
    balance = 100;     //$100 initial balance
    intRate = 8.0f/CNVPRCT;  //percentage interest per compounding period
    nCmPrds = 0.72/intRate;//By the rule of 72, how long it takes to double pv

    //Re-Display Inputs and write the Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Initial Balance = $"<<balance<<endl;
    cout<<"Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of compounding periods - Rule of 72 = "
            <<nCmPrds<<" Years"<<endl;
    cout<<"Savings function 1 - Power Function   = $"
            <<save1(balance, intRate, nCmPrds)<<endl;
    cout<<"Savings function 2 - Log/Exp Function = $"
            <<save2(balance, intRate, nCmPrds)<<endl;
    cout<<"Savings function 3 - For-loop         = $"
            <<save3(balance, intRate, nCmPrds)<<endl;
    cout<<"Savings function 4 - Recursive call   = $"
            <<save4(balance, intRate, nCmPrds)<<endl;
    //Exit function main, end of program
    return 0;
}

//000000011111111111111111111111222222222222222222222333333333333333333334444444
//345678901234657890123465789012345678901234567890123465789012345678901234657890
//                            Savings function
//Description:
//     Simple compound interest function where FV = PV*(1+i)^n
//Inputs:
//     pv - present value
//      i - interest rate  %/100
//      n - compounding periods  yrs
//Output:
//     fv - future value
//000000011111111111111111111111222222222222222222222333333333333333333334444444
//345678901234657890123465789012345678901234567890123465789012345678901234657890

float save2(float pv, float i, int n){
    return pv*exp(n*log(1+i));
}

float save1(float pv, float i, int n){
    return pv*pow(1+i, n);
}

float save3(float pv, float i, int n){
    for(int year = 1; year <= n; year++){
        pv*=(1+i);
    }
    return pv;
}

float save4(float pv, float i, int n){
    if(n<=0)return pv;
    return save4 (pv, i, n-1)*(1+i);
}
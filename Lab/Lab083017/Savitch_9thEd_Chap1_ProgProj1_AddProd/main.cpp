/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on August 30, 2017, 10:05 AM
 * Purpose:  First Homework Problem
 *           Adding and Multiplying
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    short op1; //Operand 1 -32768 to 32767 = (-2^15,2^15-1)
    short op2; //Operand 1 -32768 to 32767 = (-2^15,2^15-1)
    int   add; //Add the result of adding op1 and op2 -> +- 2 billion (-2^31,2^31-1)
    int  prod; //Add -> +-2 billion (-2^31,2^31-1)
    //Input or initialize values Here
    op1 = 10000;  //Example of literal initialization
    
    //Input Data/Variables
    cout<<"This program adds and multiplies 2 variables."<<endl;
    cout<<"The first variable is initialized to 10000."<<endl;
    cout<<"Input the second value with a range of -32768 to 32767 = (-2^15,2^15-1)"<<endl;
    cin>>op2;
    //Process/Calculations Here
    add = op1 + op2;
    prod = op1 * op2;
    
    //Output Located Here
    cout<<op1<<" + "<<op2<<" = "<<add<<endl;
    cout<<op1<<" * "<<op2<<" = "<<prod<<endl;

    //Exit
    return 0;
}

/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 10, 2017, 5:05 PM
 * Purpose: Use the conditional operator to determine which of two numbers is
 * the smaller and which is the larger
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
    int x, y;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter two numbers: "<<endl;
    cin>>x;
    cin>>y;
    
    
    //Re-Display Inputs and write the Outputs
    cout<<(x < y ? x : y)<<" is the smaller number and "<<(y>x?y:x)<<" is the greater."<<endl;
    // FIRST EXPRESSION TO TEST ? SECOND EXPRESSION EXECUTES IF FIRST IS TRUE : THIRD EXPRESSION EXECUTES IF FIRST IS FALSE
    //Conditional operator essentially compacts an if/else statement into a more efficient form
    //To determine the smaller number, if the first number (x) is less than y, then it will output x
    //To determine the greater number, if the second number (y) is greater than x, then it will output y
    
    //Exit function main, end of program
    return 0;
}

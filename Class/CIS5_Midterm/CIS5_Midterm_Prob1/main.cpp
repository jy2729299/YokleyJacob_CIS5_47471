/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 24, 2017, 10:07 AM
 * Purpose: Midterm problem 1
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
    int input;     //Number the user will input
    //Variable Initialization
    
    //Process Mapping - Inputs to Outputs
    cout<<"Enter a number: "<<endl;
    cin>>input;
    cout<<endl;
    
    //Re-Display Inputs and write the Outputs
    
    /*Makes a new variable representing a "row" (a line) and sets it equal to
     the user's number. The other statements will make the row number decrement
     to 1, so a 5 will decrement 5-4-3-2-1. Before it starts a new line, the 
     loop runs another for loop that now has the same expressions for a column
     expression, which effects the indentation and the second number on each
     line. If row is equal to column, then the number they are equal to (which
     changes each decrement) will print. Otherwise, a space will print. This
     creates the first leg of the x. However, a pattern needs to be found that
     will print the other number on each line, which is represented by the 
     second expression, column == (input +1) - row. Row only decrements once
     before the column loop starts, so if input is 5 and row has decremented
     1 time, column will print a space until it is equal to (5+1)-4, which is 2,
     where it will then print a number. This pattern continues until the outer
     row loop is done, creating the x.*/
    for(int row = input; row >= 1; row--){
        for(int column = input; column >= 1; column--){
            if(row == column || column == (input + 1) - row){
                cout<<column;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    
  
    //Exit function main, end of program
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 4:31 PM
 * Purpose: Write a program that can be used as a math tutor for a young student
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //For rand() and srand()
#include <ctime>     //For time function
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    short num1, num2, sum;    //variables for two random numbers and the sum
    char a;                   //only used for taking input to get answer
    unsigned seed = time(0);   //used to get unique random numbers
    srand(seed);

    //Variable Initialization
    num1 = (rand() %(999 - 100 + 1)) + 100; //using range limiting formula on page 128
    num2 = (rand() %(999 - 100 + 1)) + 100; 
    
    sum = num1 + num2;
  
    //Process Mapping - Inputs to Outputs
    cout<<" "<<num1<<endl;   //displaying problem
    cout<<"+"<<num2<<endl;
    cout<<"____"<<endl;
    
    cout<<"Enter any key to reveal the answer."<<endl;
    cin>>a;        //computer patiently waits for user to enter a key to get answer
    cout<<"\n";
    cout<<num1<< " + "<<num2<<" = "<<sum<<endl;
    
           

    //Re-Display Inputs and write the Outputs
    //Exit function main, end of program
    return 0;
}

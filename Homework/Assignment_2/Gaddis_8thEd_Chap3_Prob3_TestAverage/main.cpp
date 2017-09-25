/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 3:58 PM
 * Purpose: Write a program that calculates the average of five test scores
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //required for setprecision
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float score1, score2, score3, score4, score5; //variables for test scores
    float avg;          //variable for average

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the first test score: "<<endl;
    cin>>score1;
    cout<<"Enter the second test score: "<<endl;
    cin>>score2;
    cout<<"Enter the third test score: "<<endl;
    cin>>score3;
    cout<<"Enter the fourth test score: "<<endl;
    cin>>score4;
    cout<<"Enter the fifth test score: "<<endl;
    cin>>score5;
    
    avg = (score1 + score2 + score3 + score4 + score5)/5;  //modifies avg variable with user inputs
    
    //Re-Display Inputs and write the Outputs
    cout<<setprecision(1)<<fixed<<endl;    //sets decimal point notation to only one decimal
    cout<<"Test average: "<<avg<<endl;
  
    //Exit function main, end of program
    return 0;
}

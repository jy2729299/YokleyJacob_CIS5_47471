/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 28, 2017, 6:57 PM
 * Purpose: Use an array to find largest and smallest values
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
    const int SIZE = 10;
    int nums[SIZE];
    int lowest, highest, compare;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    for(int i = 0; i < SIZE; i++){
        cout<<"Enter number "<<i+1<<": "<<endl;
        cin>>nums[i];
    }
    
    lowest = nums[0];
    highest = nums[0];
    
    for(int i = 1; i < SIZE; i++){
        compare = nums[i];
        
        if(compare <lowest){
            lowest = compare;
        }
        if(compare > highest){
            highest = compare;
        }
    }
    
    cout<<"Smallest value: "<<lowest<<endl;
    cout<<"Largest value: "<<highest<<endl;
    

    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}
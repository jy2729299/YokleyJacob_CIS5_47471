/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 18, 2017, 9:51 AM
 * Purpose: Sum of all numbers up to a certain amount
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
    int input, sum;   //Number of the user's choosing and resulting sum
    
    //Variable Initialization
  
    
    //Process Mapping - Inputs to Outputs
    cout<<"Enter a positive integer: ";
    cin>>input;
    
    //If the input is less than 0, the program will keep asking for the user to reenter their number
    while (input < 0){
        cout<<"I said a POSITIVE integer...";
        cin>>input;  
    }

    //Re-Display Inputs and write the Outputs
    //Initializes a counter at 1 and keeps adding 1 to it after each iteration up until the counter is equal to the user input
    for (int count = 1; count <= input; count++){
        //Adds the count to the sum before looping again (1 is first, then counter increases to 2 and is added to the sum of 1, etc.)
        sum += count;
    }
    cout<<"The sum of all numbers from 1 to "<<input<<" = "<<sum<<endl;
    
    //This was another problem that took me longer to understand than I'd like to admit
  
    //Exit function main, end of program
    return 0;
}

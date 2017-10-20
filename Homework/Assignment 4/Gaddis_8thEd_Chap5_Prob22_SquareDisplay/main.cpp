/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 19, 2017, 3:50 PM
 * Purpose: Displays a square with the same number of rows and columns as the user requests
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
    int size;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter a number no greater than 15 for the size of your square"<<endl;
    cin>>size;
    if (size < 1){
        size = 1;
    }
    else if (size > 15){
        size = 15;
    }
    //Re-Display Inputs and write the Outputs
    
    /* A nested loop is necessary to make this work. Essentially the first loop has 
     a counter that causes the loop to stop once it reaches the size the user entered.
     For each loop, another loop runs that prints X's right next to one another for
     every count. Once that count is full, the first loop ends by making a new line,
     and then repeats, resulting in a square.
    */
    for (int row = 0; row < size; row++){
        for (int column = 0; column < size; column++){
            cout<<"X";
        }
        cout<<endl;
    }
  
    //Exit function main, end of program
    return 0;
}

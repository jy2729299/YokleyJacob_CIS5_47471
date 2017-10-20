/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 20, 2017, 12:32 PM
 * Purpose: Display two triangle patterns using loops
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

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    
    /*First triangle: a plus displays by a multiple of row1, which increases after
     the number of pluses on a line equals the value of row1, and then a new line prints.
     */
    
    for (int row1 = 0; row1 < 10; row1++){
        for(int col1 = 0; col1 < row1; col1++){
            cout<<"+";
        }
        cout<<endl;
    }
    
    /* Second triangle: Essentially the opposite of triangle one. Everything
     goes DOWN from 10, so the loop logic is the same, but the "direction" is reversed
     by making the rows decrease by 1 from 10 in each loop
     */
    
    for (int row2 = 10; row2 > 0; row2--){
        for(int col2 = 0; col2 < row2; col2++){
            cout<<"+";
        }
        cout<<endl;
    }
    
  
    //Exit function main, end of program
    return 0;
}

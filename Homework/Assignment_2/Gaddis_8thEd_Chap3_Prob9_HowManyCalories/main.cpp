/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 8:51 PM
 * Purpose: C++ Template
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
    short cookies;
    short cals = 300/(30/10);      //30 cookies per 10 servings = 3 cookies per serving
                                   //300 calories per serving (or 3 cookies) = 100 calories
                                   //This equation should map this result to variable cals
    short totcals;
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Be honest—how many cookies have you eaten?"<<endl;
    cin>>cookies;
    
    totcals = cookies*cals;       //calculating total calories by multipling cookies with cals/cookie

    //Re-Display Inputs and write the Outputs
    cout<<"Congratulations! You have ingested "<<totcals<<" calories!"<<endl;
  
    //Exit function main, end of program
    return 0;
}

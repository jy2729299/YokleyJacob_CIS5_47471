/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 19, 2017, 2:49 PM
 * Purpose: Displays calories burned after 5, 10, 15,...30 minutes
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //setw for table
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const float CALORIE = 3.6;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float prod;
    
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Time (mins)      Cals Burned"<<endl;
    cout<<"=============================="<<endl;
    for(float mins = 5; mins <= 30; mins += 5){
        cout<<right<<setw(8)<<mins<<setw(18)<<mins*CALORIE<<endl;
    }

    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

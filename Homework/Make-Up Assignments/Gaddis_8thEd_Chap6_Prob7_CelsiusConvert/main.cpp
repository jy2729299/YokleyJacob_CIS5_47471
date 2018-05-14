/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 14, 2017, 8:23 PM
 * Purpose: Convert Fahrenheit to Celsius using functions so your British 
 * friends can finally understand why you think it's freezing outside
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //Formatting library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
float ftoc (float, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float celsius = 0;
    
    //Process Mapping - Inputs to Outputs
    for (int fahr = 0; fahr <= 20; fahr++){
        cout<<setprecision(2)<<fixed;
        celsius = ftoc(celsius, fahr);
        cout<<fahr<<" f       "<<celsius<<" C"<<endl;
    }
    
    //Exit function main, end of program
    return 0;
}

float ftoc (float c, int f){
    f = static_cast<float>(f);
    c = (5.0*(f - 32))/9.0;
    
    return c;
}
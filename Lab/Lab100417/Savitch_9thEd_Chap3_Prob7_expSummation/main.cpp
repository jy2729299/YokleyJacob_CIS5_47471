/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 4th, 2017, 10:06 AM
 * Purpose: C++ Template
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cmath>     //Used for exp function
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float etox = 1, x, term;
    int counter = 1;
    
    //Variable Initialization
    cout<<"This program approximates e^x."<<endl;
    cout<<"Input a real from 0 to 2"<<endl;
    cin>>x;
    
    //Process Mapping - Inputs to Outputs
    cout<<"e^"<<x<<" with "<<counter<<" term = "<<etox<<endl;
    term = x;
    counter++;
    etox+=term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term *= x/counter++;
    etox += term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term *= x/counter++;
    etox += term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term *= x/counter++;
    etox += term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term *= x/counter++;
    etox += term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term *= x/counter++;
    etox += term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term *= x/counter++;
    etox += term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    term *= x/counter++;
    etox += term;
    cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
    cout<<"e^"<<x<<" with library function = "<<exp(x)<<endl;
    //Exit function main, end of program
    return 0;
}

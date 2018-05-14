/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 14, 2017, 6:01 PM
 * Purpose: Using a function and a loop to see the fall distance of an object at
 * certain times
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cmath>     //Math library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const float GRAVITY = 9.8;

//Function Prototypes
float falldst (float, int, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float dist = 0;

    //Process Mapping - Inputs to Outputs
    for (int time = 1; time <= 10; time++){
        dist = falldst(GRAVITY, time, dist);
        cout<<time<<" s       "<<dist<<" m"<<endl;
    }
    
    //Exit function main, end of program
    return 0;
}

float falldst (float g, int t, float d){
    t = static_cast<float>(t);
    d = .5*(pow((g*t), 2.0));
    
    return d;
}
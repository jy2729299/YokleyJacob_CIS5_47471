/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 10, 2017, 12:07 PM
 * Purpose: Take length and width with functions to display area of a rectangle
 */

//System Libraries
#include <iostream>  //I/O Stream Library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
float getLen();
float getWid();
float getArea(float, float);
void seeData(float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float length, width, area;
    
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    length = getLen();
    
    width = getWid();
    
    area = getArea(length, width);
    
    seeData(length, width, area);

    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

//Get Length function is simple: it asks for the length of a rectangle
//and returns it to main

float getLen(){
    float length;
    cout<<"Enter the length of your rectangle: ";
    cin>>length;
    
    return length;
}

//Same for Get Width

float getWid(){
    float width;
    cout<<"Enter the length of your rectangle: ";
    cin>>width;
    
    return width;
}

//Get Area simply multiplies length and width together
//Length and width from main are entered into len and wid

float getArea(float len, float wid){
    return len*wid;
}

void seeData(float len, float wid, float area){
    cout<<len<<" X "<<wid<<" = "<<area<<endl;
}
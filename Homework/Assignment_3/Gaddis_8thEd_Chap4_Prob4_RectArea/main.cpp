/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 11, 2017, 7:17 AM
 * Purpose: Take length and width for two rectangles, calculate area,
 * display which has the largest and smallest area
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
    float len1, wid1, len2, wid2, area1, area2;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the length of your first rectangle: "<<endl;
    cin>>len1;
    cout<<"Now enter the width: "<<endl;
    cin>>wid1;
    area1 = len1 * wid1;
    
    cout<<"Enter the length of your second rectangle: "<<endl;
    cin>>len2;
    cout<<"Now enter the width: "<<endl;
    cin>>wid2;
    area2 = len2*wid2;

    //Re-Display Inputs and write the Outputs
    if (area1 > area2)          //If this statement is true, displays first message
        cout<<"Rectangle 1 (A = "<<area1<<") has a larger area than rectangle 2 (A = "<<area2<<")."<<endl;
    else if (area2 > area1)     //else if statements are for specfic "other" cases such as area1 instead being less than area2
        cout<<"Rectangle 2 (A = "<<area2<<") has a larger area than rectangle 1 (A = "<<area1<<")."<<endl;
    else if (area1 == area2)
        cout<<"The area of both rectangles is equal to "<<area1<<endl;
        
  
    //Exit function main, end of program
    return 0;
}

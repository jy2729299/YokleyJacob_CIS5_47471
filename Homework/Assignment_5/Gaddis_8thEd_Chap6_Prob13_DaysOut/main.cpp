/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 13, 2017, 2:14 PM
 * Purpose: Use functions to find out how many of your employees hate you
 */

//System Libraries
#include <iostream>  //I/O Stream Library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
int numEmps();
int getDays(int);
float getAvg(int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    int workers, missday;
    float avgmiss;

    //Variable Initialization
    workers = numEmps();
    missday = getDays(workers);
    avgmiss = getAvg(workers, missday);
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"Average number of days absent: "<<avgmiss<<endl;
  
    //Exit function main, end of program
    return 0;
}


int numEmps(){
    int workers;
    cout<<"How many people work in the company?"<<endl;
    cin>>workers;
    while (workers < 1){
        cout<<"How can you run a company without any employees?"<<endl;
        cout<<"For real now, how many employees?"<<endl;
        cin>>workers;
    }
    return workers;
}

int getDays(int workers){
    int missday;
    cout<<"How many days did each employee miss in the past year?"<<endl;
    cin>>missday;
    while (missday < 0){
        cout<<"Negative days? Sounds like an absence overflow."<<endl;
        cout<<"How many days missed in a POSITIVE number?"<<endl;
        cin>>missday;
    }    
    return missday;
}

float getAvg(int workers, int missday){
    float average = static_cast<float>(missday)/static_cast<float>(workers);
    
    return average;
}
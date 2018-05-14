/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 10, 2017, 12:24 AM
 * Purpose: Calculate and display total rainfall for the year, average monthly
 * rainfall, and months with highest and lowest amounts
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //Formatting library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
void srtRain(float [], string [], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    const int SIZE2 = 12;
    float totrain[SIZE2];
    string months[SIZE2] = {"January", "February", "March", "April", "May", 
                             "June", "July", "August", "September", "October", 
                             "November", "December"};
    float total, average, highest, lowest, temp;

    //Variable Initialization
    for(int i = 0; i < SIZE2; i++){
        cout<<"Enter rainfall in inches for "<<months[i]<<": "<<endl;
        cin>>totrain[i];
        while (totrain[i] < 0){
            cout<<"Rainfall can not be negative. Please re-enter: "<<endl;
            cin>>totrain[i];
        }
    }
    cout<<setprecision(2)<<fixed;
    
    //Total rainfall for the year
    for(int i = 0; i < SIZE2; i++){
        total += totrain[i];
    }
    
    //Average of the total rainfall
    average = total/SIZE2;
    
    //Finding the lowest and highest amount of rain
    lowest = totrain[0];
    highest = totrain[0];
    
    for(int i = 1; i < SIZE2; i++){
        temp = totrain[i];
        
        if(temp <lowest){
            lowest = temp;
        }
        if(temp > highest){
            highest = temp;
        }
    }  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<endl;
    cout<<"Total rainfall: "<<total<<" in"<<endl;
    
    cout<<"Average monthly rainfall: "<<average<<" in"<<endl;
    
    srtRain(totrain, months, SIZE2);
    
    //Exit function main, end of program
    return 0;
}

void srtRain(float month[], string monname[], int months){
    int scan, mindex, maxval;
    //string maxmnth;
    
    for (scan = 0; scan < (months - 1); scan++){
        mindex = scan;
        maxval = month[scan];
        //maxmnth = month[scan];
        for(int index = scan + 1; index < months; index++){
            if (month[index] > maxval){
                maxval = month[index];
                //maxmnth = month[index];
                mindex = index;
            }
        }
        month[mindex] = month[scan];
        month[scan] = maxval;
        //month[scan] = maxmnth;
    }
    for (int i = 0; i < months; i++){
        cout<<month[i]<<" "<<monname[i]<<endl;
    }
}

//Can't get the month names working properly with the selection sort, so that's
//kind of a bummer
/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 28, 2017, 7:22 PM
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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    const int SIZE2 = 12;
    float totrain[SIZE2];
    float total, average, highest, lowest, temp;
    

    //Variable Initialization
    for(int i = 0; i < SIZE2; i++){
        cout<<"Enter rainfall in inches for month "<<i+1<<": "<<endl;
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
    
    if (totrain[0] == lowest){
        cout<<endl;
        cout<<"Month 1 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[1] == lowest){
        cout<<endl;
        cout<<"Month 2 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[2] == lowest){
        cout<<endl;
        cout<<"Month 3 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[3] == lowest){
        cout<<endl;
        cout<<"Month 4 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[4] == lowest){
        cout<<endl;
        cout<<"Month 5 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[5] == lowest){
        cout<<endl;
        cout<<"Month 6 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[6] == lowest){
        cout<<endl;
        cout<<"Month 7 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[7] == lowest){
        cout<<endl;
        cout<<"Month 8 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[8] == lowest){
        cout<<endl;
        cout<<"Month 9 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }    
    else if (totrain[9] == lowest){
        cout<<endl;
        cout<<"Month 10 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[10] == lowest){
        cout<<endl;
        cout<<"Month 11 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[11] == lowest){
        cout<<endl;
        cout<<"Month 12 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }  
    
    if (totrain[0] == highest){
        cout<<endl;
        cout<<"Month 1 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[1] == highest){
        cout<<endl;
        cout<<"Month 2 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[2] == highest){
        cout<<endl;
        cout<<"Month 3 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[3] == highest){
        cout<<endl;
        cout<<"Month 4 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[4] == highest){
        cout<<endl;
        cout<<"Month 5 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[5] == highest){
        cout<<endl;
        cout<<"Month 6 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[6] == highest){
        cout<<endl;
        cout<<"Month 7 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[7] == highest){
        cout<<endl;
        cout<<"Month 8 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[8] == highest){
        cout<<endl;
        cout<<"Month 9 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[9] == highest){
        cout<<endl;
        cout<<"Month 10 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[10] == highest){
        cout<<endl;
        cout<<"Month 11 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[11] == highest){
        cout<<endl;
        cout<<"Month 12 had the highest rainfall: "<<highest<<" in"<<endl;
    }    
    //Exit function main, end of program
    return 0;
}
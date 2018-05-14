/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 28, 2017, 10:53 PM
 * Purpose: It's on like Donkey Kong
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //Formatting
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    const int WEEK = 5;
    const int MONKEYS = 3;
    int monkey[MONKEYS][WEEK];
    int foodsum[MONKEYS];
    int avgfood, avg1, avg2, avg3, totfood;

    //Variable Initialization
    for(int i = 0; i < MONKEYS; i++){
        for (int j = 0; j < WEEK; j++){
            cout<<"Enter the amount of food in pounds eaten by monkey "<<i+1<<
                    " on day "<<j+1<<": "<<endl;
            cin>>monkey[i][j];
            while (monkey[i][j] < 0){
                cout<<"Can not be a negative number: "<<endl;
                cin>>monkey[i][j];
            }
            totfood += monkey[i][j];
            foodsum[i] += monkey[i][j];
        }
    }
    
    avgfood = totfood/WEEK;
    avg1 = foodsum[0]/WEEK;
    avg2 = foodsum[1]/WEEK;
    avg3 = foodsum[2]/WEEK;

    //Re-Display Inputs and write the Outputs
    
    cout<<"Average total: "<<avgfood<<" lbs"<<endl;
    if(avg1 <= avg2 && avg1 <= avg3){
        cout<<"Least food eaten by any one monkey: "<<foodsum[0]<< "lbs"<<endl;
    }
    else if(avg2 <= avg1 && avg2 <= avg3){
        cout<<"Least food eaten by any one monkey: "<<foodsum[1]<< "lbs"<<endl;
    }
    else{
        cout<<"Least food eaten by any one monkey: "<<foodsum[2]<< "lbs"<<endl;
    }
    
    if(avg1 >= avg2 && avg1 >= avg3){
        cout<<"Most food eaten by any one monkey: "<<foodsum[0]<< "lbs"<<endl;
    }
    else if(avg2 >= avg1 && avg2 >= avg3){
        cout<<"Most food eaten by any one monkey: "<<foodsum[1]<< "lbs"<<endl;
    }
    else{
        cout<<"Most food eaten by any one monkey: "<<foodsum[2]<< "lbs"<<endl;
    }
  
    //Exit function main, end of program
    return 0;
}
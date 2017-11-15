/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 10, 2017, 12:24 PM
 * Purpose: Flip a coin using functions
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //For rand and srand
#include <ctime>     //For time funciton
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
void coinage(int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Random number seed
    unsigned seed = time(0);
    srand(seed);
    
    //Variable Declaration
    int flips;
    string results;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"How many times do you want to flip this coin?"<<endl;
    cin>>flips;
    
    //Input validation (for fun, of course)
    while (flips <0){
        cout<<"You can't flip a coin negative times, silly."<<endl;
        cout<<"How many times?"<<endl;
        cin>>flips;
    }
    coinage(flips);
    
    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

void coinage(int flips){
    int side;
    for(int toss = 1; toss <= flips; toss++){
        side = rand()%2+1;
        if (side == 1){
            cout<<"Heads"<<endl;
        }
        else{
            cout<<"Tails"<<endl;
        }
    }
}
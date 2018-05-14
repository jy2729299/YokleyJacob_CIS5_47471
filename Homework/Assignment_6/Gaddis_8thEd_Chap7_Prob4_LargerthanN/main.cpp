/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 28, 2017, 10:05 PM
 * Purpose: Find all numbers in an array larger than n
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>
#include <ctime>
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    //Initializing Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    int arrsize, n;
    int array[arrsize];

    //Variable Initialization
    cout<<"How many numbers do you want generated?"<<endl;
    cin>>arrsize;
    cout<<"Pick a number from 1 to 99: "<<endl;
    cin>>n;
    
    while(n < 1 || n > 99){
        cout<<"Pick a number from 1 to 99: "<<endl;
        cin>>n;        
    }
  
    //Process Mapping - Inputs to Outputs
    for (int i = 0; i < arrsize; i++){
        array[i] = rand()%99+1;
        if (array[i] > n){
            cout<<array[i]<<endl;
        }
    }

    //Re-Display Inputs and write the Outputs
    
  
    //Exit function main, end of program
    return 0;
}
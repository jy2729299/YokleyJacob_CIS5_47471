/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 15, 2017, 2:02 PM
 * Purpose: Final problem 4
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
    //Get the system time
    unsigned seed = time(0);
    
    //Seed the random number generator
    srand(seed);    
    
    //Variable Declaration
    const int n = 5, ntimes = 10000;
    int freq[n] = {0, 0, 0, 0, 0};
    short int rndseq[n] = {18, 61, 88, 101, 121};
    short int iterate;
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    for (int i = 0; i < ntimes; i++){
        iterate = rand() % 5 + 1;
        if (iterate == 1){
            freq[0]++;
        }
        else if (iterate == 2){
            freq[1]++;
        }
        else if (iterate == 3){
            freq[2]++;
        }
        else if (iterate == 4){
            freq[3]++;
        }        
        else if (iterate == 5){
            freq[4]++;
        }        
    }

    //Re-Display Inputs and write the Outputs
    for (int i = 0; i < n; i++){
        cout<<rndseq[i]<<" occurred "<<freq[i]<<" times"<<endl;
    }
    //Exit function main, end of program
    return 0;
}
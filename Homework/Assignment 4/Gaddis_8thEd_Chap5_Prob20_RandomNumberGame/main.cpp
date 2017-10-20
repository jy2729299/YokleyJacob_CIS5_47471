/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 20, 2017, 12:04 PM
 * Purpose: Random number guessing game
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <ctime>     //For random seed generator
#include <cstdlib>   //For rand and srand
#include <stdlib.h>  //For the exit function
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    //Set system time to now
    int guess = 1;
    unsigned int seed = time(0);
    
    //Seed random number generator
    srand(seed);

    //Variable Initialization
    unsigned short num = rand()% 100 + 1;
  
    //Process Mapping - Inputs to Outputs
    cout<<"I'm thinking of a number from 1 to 100. Can you guess it?"<<endl;
    while (guess >= 1 && guess <= 100){
        cin>>guess;
        if (guess < num){
            cout<<"Too low. Guess again!"<<endl;
            if (guess < 1){ 
                //Program corrects for a user who can't read with a reminder that the number can't be less than 1
                cout<<"Can't be less than 1"<<endl;
                guess = 1;
            }
        }
        else if (guess > num){
            cout<<"Too high. Guess again!"<<endl;
            if (guess > 100){
                //Program corrects for a user who can't read with a reminder that the number can't be greater than 100
                cout<<"Can't be greater than 100"<<endl;
                guess = 1;
            }
        }
        else if (guess == num){
            cout<<"You got it!"<<endl;
            exit(EXIT_SUCCESS);        //Exits and congratulates when correct answer is found
        }
    }

    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

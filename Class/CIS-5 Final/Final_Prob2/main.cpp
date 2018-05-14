/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 15, 2017, 11:18 AM
 * Purpose: Final Problem 2
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Standard library for rand and srand
#include <ctime>     //For time function
#include <cmath>     //Math library

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
    int random, x, guess, numgues, tentox, plgues;
    bool isgame;
    char cont;
    
    
    //Variable Initialization
    do{
        x = (rand() % (5 - 1 + 1) + 1);
        tentox = pow(10, x);
        random = (rand() % (tentox - 1 + 1) + 1);
        numgues = log2(tentox) + 1;

        //Process Mapping - Inputs to Outputs
        cout<<endl;
        cout<<"I'm thinking of a number from 1 to "<<tentox<<"."<<endl;
        cout<<"Can you guess my number?"<<endl;
        cout<<"You have a maximum of "<<numgues<<" guesses."<<endl;
        cout<<endl;

        //Re-Display Inputs and write the Outputs
        while (guess != random && plgues != numgues){
            cout<<"Enter your guess: ";
            cin>>guess;
            cout<<endl;
            if (guess > random){
                cout<<"Too high. Try again."<<endl;
                cout<<endl;
            }
            else if (guess < random){
                cout<<"Too low. Try again."<<endl;
                cout<<endl;
            }
            else if (guess == random){
                cout<<"You guessed the number!"<<endl;
                cout<<endl;
                cout<<"Would you like to play again? (y/n)"<<endl;
                cin>>cont;
                if (cont == 'n'){
                    isgame = false;
                }
                else{
                    isgame = true;
                } 
            }
            else if (plgues == numgues){
                isgame = false;
                cout<<"Out of tries. Better luck next time!"<<endl;
                exit(EXIT_SUCCESS);
            }
            plgues++;
        }
    }while(isgame);
    cout<<"Thanks for playing!"<<endl;
    //Exit function main, end of program
    return 0;
}
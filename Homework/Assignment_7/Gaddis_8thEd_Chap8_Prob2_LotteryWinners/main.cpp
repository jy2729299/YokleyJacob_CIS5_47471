/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 29, 2017, 9:53 AM
 * Purpose:  IN THE HOUSE OF THE RISING SUN
 */

//System Libraries Here
#include <iostream>    //I/O Library
#include <cstdlib>     //For random number generator
#include <ctime>       //For time function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void gamble(int [], int, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    unsigned seed = time(0);
    srand(seed);
    
    //Declare all Variables Here
    const int SIZE = 10;
    int entries[SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422,
                         85647, 93121};
    int winner;
    
    
    //Input or initialize values Here
    winner = (rand() % (99999 - 10000 +1)) + 10000;
    
    //Process/Calculations Here
    cout<<"Tonight's winning lottery ticket is: "<<winner<<"."<<endl;
    cout<<"Now performing computer magic to see if you won..."<<endl;
    
    //Output Located Here
    gamble(entries, winner, SIZE);
    
    //Exit
    return 0;
}

void gamble(int entries[], int winner, int SIZE){
    int lose = 0;
    for(int i = 0; i < SIZE; i++){
        if (entries[i] == winner){
            cout<<"Congratulations! One of your numbers matches the winning "
                    "number!"<<endl;
            exit(EXIT_SUCCESS);
        }
        else{
            lose++;
        }
    }
    if (lose = 10){
        cout<<"None of your numbers won. Now how will you pay off your student "
                "loans?"<<endl;
    }
}
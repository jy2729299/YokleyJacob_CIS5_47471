/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 29, 2017, 10:36 AM
 * Purpose:  What's in your wallet?
 */

//System Libraries Here
#include <iostream>    //I/O Library
#include <cstdlib>     //For exit function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void accsrch(int [], int, int);

//Program Execution Begins Here
int main(int argc, char** argv) { 
    //Declare all Variables Here
    const int SIZE = 18;
    int accnts[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                        1005231, 6545231, 3852085, 7576651, 7881200, 4581002}; 
    int useracc;
        
    //Process/Calculations Here
    cout<<"Enter your account number: "<<endl;
    cin>>useracc;
    
    //Output Located Here
    accsrch(accnts, useracc, SIZE);
    
    //Exit
    return 0;
}

void accsrch(int accnts[], int useracc, int SIZE){
    int wrong = 0;
    for(int i = 0; i < SIZE; i++){
        if (accnts[i] == useracc){
            cout<<"Valid entry. Welcome!"<<endl;
            exit(EXIT_SUCCESS);
        }
        else{
            wrong++;
        }
    }
    if (wrong = 18){
        cout<<"Invalid entry. Locking down."<<endl;
    }
}
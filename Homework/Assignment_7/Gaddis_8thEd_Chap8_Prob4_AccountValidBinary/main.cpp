/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 9, 2017, 10:58 PM
 * Purpose:  "Dad hides money in the walls because he doesn't trust banks."
 *                               -Bill Burr
 * (I highly recommend his stand-up routine, Dr. Lehr! Check out one of his 
 * shows on Netflix while you're grading sometime!)
 */

//System Libraries Here
#include <iostream>    //I/O Library
#include <cstdlib>     //For exit function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int accbin(int [], int, int);

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
    accbin(accnts, useracc, SIZE);
    
    //Exit
    return 0;
}

int accbin(int accnts[], int useracc, int SIZE){
    int first = 0,               //First array element
        last = SIZE - 1,        //Last array element
        mid,                   //Midpoint of search
        pos = -1;             //Position of search value
    bool found = false;      //Flag

    while(!found && first <= last)
    {
        mid = (first + last) / 2;      //Calculate midpoint
        if(accnts[mid] == useracc){     //If value is found at mid
            found = true;
            pos = mid;
            cout<<"Welcome!"<<endl;
        }
        else if(accnts[mid] > useracc) //If value is in lower half
            last = mid - 1;
        else 
            first = mid + 1;           //If value is in upper half     
    }
    cout<<"Unauthorized account number. Perhaps you hit an extra button with"
            " your pudgy fingers? Or I'm poorly programmed :("<<endl;
    return pos;
}

//Honestly have no idea why this isn't working properly. Theoretically,
//everything should work exactly as the powerpoint says. It finds the midpoint,
//compares that location's value with the user value, and if they're equal, it
//grants access by setting found to true. Otherwise, it checks if it's in the
//upper or lower halves and narrows the search down. I'll have to ask someone.
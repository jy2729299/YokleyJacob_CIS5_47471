/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 9, 2017, 10:35 PM
 * Purpose:  01001001 00100111 01101101 00100000 01100001 00100000 01110010 
 * 01100001 01101101 01100010 01101100 01101001 01101110 00100111 00100000 
 * 01100111 01100001 01101101 01100010 01101100 01101001 01101110 00100111 
 * 00100000 01100110 01101111 01101111 01101100
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
int bingamb(int [], int, int);

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
    bingamb(entries, winner, SIZE);
    
    //Exit
    return 0;
}

int bingamb(int entries[], int winner, int SIZE){
    int first = 0,               //First array element
        last = SIZE - 1,        //Last array element
        mid,                   //Midpoint of search
        pos = -1;             //Position of search value
    bool found = false;      //Flag

    while(!found && first <= last)
    {
        mid = (first + last) / 2;      //Calculate midpoint
        if(entries[mid] == winner){     //If value is found at mid
            found = true;
            pos = mid;
            cout<<"One of your numbers won, but do you really feel like"
                    " a winner?"<<endl;
        }
        else if(entries[mid] > winner) //If value is in lower half
            last = mid - 1;
        else 
            first = mid + 1;           //If value is in upper half     
    }
    cout<<"None of your entries won, but you knew that already, didn't you?"
            <<endl;
    return pos;
}
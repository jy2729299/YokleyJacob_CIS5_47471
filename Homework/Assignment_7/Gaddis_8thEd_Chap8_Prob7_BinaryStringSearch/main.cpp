/* 
 * File:   main.cpp
 * Author: Jacob Yokley 
 * Created on December 10, 2017, 1:13 AM
 * Purpose:  A really discouraging program that doesn't at all do what I 
 * want it to do
 * 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
int binary(string [], int, string);
void sort(string[], int);
string entry();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=20;
    string names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                         "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                         "Taylor, Terri", "Johnson, Jill",
                         "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                         "James, Jean", "Weaver, Jim", "Pore, Bob",
                         "Rutherford, Greg", "Javens, Renee",
                         "Harrison, Rose", "Setzer, Cathy",
                         "Pike, Gordon", "Holland, Beth"};
    //Continuing from the template
    //Initialize Variables
    string nameval;
    int scanend;
    int test = -1;
    
    //Input Data/Variables
    sort(names, SIZE);
    nameval = entry();
    scanend = binary(names, SIZE, nameval);
    
    //Process or map the inputs to the outputs
    if(scanend == -1){
        cout<<"I don't see a "<<nameval<<" in here."<<endl;
    }
    else
        cout<<names[scanend]<<" found! Name belongs to array position "
                <<scanend<<endl;
    
    //Exit the program
    return 0;
}

void sort(string names[], int SIZE){
    int scan, mindex;
    string minval;
    
    for(int scan = 0; scan < (SIZE - 1); scan++){
        mindex = scan;
        minval = names[scan];
        for(int index = 0; index < SIZE; index++){
            minval = names[index];
            mindex = index;
        }
        names[mindex] = names[scan];
        names[scan] = minval;
    }
}

int binary(string names[], int SIZE, string val){
    int first = 0,
        last = SIZE - 1,
        mid,
        pos = -1;
    bool found = false;
    
    while(!found && first <= last){
        mid = (first + last)/2;
        if (names[mid] == val){
            found = true;
            pos = mid;
        }
        else if (names[mid] > val){
            last = mid - 1;
        }
        else
            first = mid + 1;
    }
    return pos;
}

string entry(){
    string name;
    cout<<"Enter a name to search. It's like Facebook, but somehow creepier: ";
    getline(cin, name);
    return name;
}
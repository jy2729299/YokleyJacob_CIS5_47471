/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 15, 2017, 8:07 PM
 * Purpose: Final problem 3
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //For rand and srand
#include <vector>    //For vectors
#include <ctime>     //For random number seed

using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
void fillVec(vector<int>& , vector<int>& , int );
void prntVec(vector<int>& , vector<int>& , int );

//Execution Begins Here!
int main(int argc, char** argv) {
    //Get the system time
    unsigned seed = time(0);

    //Seed the random number generator
    srand(seed);

    //Variable Declaration
    int arrsize, cols = 2;
    int array[cols][arrsize];    
    int vecsize, number;
    vector<int> even;
    vector<int> odd;

    //Process Mapping - Inputs to Outputs
    cout<<"Enter the size of both vectors: ";
    cin>>vecsize;
    cout<<endl;

    //Re-Display Inputs and write the Outputs
    fillVec(even, odd, vecsize);
    prntVec(even, odd, vecsize);
        
    cout<<"Enter size of array: ";
    cin>>arrsize;
    cout<<endl<<endl;
    
    
    //I can't figure this array part out for the life of me, but I'll at least
    //demonstrate how 2D arrays work by making a block of random numbers and 
    //printing them
    
    for (int i = 0; i < cols; i++){
        for (int j = 0; j < arrsize; j++){
            array[i][j] = (rand() % (99 - 10 + 1)) + 10;
        }
    }

    for (int i = 0; i < cols; i++){
        for (int j = 0; j < arrsize; j++){
            cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }           
        
        
    //Exit function main, end of program
    return 0;
}

void fillVec(vector<int>& even, vector<int>& odd, int vecsize){
    int number;
    
    while(even.size() < vecsize){
        number = (rand() % (99 - 10 + 1)) + 10;
        if(number % 2 == 0)
        even.push_back(number);
    }
    
    while(odd.size() < vecsize){
        number = (rand() % (99 - 10 + 1)) + 10;
        if(number % 2 != 0)
        odd.push_back(number);
     }
}
void prntVec(vector<int>& even, vector<int>& odd, int col){
    cout<<"Enter the number of columns to print: ";
    cin>> col;
    cout<<endl;
    
    cout<<"EVEN: ";
    for(int i = 0; i < col; i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    
    cout<<"ODD:  ";    
    for(int j = 0; j < col; j++){
        cout<<odd[j]<<" ";
    }
    cout<<endl<<endl;
}
/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 16, 2017, 1: 27 PM
 * Purpose: Final problem 6
 */

//System Libraries
#include <iostream>   //I/O Stream Library
#include <cstdlib>    //Standard library
#include <fstream>    //For file I/O
using namespace std;

//User Libraries

//Global Constants - Physics/Math/Conversions only
const int COLS = 6;

//Function Prototypes
void readary(int [][COLS], int, ifstream&, ofstream&, int);
void addary(int [][COLS], int);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Variable Declaration
    const int COLS = 6;
    const int SIZE = 30;
    int table[SIZE][COLS];
    ifstream input;
    ofstream output;    
    
    //Variable Initialization
    input.open("table.dat");
    output.open("augtable.dat");
    
    //Process Mapping - Inputs to Outputs
    readary(table, SIZE, input, output, 6);
    addary(table, SIZE);
    
    input.close();
    output.close();
    //Exit function main, end of program
    return 0;
}

//Reading the array
void readary(int b[][COLS], int n, ifstream& input, ofstream& output, int perLine){
    for(int rows=0;rows<n;rows++){
        input>>b[rows][COLS];
        cout<<b[rows][COLS]<<" ";
        if(rows % perLine == (perLine - 1))cout<<endl;
    }
    cout<<endl;
}
void addary(int b[][COLS], int n){
    int rowSum[COLS] = {0};
    int colSum[5] = {0};
    
    //Summing table
    for(int i = 0;i < 5; i++){
        for(int j = 0; j < COLS; j++){
            rowSum[i] += b[i][j];
            colSum[j] += b[i][j];
        }
    }
   
    //Printing the array
    for(int i = 0; i != 5; i++){
        for(int j = 0; j != COLS; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    //Printing the augmented array
    for(int k = 0; k != 6; k++){
        cout<<rowSum[k]<<" ";
    }
    for (int l = 0; l != 5; l++){
        cout<<colSum[l]<<" ";
    }
    cout<<endl;
}
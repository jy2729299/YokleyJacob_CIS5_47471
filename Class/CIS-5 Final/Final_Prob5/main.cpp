/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 16, 2017, 11:35 AM
 * Purpose: Final problem 5
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Standard library
#include <fstream>   //File I/O
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
void readarr(string a[], int n, ifstream& infile);
void swaparr(string& a, string& b);
void prntarr(string a[],int n,int perLine);
void sortarr(string a[],int n);
void smallest(string a[],int n,int pos);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    int SIZE=10;
    string array[SIZE];
    ifstream infile;
    ofstream outfile;
    infile.open("input.dat");
    outfile.open("output.dat");
    
    //Process Mapping - Inputs to Outputs
    readarr(array,SIZE,infile);
    prntarr(array,SIZE,1);
    sortarr(array,SIZE);
    prntarr(array,SIZE,1);
    
    infile.close();
    outfile.close();
    //Exit function main, end of program
    return 0;
}
void readarr(string a[], int n, ifstream& infile){
     for(int i = 0; i < 10; i++){
        infile>>a[i];        
    }
}
void sortarr(string a[], int n){
    for(int i = 0; i < n - 1; i++){
        smallest(a, n, i);
    }
}
void smallest(string a[],int n,int pos){
    for(int i = pos + 1; i < n; i++){
        if(a[pos] < a[i])swap(a[pos], a[i]);
    }
}
void swaparr(string& a, string& b){
    string temp = a;
    a = b;
    b = temp;
}
void prntarr(string a[], int n, int perLine){
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
        if(i%perLine == (perLine - 1))cout<<endl;
    }
    cout<<endl;
}
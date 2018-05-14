/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 28, 2017, 8:20 PM
 * Purpose: Computer Science con Salsa
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //Formatting library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    const int SIZE3 = 5;
    string salsa[SIZE3] = {"mild", "medium", "sweet", "hot", "zesty"};
    int sales[SIZE3];
    int lowest, highest, saltemp, salsall;

    //Variable Initialization
    for (int i = 0; i < SIZE3; i++){
        cout<<"Enter number of "<<salsa[i]<<" jars sold: "<<endl;
        cin>>sales[i];
        while(sales[i]<0){
            cout<<"Sales can not be negative: ";
            cin>>sales[i];
        }        
    }
    
    lowest = sales[0];
    highest = sales[0];
    
    for(int i = 1; i < SIZE3; i++){
        saltemp = sales[i];
        
        if(saltemp <lowest){
            lowest = saltemp;
        }
        if(saltemp > highest){
            highest = saltemp;
        }
    }
    
    for(int i = 0; i < SIZE3; i++){
        salsall += sales[i];
    }
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"   SALES REPORT      "<<endl;
    cout<<"====================="<<endl;
    cout<<right<<"Salsa"<<setw(13)<<"Sales"<<endl;
    cout<<right<<setw(0)<<salsa[0]<<setw(13)<<sales[0]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<salsa[1]<<setw(13)<<sales[1]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<salsa[2]<<setw(13)<<sales[2]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<salsa[3]<<setw(13)<<sales[3]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<salsa[4]<<setw(13)<<sales[4]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<"TOTAL: "<<setw(13)<<right<<salsall<<setw(0)<<endl;
    
    if (sales[0] == lowest){
        cout<<endl;
        cout<<"Mild had the lowest sales: "<<lowest<<" jars"<<endl;
    }
    else if (sales[1] == lowest){
        cout<<endl;
        cout<<"Medium had the lowest sales: "<<lowest<<" jars"<<endl;
    }
    else if (sales[2] == lowest){
        cout<<endl;
        cout<<"Sweet had the lowest sales: "<<lowest<<" jars"<<endl;
    }
    else if (sales[3] == lowest){
        cout<<endl;
        cout<<"Hot had the lowest sales: "<<lowest<<" jars"<<endl;
    }
    else if (sales[4] == lowest){
        cout<<endl;
        cout<<"Zesty had the lowest sales: "<<lowest<<" jars"<<endl;
    }    

    if (sales[0] == highest){
        cout<<endl;
        cout<<"Mild had the highest sales: "<<highest<<" jars"<<endl;
    }
    else if (sales[1] == highest){
        cout<<endl;
        cout<<"Medium had the highest sales: "<<highest<<" jars"<<endl;
    }
    else if (sales[2] == highest){
        cout<<endl;
        cout<<"Sweet had the highest sales: "<<highest<<" jars"<<endl;
    }
    else if (sales[3] == highest){
        cout<<endl;
        cout<<"Hot had the highest sales: "<<highest<<" jars"<<endl;
    }
    else if (sales[4] == highest){
        cout<<endl;
        cout<<"Zesty had the highest sales: "<<highest<<" jars"<<endl;
    }    
  
    //Exit function main, end of program
    return 0;
}
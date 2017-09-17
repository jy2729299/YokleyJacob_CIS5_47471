/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 14, 2017, 7:53 AM
 * Purpose: The East Coast sales division of a company generates 58 percent
 * of total sales. Based on that percentage, write a program that will predict
 * how much the East Coast division will generate if the company
 * has $8.6 million in sales this year.
 */

//System Libraries
#include <iostream>  //I/O Stream Library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float sales = 8.6;                 //Total company sales in millions
    float percent = .58;               //Percentage of total sales by East Coast Division
    float ecoastd = sales * percent;    //East coast revenue = percent times total company sales

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"Total company sales: $"<<sales<<" million"<<endl;
    cout<<"Percent of total sales by East Coast Division: "<<percent*100<<"%"<<endl;
    cout<<"East Coast Division sales: $"<<ecoastd<<" million"<<endl;
    
    //Exit function main, end of program
    return 0;
}

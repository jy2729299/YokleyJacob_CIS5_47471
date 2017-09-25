/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 2:59 PM
 * Purpose: Ask for number of sales for each ticket price and display amount 
 * of income generated in fixed-point notation with two decimal points of precision
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    const float ACLASS = 15;     //stadium seat prices remain constant
    const float BCLASS = 12;
    const float CCLASS = 9;
    float Anumber;               //floats used in order to get setprecision to work
    float Bnumber;
    float Cnumber;
    float Asales;
    float Bsales;
    float Csales;
    float total;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the number of sales of Class A tickets: "<<endl;
    cin>>Anumber;
    cout<<"Enter the number of sales of Class B tickets: "<<endl;
    cin>>Bnumber;
    cout<<"Enter the number of sales of Class C tickets: "<<endl;
    cin>>Cnumber;

    //user inputs for number of sales
    
    //Re-Display Inputs and write the Outputs
    
    Asales = Anumber * ACLASS;  //Modifies sales variable using updated entries
    Bsales = Bnumber * BCLASS;
    Csales = Cnumber * CCLASS;
    
    cout<<setprecision(2)<<fixed<<endl;    //sets decimal precision to be 2 decimal places
    cout<<"Class A: $"<<Asales<<endl;
    cout<<"Class B: $"<<Bsales<<endl;
    cout<<"Class C: $"<<Csales<<endl;
    
    total = Asales + Bsales + Csales;
    cout<<"Total Sales: $"<<total<<endl;
         
  
    //Exit function main, end of program
    return 0;
}

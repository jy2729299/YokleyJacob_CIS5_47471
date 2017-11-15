/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 10, 2017, 10:56 AM
 * Purpose: Display retail price after cost and markup
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //Money formatting
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
float retail(float, float, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float whlsale;        //wholesale cost
    float rtlcost;       //for storing total retail cost
    int percent;        //user's markup percentage
    
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"Enter the wholesale value of the item: $";
    cin>>whlsale;
    cout<<endl;
    
    //Input validation
    while (whlsale < 0){
        cout<<"Wholesale value must be a positive number. Try again: $ ";
        cin>>whlsale;
        cout<<endl;
    }
    
    cout<<"Enter the markup percentage: ";
    cin>>percent;
    cout<<endl;
    
    while (percent < 0){
    cout<<"Markup percentage must be a positive number. Try again: ";
    cin>>percent;
    cout<<endl;
    }
    
    rtlcost = retail(whlsale, 0, percent);  //Sends user's inputs to function
    //Function returns value and stores in rtlcost!
    
    //Re-display inputs and write the outputs
    cout<<"Your total is: $"<<rtlcost<<endl;
    cout<<"Have a nice day!"<<endl;
  
    //Exit function main, end of program
    return 0;
}

/*========================================================
 |              RETAIL CALCULATOR FUNCTION               |
 |                                                       |
 |Description: Takes markup percentage of input price    |
 |and adds it to the wholesale cost to get retail price  |
 |                                                       |
 |Inputs:                                                |
 |      cost - wholesale cost of item                    |
 |      markup - markup percentage of item               |
 |Output:                                                |
 |      total - total retail value                       |
 | =====================================================*/

float retail(float cost, float total, int markup){
    cout<<"Cost: $"<<cost<<"    Markup: "<<markup<<"%"<<endl;
    
    total = cost + ((static_cast<float>(markup)/100)*cost);
    
    return total;
}

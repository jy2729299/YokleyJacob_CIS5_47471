/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 17, 2017, 11:28 AM
 * Purpose: Calculate subtotal, total, and sales tax of a purchase
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
    float item1 = 15.95;        //prices of all items
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    float subtot = item1+item2+item3+item4+item5; //subtotal of all items
    float tax = .07;           //sales tax %
    float total = (subtot*tax)+subtot;  //total after tax is applied

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"Item 1 = "<<item1<<endl;
    cout<<"Item 2 = "<<item2<<endl;
    cout<<"Item 3 = "<<item3<<endl;
    cout<<"Item 4 = "<<item4<<endl;
    cout<<"Item 5 = "<<item5<<endl;
    cout<<"SUBTOTAL = "<<subtot<<endl;
    cout<<"SALES TAX = "<<tax<<endl;
    cout<<"TOTAL = "<<total<<endl;
    //Exit function main, end of program
    return 0;
}

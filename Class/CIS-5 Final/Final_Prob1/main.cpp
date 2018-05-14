/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 14, 2017, 10:35 PM
 * Purpose: Final Problem 1
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
    unsigned short num;
    unsigned short temp;
    signed short inv;
    signed short invtemp;
    signed short max2dig;
    
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl;
    
    if (num < -32768 || num > 32767){
        cout<<"Conversion not possible. Doesn't fit range of signed short."
                <<endl;
    }
    else {    
        while(num != 0){
            num = static_cast<signed short>(num);
            temp = static_cast<signed short>(temp);
            temp = num % 10;        //Temp holds tenth value (the remainder) of number
            inv = inv * 10 + temp; //Inv multiplies itself by 10 and adds the remainder
            num /= 10;            //Process repeats until num divides itself to 0,
                                 //Creates a reverse number by adding the number placements "backwards"
        }
    //Re-Display Inputs and write the Outputs
        cout<<"Reverse: "<<inv<<endl;
        
        if (inv >= 11){
            invtemp = inv;
            while (invtemp != 1){
                invtemp = invtemp - 1;
                max2dig++;
            }
            if (max2dig > 99){
                max2dig = 99;
            }
            cout<<"Highest two digit number that can be subtracted: "<<max2dig
                    <<endl;
            cout<<inv<<" - "<<max2dig<<" = "<<inv - max2dig<<endl;
        }
    }
        
    //Exit function main, end of program
    return 0;
}
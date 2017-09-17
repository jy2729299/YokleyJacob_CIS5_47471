/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on August 28, 2017, 10:18 AM
 * Purpose: A soft drink company recently surveyed 16,500 of its customers
 * and found that approximately 15 percent of those surveyed purchase one or 
 * more energy drinks per week. Of those customers who purchase energy drinks,
 * approximately 58 percent of them prefer citrus-flavored energy drinks. 
 * Write a program that displays the following:
 * 
 * -The approximate number of customers in the survey who purchase one or more
energy drinks per week
 * -The approximate number of customers in the survey who prefer citrus-flavored energy
drinks
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
    short survey = 16500;         //Total consumers surveyed
    float perweek = .15;          //Percent that purchases one or more energy drinks per week
    float perctrs = .58;          //Percent that prefers citrus
    short cusctrs = perctrs*survey;        //Quantity of customers who prefer citrus
    short cusweek = perweek*survey;        //Quantity of customers who purchase weekly

    //Variable Initialization
    
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"Number of customers who purchase one or more energy drinks per week: "<<cusweek<<endl;
    cout<<"Number of customers who prefer citrus-flavored energy drinks: "<<cusctrs<<endl;
    //Exit function main, end of program
    return 0;
}

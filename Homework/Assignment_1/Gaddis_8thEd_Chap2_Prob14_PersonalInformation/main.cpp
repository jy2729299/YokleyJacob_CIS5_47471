/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 14, 2017, 8:32 AM
 * Purpose: Write a program that displays the following pieces of
 * information, each on a separate line:
 * 
 * Your name
 * Your address, with city, state, and ZIP code
 * Your telephone number
 * Your college major
 * 
 * Use only a single cout statement to display all this information.
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
    string name;        //Declaring variables as strings for future user input
    string address;
    string city;
    string state;
    string zipcode;
    string phoneno;
    string major;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"What is your name?"<<endl;  //Prompting user to enter answers
    getline (cin, name);               //getline is required to store entire lines of input, allowing for spaces
    cout<<"What is your address?"<<endl;
    getline (cin, address);
    cout<<"What city do you live in?"<<endl;
    getline (cin, city);
    cout<<"What state is "<<city<<" in?"<<endl;
    getline (cin, state);
    cout<<"What is your ZIP code?"<<endl;
    getline (cin, zipcode);
    cout<<"What is your phone number?"<<endl;
    getline (cin, phoneno);
    cout<<"What college major are you interested in?"<<endl;
    getline (cin, major);

    //Re-Display Inputs and write the Outputs
    cout<<"\n"<<name<<"\n"<<address<<", "<<city<<", "<<state<<", "<<zipcode<<"\n"<<phoneno<<"\n"<<major<<endl;
             //Using \n allows for new lines to be created with only one cout
    //Exit function main, end of program
    return 0;
}

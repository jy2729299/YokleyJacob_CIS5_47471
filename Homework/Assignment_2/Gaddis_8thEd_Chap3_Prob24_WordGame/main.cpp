/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on September 24, 2017, 3:24 PM
 * Purpose: Write a program that plays a word game with the user
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <string>    //Required for string class
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    string name, age, city, college, job, pet, petname;
    
    //strings entered for all entries. DOES NOT ACCEPT SPACES

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter a name: "<<endl;   //asks for user inputs for each string
    cin>>name;  
    cout<<"Enter an age: "<<endl;
    cin>>age;
    cout<<"Enter a city: "<<endl;
    cin>>city;
    cout<<"Enter a college: "<<endl;
    cin>>college;
    cout<<"Enter a profession: "<<endl;
    cin>>job;
    cout<<"Enter an animal: "<<endl;
    cin>>pet;
    cout<<"Enter a name for a pet: "<<endl;
    cin>>petname;
    

    //Re-Display Inputs and write the Outputs
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<"."<<endl;
    cout<<"At the age of "<<age<<", "<<name<<" went to college at "<<college<<". "<<name<<" graduated and"<<endl;
    cout<<"went to work as a "<<job<<". Then, "<<name<<" adopted a(n) "<<pet<<" named "<<petname<<"."<<endl;
    cout<<"They both lived happily ever after!"<<endl;
  
    //Story is simply composed and stitched together with user inputs
    
    //Exit function main, end of program
    return 0;
}

/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 4th, 2017, 9:36 AM
 * Purpose: Menu without loops
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
    int choice;
    
    //Variable Initialization
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem Savitch 9thEd Chap 3 Prob 3 Roman Numerals"<<endl;
    cout<<"2. Problem 2"<<endl;
    cout<<"3. Problem 3"<<endl;
    cout<<"4. Problem 4"<<endl;
    cout<<"5. Problem 5"<<endl;
    cout<<"6. Problem 6"<<endl;
    cout<<"7. Problem 7"<<endl;
    cout<<"8. Problem 8"<<endl;
    cout<<"9. Problem 9"<<endl;
    cin>>choice;
    
    //Process Mapping - Inputs to Outputs
    switch(choice){
        case 1:{
            cout<<"You are in Problem 1"<<endl;
            break;
        }
        case 2:{
            cout<<"You are in Problem 2"<<endl;
            break;
        }
        case 3:{
            cout<<"You are in Problem 3"<<endl;
            break;
        }
        case 4:{
            cout<<"You are in Problem 4"<<endl;
            break;
        }
        case 5:{
            cout<<"You are in Problem 5"<<endl;
            break;
        }
        case 6:{
            cout<<"You are in Problem 6"<<endl;
            break;
        }
        case 7:{
            cout<<"You are in Problem 7"<<endl;
            break;
        }
        case 8:{
            cout<<"You are in Problem 8"<<endl;
            break;
        }
        case 9:{
            cout<<"You are in Problem 9"<<endl;
            break;
        }
        default:{
            cout<<"You seem to have a problem following instructions"<<endl;
            cout<<"You are unworthy of running this code"<<endl;
        }
    }
    //Re-Display Inputs and write the Outputs
    
    //Exit function main, end of program
    return 0;
}

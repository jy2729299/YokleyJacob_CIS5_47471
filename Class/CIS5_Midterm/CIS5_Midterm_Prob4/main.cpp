/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 26, 2017, 5:45 PM
 * Purpose: Midterm Problem 4
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //Formatting cash
#include <cstdlib>   //For snarkily exiting if user does not follow directions
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    int hours;                      //Number of hours
    int pack;                       //Package choice
    float totalA, totalB, totalC, 
            comp1, comp2;   //Totals for each package
    
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Which package did you choose? \n\n"
            "1. Package A\n"
            "2. Package B\n"
            "3. Package C\n"<<endl;
    cin>>pack;
    cout<<setprecision(2)<<fixed;
    switch (pack){
        case 1: {
            cout<<"How many hours were spent using this package?"<<endl;
            cin>>hours;
            if (hours <= 5){
                totalA = 16.75;
            }
            else if (hours > 5 && hours <= 20){
                totalA = 16.75 + (0.85*20);
            }
            else if (hours < 20){
                totalA = 16.75 + (1*20);
            }
            
            //Calculating package B for price comparison
            if (hours <= 15){
                totalB = 23.75;
            }
            else if (hours > 5 && hours <= 25){
                totalB = 23.75 + (0.65*20);
            }
            else if (hours < 25){
                totalB = 23.75 + (0.75*20);
            }
            
            totalC = 29.95;
        }
            cout<<"Your monthly charge: $"<<totalA<<endl;
            comp1 = totalA - totalB;
            comp2 = totalA - totalC;
            
            if (totalA > totalB || totalA > totalC){
                cout<<"You could save money by using a different package."
                        <<endl;
                if (comp1 > comp2){
                    cout<<"You'd save $"<<comp1<<" with package B"<<endl;break;
                }
                else if (comp2 > comp1){
                    cout<<"You'd save $"<<comp2<<" with package C"<<endl;break;
                }
            }
            else {
                cout<<"You are saving the most money with this package."<<endl;
                break;
            }
        case 2: {
            cout<<"How many hours were spent using this package?"<<endl;
            cin>>hours;
            if (hours <= 15){
                totalB = 23.75;
            }
            else if (hours > 5 && hours <= 25){
                totalB = 23.75 + (0.65*20);
            }
            else if (hours < 25){
                totalB = 23.75 + (0.75*20);
            }
            
            //Calculating package A for price comparison
            if (hours <= 5){
                totalA = 16.75;
            }
            else if (hours > 5 && hours <= 20){
                totalA = 16.75 + (0.85*20);
            }
            else if (hours < 20){
                totalA = 16.75 + (1*20);
            }
            
            totalC = 29.95;
        
        }
            cout<<"Your monthly charge: $"<<totalB<<endl;break;
            comp1 = totalB - totalA;
            comp2 = totalB - totalC;
            
            if (totalB > totalA || totalB > totalC){
                cout<<"You could save money by using a different package."
                        <<endl;
                if (comp1 > comp2){
                    cout<<"You'd save $"<<comp1<<" with package A"<<endl;break;
                }
                else if (comp2 > comp1){
                    cout<<"You'd save $"<<comp2<<" with package C"<<endl;break;
                }
            }
            else {
                cout<<"You are saving the most money with this package."<<endl;
                break;
            }            
        case 3: {
            cout<<"How many hours were spent using this package?"<<endl;
            cin>>hours;
            totalC = 29.95;
            
            //Calculating package B for price comparison
            if (hours <= 15){
                totalB = 23.75;
            }
            else if (hours > 5 && hours <= 25){
                totalB = 23.75 + (0.65*20);
            }
            else if (hours < 25){
                totalB = 23.75 + (0.75*20);
            }
            //Calculating package A for price comparison
            if (hours <= 5){
                totalA = 16.75;
            }
            else if (hours > 5 && hours <= 20){
                totalA = 16.75 + (0.85*20);
            }
            else if (hours < 20){
                totalA = 16.75 + (1*20);
            } 
            
            cout<<"Your monthly charge: $"<<totalC<<endl;
            comp1 = totalC - totalA;
            comp2 = totalC - totalB;
            
            if (totalC > totalA || totalC > totalB){
                cout<<"You could save money by using a different package."
                        <<endl;
                if (comp1 > comp2){
                    cout<<"You'd save $"<<comp1<<" with package A"<<endl;break;
                }
                else if (comp2 > comp1){
                    cout<<"You'd save $"<<comp2<<" with package B"<<endl;break;
                }
            }
            else {
                cout<<"You are saving the most money with this package."<<endl;
                break;
            }
        }

        default: {
            cout<<"Please rerun the program and actually follow directions."
                    <<endl;break;
        }
    }
    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

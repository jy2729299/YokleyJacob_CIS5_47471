/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on August 28, 2017, 10:18 AM
 * Purpose: Asks user to enter a month's budget and keeps a total of all expenses
 * from that month. Displays if the user went over or under their budget.
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>   //Floating point precision
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float budget, postbud;      //Original budget and budget after having gone over or under
    float total = 0, expense;
    char cont = 'y';                  //input to continue adding expenses

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"What was your budget this past month?"<<endl;
    cin>>budget;
    while(cont == 'y'){
        cout<<"Enter an expense and hit enter: "<<endl;
        cin>>expense;
        total = total + expense;
        cout<<"Do you have any more expenses? y/n: "<<endl;
        cin>>cont;
    }
    
    //Re-Display Inputs and write the Outputs
    postbud = budget - total;
    if (postbud >= 0){
        cout<<"Congratulations, you stayed within your budget!"<<endl;
        cout<<"Budget: $"<<budget<<setw(7)<<"Total spent: $"<<total<<endl;
        cout<<"Remaining cash $"<<postbud<<endl;
    }
    else if (postbud < 0){
        cout<<"You did not meet your budget."<<endl;
        cout<<"======================================"<<endl;
        cout<<"Budget: $"<<budget<<endl;
        cout<<"Total spent: $"<<total<<endl;
        cout<<"Remaining cash $"<<postbud<<endl;
    }
    //Exit function main, end of program
    return 0;
}

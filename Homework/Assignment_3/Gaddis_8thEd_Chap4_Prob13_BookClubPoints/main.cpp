/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 11, 2017, 1:33 PM
 * Purpose: Displays the number of Serendipity Booksellers book points a user earned
 * based on how many books they purchased this month
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
    unsigned short books;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"How many books have you purchased from Serendipity Booksellers this month?"<<endl;
    cin>>books;

    //Re-Display Inputs and write the Outputs
    
    /*Simple program. Maximum amount of points is 60 points, so if statements can be
     * used to create the award tiers by making every purchase from 4 books and onwards
     * worth 60 points and equating everything else to their point values
     */
 
    if (books >= 4)             
        cout<<"You have earned 60 points."<<endl;
    else if (books == 3)
        cout<<"You have earned 30 points."<<endl;
    else if (books == 2)
        cout<<"You have earned 15 points."<<endl;
    else if (books == 1)
        cout<<"You have earned 5 points"<<endl;
    else if (books == 0)
        cout<<"What do you think this is, a charity? 0 books, 0 points. Congrats."<<endl;
      
    //Exit function main, end of program
    return 0;
}

/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 10, 2017, 5:32 PM
 * Purpose: Multiplies month and day and tells user if it equals the year
 * with a little extra pizazz.
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
    int month, day, year;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"If you believe in magic, enter a numeric value for a month: "<<endl;
    cin>>month;
    cout<<"Now the numeric value of a day of that month: "<<endl;
    cin>>day;
    cout<<"Finally, enter the last two digits of a year: "<<endl;
    cin>>year;

    //Re-Display Inputs and write the Outputs
    if (month * day == year)     //prints the magic statement if the month times the day is equal to the year
        cout<<month<<"/"<<day<<"/"<<year<<" is a magic date! Mark your calendars and prepare your top hats!"<<endl;
    else
        cout<<month<<"/"<<day<<"/"<<year<<" is not a magic date. You must be so disappointed."<<endl;
        //if the first statement is not true, than this line is printed instead
    
    //Exit function main, end of program
    return 0;
}

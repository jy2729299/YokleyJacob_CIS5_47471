/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 24, 2017, 10:39 AM
 * Purpose: Midterm problem 3
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <string>    //For long character inputs (name, date, payee)
#include <iomanip>   //For formatting the check
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const int THSND = 1000;
const int HNDRD =  100;
const int TEN   =   10;
const int ONE   =    1;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    string date, payee, acchold;
    unsigned int nThsnd, nHndrd, nTen, nOne;
    unsigned short amount;
    
    //Variable Initialization
    
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the date this check is being written in the following \n"
            "format:  MM/DD/YY"<<endl;
    getline(cin, date);
    cout<<endl;
    cout<<"Enter the account holders name: "<<endl;
    getline(cin, acchold);
    cout<<endl;
    cout<<"Enter the name of the payee: "<<endl;
    getline(cin, payee);
    cout<<endl;
    cout<<"Enter the amount to be paid: "<<endl;
    cout<<"$";
    cin>>amount;
    cout<<endl;

    
    //Re-Display Inputs and write the Outputs
    
    cout<<acchold<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE, ZIP"<<setw(30)<<"Date: "<<date<<endl;
    cout<<endl;
    cout<<"Pay to the order of: "<<payee<<right<<setw(11)<<"$"<<amount<<".00"<<endl;
    cout<<endl;

    //Get number of thousands/hundreds/tens/ones using modulus operator for
    //remainder
    nThsnd = amount/THSND;      
    amount %= THSND;
    
    nHndrd = amount/HNDRD;
    amount %= HNDRD;
    
    nTen = amount/TEN;
    amount %= TEN;
    
    nOne = amount;
        switch(nThsnd){
        case 1: cout<<"One Thousand ";break;
    }
    //Display The Number of 100's
    switch(nHndrd){
        case 9: cout<<"Nine Hundred ";break;
        case 8: cout<<"Eight Hundred ";break;
        case 7: cout<<"Seven Hundred ";break;
        case 6: cout<<"Six Hundred ";break;
        case 5: cout<<"Five Hundred ";break;
        case 4: cout<<"Four Hundred ";break;
        case 3: cout<<"Three Hundred ";break;
        case 2: cout<<"Two Hundred ";break;
        case 1: cout<<"One Hundred ";break;
    }
    //Display The Number of 10's
    switch(nTen){
        case 19: cout<<"Nineteen ";break;
        case 18: cout<<"Eighteen ";break;
        case 17: cout<<"Seventeen ";break;
        case 16: cout<<"Sixteen ";break;
        case 15: cout<<"Fifteen ";break;
        case 14: cout<<"Fourteen ";break;
        case 13: cout<<"Thirteen ";break;
        case 12: cout<<"Twelve ";break;
        case 11: cout<<"Eleven ";break;
        case 9: cout<<"Ninety ";break;
        case 8: cout<<"Eighty ";break;
        case 7: cout<<"Seventy ";break;
        case 6: cout<<"Sixty ";break;
        case 5: cout<<"Fifty ";break;
        case 4: cout<<"Forty ";break;
        case 3: cout<<"Thirty ";break;
        case 2: cout<<"Twenty ";break;
    }
    if(nTen == 1){
        switch (nOne){
            case 9: cout<<"Nineteen ";break;
            case 8: cout<<"Eighteen ";break;
            case 7: cout<<"Seventeen ";break;
            case 6: cout<<"Sixteen ";break;
            case 5: cout<<"Fifteen ";break;
            case 4: cout<<"Fourteen ";break;
            case 3: cout<<"Thirteen ";break;
            case 2: cout<<"Twelve ";break;
            case 1: cout<<"Eleven ";break;
            case 0: cout<<"Ten ";break;
        }
    }
    //Display The Number of 1's
    else if(nTen != 1){
        switch(nOne){

            case 9: cout<<"Nine ";break;
            case 8: cout<<"Eight ";break;
            case 7: cout<<"Seven ";break;
            case 6: cout<<"Six ";break;
            case 5: cout<<"Five ";break;
            case 4: cout<<"Four ";break;
            case 3: cout<<"Three ";break;
            case 2: cout<<"Two ";break;
            case 1: cout<<"One ";break;    
    }
    
    }
    
    /*The biggest problem I've come across with this problem is that for the
     life of me I simply cannot understand how to make the amount output
     anything from $11 to $19 properly. Instead of Eight Hundred Eleven, 
     this program outputs Eight Hundred Ten One. That's certainly the right
     math, but no matter what I change I can't seem to figure out how to fix 
     this. One remnant of an attempt at a solution is the inclusion of cases
     11-19 for ones and tens (I tried both just in case), but I think this 
     doesn't work because the logic of the mod sequence above is that it
     essentially grabs the decimal number in the thousandths, hundredths,
     and tenths places and ignores the others, so even though the remainder is
     eleven, it's being read in order of what's in the tens and ones place, 
     which would be a 1 and a 1 and therefore outputs ten one. This is 
     something I'd like to learn since it has caused me a great deal of anxiety
     and frustration, but for now it at least works for the most part.
     
     Update: I figured it out! I'm going to keep this block of commentary here
     just to show the process, but I realized that if I have the switch case
     stop for a moment when there is a 1 in the tenths place using an if
     statement, then I can make it consider the ones place now where I can then
     implement 11-19 based on if the ones place is from 1-9. Otherwise, the if
     statement will instead have the switch menu proceed as usual to the ones 
     place*/
    cout<<"and no/100"<<endl;
    cout<<endl;
    cout<<"BANK OF CSC5"<<endl;
    cout<<endl;
    cout<<"FOR: GOTTA PAY THE RENT"<<setw(15)<<acchold<<endl;
    //Exit function main, end of program
    return 0;
}

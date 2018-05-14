/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 4th, 2017, 9:36 AM
 * Purpose: Menu without loops
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <stdlib.h>  //Standard library—includes exit function
#include <cmath>     //math library for problem 7
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const int THSND = 1000;
const int HNDRD =  100;
const int TENS  =   10;
const int ONES  =    1;
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
    cout<<"7. Problem Savitch 9thEd Chap 3 Prob 7 e^x"<<endl;
    cout<<"8. Problem 8"<<endl;
    cout<<"9. Problem 9"<<endl;
    cin>>choice;
    
    //Process Mapping - Inputs to Outputs
    switch(choice){
        case 1:{
                //Variable Declaration

                unsigned char nThsnds, nHndrds, nTens, nOnes;
                unsigned short number;

                //Variable Initialization
                cout<<"This program converts numbers to Roman Numerals."<<endl;
                cout<<"Type in a number between 1000 and 3000."<<endl;
                cin>>number;
                if(!(number>=1000&&number<=3000)){
                    cout<<"You don't seem to be able to follow directions."<<endl;
                    cout<<"The number you typed = "<<number<<endl;
                    cout<<"Good Bye!"<<endl;
                    exit(EXIT_FAILURE);
                }

                //Process Mapping - Inputs to Outputs
                /*Essentially converting number into the number of 1000's, 100's, 10's, and 1's
                 * using the mod operator
                 */
                nThsnds = number/THSND;   
                number %= THSND;
                nHndrds = number/HNDRD;
                number %= HNDRD;
                nTens = number/TENS;
                number %= TENS;
                nOnes = number;

                //cout<<static_cast<int>(nThsnds)<<" "<<static_cast<int>(nHndrds)<<" "
                //        <<static_cast<int>(nTens)<<" "<<static_cast<int>(nOnes)<<" "<<endl;

                //Re-Display Inputs and write the Outputs
                //Displaying Roman Numerals based on number of 1000's, 100's, 10's, and 1's
                switch(nThsnds) {
                    case 3: cout<<"M";
                    case 2: cout<<"M";
                    case 1: cout<<"M";
                }
                switch(nHndrds){
                    case 9: cout<<"CM";break;
                    case 8: cout<<"DCCC";break;
                    case 7: cout<<"DCC";break;
                    case 6: cout<<"DC";break;
                    case 5: cout<<"D";break;
                    case 4: cout<<"CD";break;
                    case 3: cout<<"C";
                    case 2: cout<<"C";
                    case 1: cout<<"C";
                }
                switch(nTens){
                    case 9: cout<<"XC";break;
                    case 8: cout<<"LXXX";break;
                    case 7: cout<<"LXX";break;
                    case 6: cout<<"LX";break;
                    case 5: cout<<"L";break;
                    case 4: cout<<"XL";break;
                    case 3: cout<<"X";
                    case 2: cout<<"X";
                    case 1: cout<<"X";
                }
                switch(nOnes){
                    case 9: cout<<"IX";break;
                    case 8: cout<<"VIII";break;
                    case 7: cout<<"VII";break;
                    case 6: cout<<"VI";break;
                    case 5: cout<<"V";break;
                    case 4: cout<<"IV";break;
                    case 3: cout<<"III";
                    case 2: cout<<"II";
                    case 1: cout<<"I";
                }
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
                //Variable Declaration
                float etox = 1, x, term;
                int counter = 1;

                //Variable Initialization
                cout<<"This program approximates e^x."<<endl;
                cout<<"Input a real from 0 to 2"<<endl;
                cin>>x;

                //Process Mapping - Inputs to Outputs
                cout<<"e^"<<x<<" with "<<counter<<" term = "<<etox<<endl;
                term = x;
                counter++;
                etox+=term;
                cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
                term *= x/counter++;
                etox += term;
                cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
                term *= x/counter++;
                etox += term;
                cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
                term *= x/counter++;
                etox += term;
                cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
                term *= x/counter++;
                etox += term;
                cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
                term *= x/counter++;
                etox += term;
                cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
                term *= x/counter++;
                etox += term;
                cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
                term *= x/counter++;
                etox += term;
                cout<<"e^"<<x<<" with "<<counter<<" terms = "<<etox<<endl;
                cout<<"e^"<<x<<" with library function = "<<exp(x)<<endl;
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

/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 27, 2017, 11:35 PM
 * Purpose: Midterm Menu
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>
#include <string>
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
    //Declare Variables
    int choice;
    
    
    /*This menu affects some problems in such a way that omits features or 
     breaks them entirely, and I can't really understand why this happens. 
     Problem 3 does not let the user input the date even though nothing
     leads me to believe that you shouldn't be able to (variables don't
     conflict, and the string library was included) and Problem 4 loops
     indefinitely. These problems don't exist in the original programs, and
     nothing like this has happened to me in past menus for other assignments.
     I'd like to look into this 1)when I have more experience and 2) when I 
     *don't have strep throat*/
    
    //Loop the Menu and Problems
    do{
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Problem 1"<<endl;
        cout<<"2. Problem 2"<<endl;
        cout<<"3. Problem 3"<<endl;
        cout<<"4. Problem 4"<<endl;
        cout<<"5. Problem 5"<<endl;
        cout<<"6. Problem 6"<<endl;
        cin>>choice;

        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
                cout<<"You are in Problem 1"<<endl;
                //Variable Declaration
                int input;     //Number the user will input
                //Variable Initialization

                //Process Mapping - Inputs to Outputs
                cout<<"Enter a number: "<<endl;
                cin>>input;
                cout<<endl;

                //Re-Display Inputs and write the Outputs

                /*Makes a new variable representing a "row" (a line) and sets it equal to
                 the user's number. The other statements will make the row number decrement
                 to 1, so a 5 will decrement 5-4-3-2-1. Before it starts a new line, the 
                 loop runs another for loop that now has the same expressions for a column
                 expression, which effects the indentation and the second number on each
                 line. If row is equal to column, then the number they are equal to (which
                 changes each decrement) will print. Otherwise, a space will print. This
                 creates the first leg of the x. However, a pattern needs to be found that
                 will print the other number on each line, which is represented by the 
                 second expression, column == (input +1) - row. Row only decrements once
                 before the column loop starts, so if input is 5 and row has decremented
                 1 time, column will print a space until it is equal to (5+1)-4, which is 2,
                 where it will then print a number. This pattern continues until the outer
                 row loop is done, creating the x.*/
                for(int row = input; row >= 1; row--){
                    for(int column = input; column >= 1; column--){
                        if(row == column || column == (input + 1) - row){
                            cout<<column;
                        }
                        else{
                            cout<<" ";
                        }
                    }
                    cout<<endl;
                } 
                break;
            }
            case 2:{
                cout<<"You are in Problem 2, which doesn't actually work"
                        " but was at least a nice attempt (?)"<<endl;
                    //Variable Declaration
                    unsigned char num1, num2, num3, num4;

                    //Variable Initialization

                    //Process Mapping - Inputs to Outputs
                    cout<<"Enter a positive 4 digit number separated with spaces: "<<endl;
                    cin>>num1>>num2>>num3>>num4;

                    if (num1 >= '1' && num1 <= '9'){
                        int intnum1 = num1 - '0';
                    }
                    if (num2 >= '0' && num1 <= '9'){
                        int intnum1 = num1 - '0';
                    }
                    if (num3 >= '0' && num1 <= '9'){
                        int intnum1 = num1 - '0';
                    }
                    if (num4 >= '0' && num1 <= '9'){
                        int intnum1 = num1 - '0';
                    }

                    //Re-Display Inputs and write the Outputs
                    //Checks if the four digit number is even by checking the last digit
                    if (num4 % 2 == 0){
                        cout<<num4;
                        for (int rnum4 = 0; rnum4 <= num4; rnum4++){
                            cout<<num4<<endl;
                        }
                        cout<<num3;
                        for (int rnum3 = 0; rnum3 <= num3; rnum3++){
                            cout<<num3<<endl;
                        }
                        cout<<num2;
                        for (int rnum2 = 0; rnum2 <= num2; rnum2++){
                            cout<<num2<<endl;
                        }
                        cout<<num1;
                        for (int rnum1 = 0; rnum1 <= num1; rnum1++){
                            cout<<num1<<endl;
                        }
                    }
                    else if (num4 % 2 != 0 && num1 >= 'a' && num1 <= 'Z' ||
                            num2 >= 'a' && num2 <= 'Z' || num3 >= 'a' && num3 <= 'Z' ||
                            num4 >= 'a' && num4 <= 'Z'){
                        cout<<num4;
                        for (int rnum4 = 0; rnum4 <= num4; rnum4++){
                            cout<<'*'<<endl;
                        }
                        cout<<num3;
                        for (int rnum3 = 0; rnum3 <= num3; rnum3++){
                            cout<<'*'<<endl;
                        }
                        cout<<num2;
                        for (int rnum2 = 0; rnum2 <= num2; rnum2++){
                            cout<<'*'<<endl;
                        }
                        cout<<num1;
                        for (int rnum1 = 0; rnum1 <= num1; rnum1++){
                            cout<<'*'<<endl;
                        }
                    }
                break;
            }
            case 3:{
                cout<<"You are in Problem 3"<<endl;
                    //Variable Declaration
                    string date, payee, acchold;
                    unsigned int nThsnd, nHndrd, nTen, nOne;
                    unsigned short amount;

                    //Variable Initialization

                    //Process Mapping - Inputs to Outputs
                    cout<<"Enter the date this check is being written in the "
                            "following \nformat:  MM/DD/YY"<<endl;
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
                break;
            }
            case 4:{
                cout<<"You are in Problem 4"<<endl;
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
                break;
            }
            case 5:{
                cout<<"You are in Problem 5"<<endl;
                    //Variable Declaration
                    float salary, rate, hours;

                    //Variable Initialization
                    int stime = 40;     //Straight time for first 40 hours
                    int dtime = 50;     //Double time for work over 50 hours

                    //Process Mapping - Inputs to Outputs
                    cout<<"Enter hours worked:"<<endl;
                    cin>>hours;
                    cout<<"Enter the pay received per hour:"<<endl;
                    cin>>rate;

                    //Re-Display Inputs and write the Outputs
                    if (hours >= 1 && hours <= stime){
                        salary = rate * hours;
                    }
                    else if (hours > stime && hours < dtime){
                        salary = (rate * stime) + ((hours - stime) * rate * 1.5);
                    }
                    else if (hours >= dtime){
                        salary = (rate * dtime) + ((hours - dtime)*rate*2);
                    }

                    cout<<"Gross pay is: $"<<salary<<endl;

                break;
            }
            case 6:{
                cout<<"You are in Problem 6, which was at least an attempt"
                        " at something redeeming."<<endl;
                    //Variable Declaration
                    float x, n, power, fctrl;
                    float sum = 0;

                    //Variable Initialization
                    float sign = -1;

                    //Process Mapping - Inputs to Outputs
                    cout<<"This program calculates the sum of this sequence: \n"
                            "x - x^3/3 + x^5/5! - x^7/7! + ..."<<endl;
                    cout<<"Enter the x value: "<<endl;
                    cin>>x;
                    cout<<"Enter the number of terms: "<<endl;
                    cin>>n;

                    //Re-Display Inputs and write the Outputs
                    for (int counter = 1; counter <=n; counter += 2){
                        power = 1*counter;
                        fctrl = 1*counter;

                        for (int fact = counter; fact >= 1; fact--){
                            fctrl *=- fact;
                        }
                        sign = -1*sign;
                        sum += sign * (x*power)/(fctrl);
                    }
                    cout<<"Sum = "<<x<<endl;
                break;
            }
            default:{
                cout<<"Exiting."<<endl;
            }
        }
    }while(choice>0&&choice<10);
    return 0;
}

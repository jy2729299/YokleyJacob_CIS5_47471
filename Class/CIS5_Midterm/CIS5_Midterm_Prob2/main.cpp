/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 25, 2017, 3:42 PM
 * Purpose: Midterm Problem #2
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
    //Exit function main, end of program
    return 0;
}

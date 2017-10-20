/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 18, 2017, 4:22 PM
 * Purpose: Write a program that can be used as a math tutor for a young student
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //For rand() and srand()
#include <ctime>     //For time function
#include <stdlib.h>  //For the exit function
#include <iomanip>   //For setprecision
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    short anum1, anum2, sum;    //Addition = variables for two random numbers and the sum
    int snum1, snum2, diff;   //For subtraction
    short mnum1, mnum2, prod;  //For multiplication
    float dnum1, dnum2, quotnt;  //For division
    float a;                   //user answer for all problems (float needed for division
    short menu;              //Menu choice
    unsigned seed = time(0);   //used to get unique random numbers
    srand(seed);

    //Variable Initialization
    
  
    //Process Mapping - Inputs to Outputs
    cout<<"Welcome to the Math Tutor Program!"<<endl;
    do{
        cout<<endl;
        cout<<"What type of problem would you like to practice?\n\n"
                "1. Addition \n"
                "2. Subtraction \n"
                "3. Multiplication \n"
                "4. Division \n"
                "5. Quit \n\n"
                "Enter the corresponding number...";
        cin>>menu;
        if (menu < 1 || menu > 5){ //Re-displays menu if menu choice is not valid
            cout<<"Enter a valid number on the menu."<<endl;
            cout<<endl;
            cout<<"What type of problem would you like to practice?\n\n"
                    "1. Addition \n"
                    "2. Subtraction \n"
                    "3. Multiplication \n"
                    "4. Division \n"
                    "5. Quit \n\n"
                    "Enter the corresponding number...";
            cin>>menu;
        }
        if (menu == 5){    //Exits the program as a success if user chooses to quit
            cout<<"Have a good day!"<<endl;
            exit(EXIT_SUCCESS);
        }
        cout<<endl;
            switch(menu){
                //Addition
                case 1: {
                    anum1 = (rand() %(999 - 100 + 1)) + 100; //using range limiting formula on page 128
                    anum2 = (rand() %(999 - 100 + 1)) + 100; 

                    sum = anum1 + anum2;

                    cout<<" "<<anum1<<endl;   //displaying problem
                    cout<<"+"<<anum2<<endl;
                    cout<<"____"<<endl;

                    cout<<"What is the answer?"<<endl;
                    cin>>a;        //user enters answer here
                    if (a == sum)      //if use answer matches sum, praises user
                        cout<<"Correct! \n"<<anum1<< " + "<<anum2<<" = "<<sum<<endl;
                    else               //if the wrong answer is enter, program displays answer and tells user to try another one
                        cout<<"Incorrect. Returning to menu. \n"<<anum1<< " + "<<anum2<<" = "<<sum<<endl;
                    
                }
                break;
                //Subtraction
                case 2: {
                    snum1 = (rand() %(999 - 100 + 1)) + 100; //using range limiting formula on page 128
                    snum2 = (rand() %(999 - 100 + 1)) + 100; 

                    diff = snum1 - snum2;

                    cout<<" "<<snum1<<endl;   //displaying problem
                    cout<<"-"<<snum2<<endl;
                    cout<<"____"<<endl;

                    cout<<"What is the answer? (Remember to account for negatives!)"<<endl;
                    cin>>a;        //user enters answer here
                    if (a == diff)      //if user answer matches difference, praises user
                        cout<<"Correct! \n"<<snum1<< " - "<<snum2<<" = "<<diff<<endl;
                    else               //if the wrong answer is enter, program displays answer and tells user to try another one
                        cout<<"Incorrect. Returning to menu. \n"<<snum1<< " - "<<snum2<<" = "<<diff<<endl;
                    
                }
                break;
                //Multiplication
                case 3: {
                    mnum1 = (rand() %(999 - 100 + 1)) + 100; //using range limiting formula on page 128
                    mnum2 = rand() % 10 + 1;  //Second number can only go up to 10 for convenience

                    prod = mnum1 * mnum2;

                    cout<<" "<<mnum1<<endl;   //displaying problem
                    cout<<"x "<<mnum2<<endl;
                    cout<<"____"<<endl;

                    cout<<"What is the answer?"<<endl;
                    cin>>a;        //user enters answer here
                    if (a == prod)      //if user answer matches product, praises user
                        cout<<"Correct! \n"<<mnum1<< " x "<<mnum2<<" = "<<prod<<endl;
                    else               //if the wrong answer is enter, program displays answer and tells user to try another one
                        cout<<"Incorrect. Returning to menu. \n"<<mnum1<< " x "<<mnum2<<" = "<<prod<<endl;
                    
                }
                break;
                //Division
                case 4: {
                    dnum1 = (rand() %(999 - 100 + 1)) + 100; //using range limiting formula on page 128
                    dnum2 = rand() % 10 + 1;     //Second number can only go to ten for convenience

                    quotnt = dnum1 / dnum2;
                    cout<<setprecision(1)<<fixed; //Can't avoid getting division problems that will result in decimals, so setprecision used for convenience

                    cout<<" "<<dnum1<<" / "<<dnum2<<endl;   //displaying problem
                    cout<<"What is the answer? (Round to one decimal place)"<<endl;
                    cin>>a;        //user enters answer here
                    if (a == quotnt){      //if user answer matches quotient, praises user                    
                        cout<<"Correct! \n"<<dnum1<< " / "<<dnum2<<" = "<<quotnt<<endl;
                    }
                    else{               //if the wrong answer is entered, program displays answer and tells user to try another one
                        cout<<"Incorrect. Returning to menu. \n"<<dnum1<< " / "<<dnum2<<" = "<<quotnt<<endl;
                    }
                }
                break;
            }
    }while(menu > 1 || menu < 5);
    //Re-Display Inputs and write the Outputs
    //Exit function main, end of program
    return 0;
}

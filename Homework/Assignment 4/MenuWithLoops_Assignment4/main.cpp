/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 20, 2017, 1:09 PM
 * Purpose: Menu with loops for assignment 4
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <ctime>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const float LVLRATE = 1.5;
const float CALORIE = 3.6;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    int choice;
    
    //Variable Initialization
    do{
        
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Gaddis Chap 5 Problem 1: Sum of Numbers"<<endl;
        cout<<"2. Gaddis Chap 5 Problem 3: Ocean Levels"<<endl;
        cout<<"3. Gaddis Chap 5 Problem 4: Calories Burned"<<endl;
        cout<<"4. Gaddis Chap 5 Problem 6: Distance Traveled"<<endl;
        cout<<"5. Gaddis Chap 5 Problem 8: Math Tutor"<<endl;
        cout<<"6. Gaddis Chap 5 Problem 19: Budget Analysis"<<endl;
        cout<<"7. Gaddis Chaayp 5 Problem 20: Random Number Game"<<endl;
        cout<<"8. Gaddis Chap 5 Problem 22: Square Display"<<endl;
        cout<<"9. Gaddis Chap 5 Problem 23: Pattern Display"<<endl;
        cin>>choice;

        //Process Mapping - Inputs to Outputs
        switch(choice){
            case 1:{
                cout<<"Gaddis Chap 5 Problem 1: Sum of Numbers"<<endl;
                int input, sumnum;   //Number of the user's choosing and resulting sum

                //Variable Initialization


                //Process Mapping - Inputs to Outputs
                cout<<"Enter a positive integer: ";
                cin>>input;

                //If the input is less than 0, the program will keep asking for the user to reenter their number
                while (input < 0){
                    cout<<"I said a POSITIVE integer...";
                    cin>>input;  
                }

                //Re-Display Inputs and write the Outputs
                //Initializes a counter at 1 and keeps adding 1 to it after each iteration up until the counter is equal to the user input
                for (int count = 1; count <= input; count++){
                    //Adds the count to the sum before looping again (1 is first, then counter increases to 2 and is added to the sum of 1, etc.)
                    sumnum += count;
                }
                cout<<"The sum of all numbers from 1 to "<<input<<" = "<<sumnum<<endl;
                cout<<endl;
                break;
            }
            case 2:{
                cout<<"Gaddis Chap 5 Problem 3: Ocean Levels"<<endl;
                unsigned short years = 25;   //Number of years to be shown
                float level;                 //To store and print the new level

                //Variable Initialization

                //Process Mapping - Inputs to Outputs
                cout<<"The following table shows how many millimeters the ocean will have\nrisen in the next 25 years."<<endl;
                cout<<"Year                  Amount Risen (mm)\n"
                        "========================================"<<endl;

                //Re-Display Inputs and write the Outputs
                //Counter runs loop 25 times (each count represents a year) and each time the ocean level increases by the rate
                for(int count = 1; count <= 25; count++){
                    level += LVLRATE;
                    cout<<setprecision(1)<<fixed;
                    cout<<right<<setw(4)<<count<<setw(35)<<level<<endl;
                }
                cout<<endl;
                break;
            }
            case 3:{
                cout<<"Gaddis Chap 5 Problem 4: Calories Burned"<<endl;
                
                cout<<"Time (mins)      Cals Burned"<<endl;
                cout<<"=============================="<<endl;
                for(float mins = 5; mins <= 30; mins += 5){
                    cout<<right<<setw(8)<<mins<<setw(18)<<mins*CALORIE<<endl;
                }
                cout<<endl;
                break;
            }
            case 4:{
                cout<<"Gaddis Chap 5 Problem 6: Distance Traveled"<<endl;
                //Variable Declaration
                int speed, hours;

                //Variable Initialization

                //Process Mapping - Inputs to Outputs
                cout<<"How fast have you been traveling in mph?"<<endl;
                cin>>speed;
                cout<<"How many hours have you been traveling?"<<endl;
                cin>>hours;

                cout<<"Hour     Distance Traveled"<<endl;
                cout<<"--------------------------"<<endl;

                for(int count = 1; count <= hours; count++){
                    cout<<right<<setw(4)<<count<<setw(21)<<count*speed<<endl;
                }
                cout<<endl;
                break;
            }
            case 5:{
                cout<<"Gaddis Chap 5 Problem 8: Math Tutor"<<endl;
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
                break;
            }
            case 6:{
                cout<<"Gaddis Chap 5 Problem 19: Budget Analysis"<<endl;
                //Variable Declaration
                float budget, postbud;      //Original budget and budget after having gone over or under
                float totalb = 0, expense;
                char cont = 'y';                  //input to continue adding expenses

                //Variable Initialization

                //Process Mapping - Inputs to Outputs
                cout<<setprecision(2)<<fixed;
                cout<<"What was your budget this past month?"<<endl;
                cin>>budget;
                while(cont == 'y'){
                    cout<<"Enter an expense and hit enter: "<<endl;
                    cin>>expense;
                    totalb = totalb + expense;
                    cout<<"Do you have any more expenses? y/n: "<<endl;
                    cin>>cont;
                }

                //Re-Display Inputs and write the Outputs
                postbud = budget - totalb;
                if (postbud >= 0){
                    cout<<"Congratulations, you stayed within your budget!"<<endl;
                    cout<<"Budget: $"<<budget<<setw(7)<<"Total spent: $"<<totalb<<endl;
                    cout<<"Remaining cash $"<<postbud<<endl;
                }
                else if (postbud < 0){
                    cout<<"You did not meet your budget."<<endl;
                    cout<<"======================================"<<endl;
                    cout<<"Budget: $"<<budget<<endl;
                    cout<<"Total spent: $"<<totalb<<endl;
                    cout<<"Remaining cash $"<<postbud<<endl;
                }
                break;
            }
            case 7:{
                cout<<"Gaddis Chap 5 Problem 20: Random Number Game"<<endl;
                int guess = 1;
                unsigned int seed = time(0);

                //Seed random number generator
                srand(seed);

                //Variable Initialization
                unsigned short num = rand()% 100 + 1;

                //Process Mapping - Inputs to Outputs
                cout<<"I'm thinking of a number from 1 to 100. Can you guess it?"<<endl;
                while (guess >= 1 && guess <= 100){
                    cin>>guess;
                    if (guess < num){
                        cout<<"Too low. Guess again!"<<endl;
                        if (guess < 1){ 
                            //Program corrects for a user who can't read with a reminder that the number can't be less than 1
                            cout<<"Can't be less than 1"<<endl;
                            guess = 1;
                        }
                    }
                    else if (guess > num){
                        cout<<"Too high. Guess again!"<<endl;
                        if (guess > 100){
                            //Program corrects for a user who can't read with a reminder that the number can't be greater than 100
                            cout<<"Can't be greater than 100"<<endl;
                            guess = 1;
                        }
                    }
                    else if (guess == num){
                        cout<<"You got it!"<<endl;
                        exit(EXIT_SUCCESS);
                    }
                }
                break;
            }
            case 8:{
                cout<<"Gaddis Chap 5 Problem 22: Square Display"<<endl;
                //Variable Declaration
                int size;

                //Variable Initialization

                //Process Mapping - Inputs to Outputs
                cout<<"Enter a number no greater than 15 for the size of your square"<<endl;
                cin>>size;
                if (size < 1){
                    size = 1;
                }
                else if (size > 15){
                    size = 15;
                }
                //Re-Display Inputs and write the Outputs

                /* A nested loop is necessary to make this work. Essentially the first loop has 
                 a counter that causes the loop to stop once it reaches the size the user entered.
                 For each loop, another loop runs that prints X's right next to one another for
                 every count. Once that count is full, the first loop ends by making a new line,
                 and then repeats, resulting in a square.
                */
                for (int row = 0; row < size; row++){
                    for (int column = 0; column < size; column++){
                        cout<<"X";
                    }
                    cout<<endl;
                }
                break;
            }
            case 9:{
                cout<<"Gaddis Chap 5 Problem 23: Pattern Display"<<endl;
                /*First triangle: a plus displays by a multiple of row1, which increases after
                the number of pluses on a line equals the value of row1, and then a new line prints.
                */

               for (int row1 = 0; row1 < 10; row1++){
                   for(int col1 = 0; col1 < row1; col1++){
                       cout<<"+";
                   }
                   cout<<endl;
               }

               /* Second triangle: Essentially the opposite of triangle one. Everything
                goes DOWN from 10, so the loop logic is the same, but the "direction" is reversed
                by making the rows decrease by 1 from 10 in each loop
                */

               for (int row2 = 10; row2 > 0; row2--){
                   for(int col2 = 0; col2 < row2; col2++){
                       cout<<"+";
                   }
                   cout<<endl;
               }
                           break;
                       }
                       default:{
                           cout<<"Thank you! Have a good day!"<<endl;
                       }
                   }
    }while(choice > 0 && choice < 10);
    //Re-Display Inputs and write the Outputs
    
    //Exit function main, end of program
    return 0;
}

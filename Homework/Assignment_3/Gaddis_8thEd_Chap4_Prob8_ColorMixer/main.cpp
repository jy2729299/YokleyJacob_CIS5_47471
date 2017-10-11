/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 11, 2017, 9:28 AM
 * Purpose: Have the user choose two primary colors to mix and display the result
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <string>    //For strimg imputs since colors are not values
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    string color1;
    string color2;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"This program mixes two primary colors and displays the result."<<endl;
    cout<<"Enter a primary color: "<<endl;
    cin>>color1;
    cout<<"Now enter a second primary color to mix with the first: "<<endl;
    cin>>color2;
  
    //Re-Display Inputs and write the Outputs
    
    /*This is a bit of a mess, but essentially, these 3 if statements each treat one of the 3 primary colors as a category. 
     * Within each of these statements is an if and else if statement that each stand for the other two remaining primary colors 
     * that do not include the category. Each color is given multiple or || conditions so that the program doesn't end just 
     * because a user typed in all caps instead of all lowercase. This results in a very user friendly program that allows for 
     * all primary colors with any kind of syntax to be used in any order to get the proper color mixture. This also took me 
     * longer to find out than I'd like to admit.*/
    
    if (color1 == "red" || color1 == "Red" || color1 == "RED")
        if (color2 == "blue" || color2 == "Blue" || color2 == "BLUE")
            cout<<"Red and blue make purple!"<<endl;
        else if (color2 == "yellow" || color2 == "Yellow" || color2 == "YELLOW")
            cout<<"Red and yellow make orange!"<<endl;
        
    if (color1 == "blue" || color1 == "Blue" || color1 == "BLUE")
        if (color2 == "red" || color2 == "Red" || color2 == "RED")
            cout<<"Blue and red make purple!"<<endl;
        else if (color2 == "yellow" || color2 == "Yellow" || color2 == "YELLOW")
            cout<<"Blue and yellow make orange!"<<endl;
        
    if (color1 == "yellow" || color1 == "Yellow" || color1 == "YELLOW")
        if (color2 == "blue" || color2 == "Blue" || color2 == "BLUE")
            cout<<"Yellow and blue make green!"<<endl;
        else if (color2 == "red" || color2 == "Red" || color2 == "RED")
            cout<<"Yellow and red make orange!"<<endl;
  
    //Exit function main, end of program
    return 0;
}
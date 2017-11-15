/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 10, 2017, 11:09 AM
 * Purpose: Pass the name of each division to ask for sales, then finds the 
 * highest sales of each division
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <string>    //For passing names of companies
#include <iomanip>   //For money format
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
float getSale(string);
void fndHigh(float, float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float salesNE, salesNW, salesSE, salesSW;  //for storing sales for each division

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    //Keeps asking user for each divisions sales by cycling through each name to pass
    for (int div = 0; div < 4; div++){
        switch(div){
            case 0: salesNE = getSale("Northeast");break;
            case 1: salesNW = getSale("Northwest");break;
            case 2: salesSE = getSale("Southeast");break;
            case 3: salesSW = getSale("Southwest");break;
        }
    }
    fndHigh(salesNE, salesNW, salesSE, salesSW);
    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

/*=====================================================
 |                  Sales Input                       |
 |                                                    |
 |Description: Passes name of a division and prompts  |
 | user to enter quarterly sales for that division.   |
 | Includes input validation to make sure all         |
 | entries are $0.00 or above.                        |
 |                                                    |
 |Inputs:                                             |
 |      divname - name of a division                  |  
 |Outputs:                                            |
 |      sales - sales gets stored in division variable| 
 |                                                    |
 ====================================================*/

float getSale(string divname){
    float sales = 0;
    cout<<"Enter the quarterly sales figure for the "<<divname<<" division: $";
    cin>>sales;
    cout<<endl;
    
    //Input validation
    while (sales < 0){
        cout<<"Sales must be $0.00 or higher: $";
        cin>>sales;
        cout<<endl;
    }
    //Sends users input back to that divisions variable to be stored there
    return sales;
}

/*=====================================================
 |                  Highest Sales                     |
 |                                                    |
 |Description: Passes and compares all division sales |
 |to find and output which one has the most sales     |
 |Inputs:                                             |
 |      sales(NE/NW/SE/SW) - Variables storing sales  |  
 |Outputs:                                            |
 |      sales(NE/NW/SE/SW) - Variables storing sales  |
 |                                                    |
 ====================================================*/

void fndHigh(float salesNE, float salesNW, float salesSE, float salesSW){
    cout<<setprecision(2)<<fixed;
    if(salesNE > salesSE && salesNE > salesNW && salesNE > salesSW){
        cout<<endl;
        cout<<"Northeast Division had the most sales with a total of $"
                <<salesNE<<endl;        
    }
    
    else if(salesSE > salesNE && salesSE > salesNW && salesSE > salesSW){
        cout<<endl;
        cout<<"Southeast Division had the most sales with a total of $"
                <<salesSE<<endl;
    }
    
    else if(salesNW > salesNE && salesNW > salesSE && salesNW > salesSW){
        cout<<endl;
        cout<<"Northwest Division had the most sales with a total of $"
                <<salesNW<<endl;       
    }
    
    else{
        cout<<endl;
        cout<<"Southwest Division had the most sales with a total of $"
                <<salesSW<<endl;        
    } 
}    
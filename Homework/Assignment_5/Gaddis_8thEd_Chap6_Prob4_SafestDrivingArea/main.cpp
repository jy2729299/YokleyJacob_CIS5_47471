/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 10, 2017, 11:45 AM
 * Purpose: Pass the name of each region to see which had the fewest 
 * car accidents
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <string>    //For passing names of companies
#include <iomanip>   //For money format
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
float crashes(string);
void fndLow(int, int, int, int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    int Ncrash, Scrash, Ecrash, Wcrash, Ccrash;  //for storing sales for each division

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    //Keeps asking user for each divisions sales by cycling through each name to pass
    for (int reg = 0; reg < 5; reg++){
        switch(reg){
            case 0: Ncrash = crashes("North");break;
            case 1: Scrash = crashes("South");break;
            case 2: Ecrash = crashes("East");break;
            case 3: Wcrash = crashes("West");break;
            case 4: Ccrash = crashes("Central");break;
            
        }
    }
    fndLow(Ncrash, Scrash, Ecrash, Wcrash, Ccrash);
    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

/*=====================================================
 |                 Crashes Input                      |
 |                                                    |
 |Description: Passes name of a region and prompts    |
 | user to enter accidents for that region.           |
 | Includes input validation to make sure all         |
 | entries are 0 or above                             |
 |                                                    |
 |Inputs:                                             |
 |      region - name of a region                     |  
 |Outputs:                                            |
 |      accdnts - accidents stored in crashes for each| 
 |                region                              |
 ====================================================*/

float crashes(string region){
    float accdnts = 0;
    cout<<"Enter the number of accidents for the "<<region<<" region: ";
    cin>>accdnts;
    cout<<endl;
    
    //Input validation
    while (accdnts < 0){
        cout<<"Accidents cannot be negative: ";
        cin>>accdnts;
        cout<<endl;
    }
    //Sends users input back to that divisions variable to be stored there
    return accdnts;
}

/*=====================================================
 |                  Lowest Crashes                    |
 |                                                    |
 |Description: Passes and compares all region crashes |
 |to determine and output the one with the lowest     |
 |number of crashes                                   |
 |Input:                                              |
 |      (N/W/E/S/C)crash - Variables storing crashes  |  
 |Outputs:                                            |
 |      (N/W/E/S/C)crash - Variables storing crashes  |
 |                                                    |
 ====================================================*/

void fndLow(int Ncrash, int Scrash, int Ecrash, int Wcrash, int Ccrash){
    cout<<setprecision(2)<<fixed;
    if(Ncrash < Scrash && Ncrash < Ecrash && Ncrash < Wcrash && 
            Ncrash < Ccrash){
        cout<<endl;
        cout<<"The Northern region had the least accidents with a total of "
                <<Ncrash<<"."<<endl;
    }
    
    else if(Scrash < Ncrash && Scrash < Ecrash && Scrash < Wcrash && 
            Scrash < Ccrash){
        cout<<endl;
        cout<<"The Southern region had the least accidents with a total of "
                <<Scrash<<"."<<endl;
    }  
    
    else if(Ecrash < Ncrash && Ecrash < Scrash && Ecrash < Wcrash && 
            Ecrash < Ccrash){
        cout<<endl;
        cout<<"The Eastern region had the least accidents with a total of "
                <<Ecrash<<"."<<endl;
    }

    else if(Wcrash < Ncrash && Wcrash < Ecrash && Wcrash < Scrash && 
            Wcrash < Ccrash){
        cout<<endl;
        cout<<"The Western region had the least accidents with a total of "
                <<Wcrash<<"."<<endl;
    }

    else{
        cout<<endl;
        cout<<"The Central region had the least accidents with a total of "
                <<Ccrash<<"."<<endl;
    }    

}    
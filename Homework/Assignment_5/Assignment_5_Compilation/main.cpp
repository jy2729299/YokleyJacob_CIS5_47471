/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 14, 2017, 4:13 PM
 * Purpose: To compile all of the problems from assignment 6
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cmath>     //Math library
#include <ctime>     //Time function
#include <cstdlib>   //Standard library
#include <iomanip>   //I/O Manipulation library
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
float retail(float, float, int);
float getSale(string);
void fndHigh(float, float, float, float);
float crashes(string);
void fndLow(int, int, int, int, int);
float getLen();
float getWid();
float getArea(float, float);
void seeData(float, float, float);
void coinage(int);
int numEmps();
int getDays(int);
float getAvg(int, int);
float fValue(float, float, int);
float KEcalc(float, float);
float pValue(float, float, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    float whlsale;        //wholesale cost
    float rtlcost;       //for storing total retail cost
    int percent;        //user's markup percentage
    
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"Enter the wholesale value of the item: $";
    cin>>whlsale;
    cout<<endl;
    
    //Input validation
    while (whlsale < 0){
        cout<<"Wholesale value must be a positive number. Try again: $ ";
        cin>>whlsale;
        cout<<endl;
    }
    
    cout<<"Enter the markup percentage: ";
    cin>>percent;
    cout<<endl;
    
    while (percent < 0){
    cout<<"Markup percentage must be a positive number. Try again: ";
    cin>>percent;
    cout<<endl;
    }
    
    rtlcost = retail(whlsale, 0, percent);  //Sends user's inputs to function
    //Function returns value and stores in rtlcost!
    
    //Re-display inputs and write the outputs
    cout<<"Your total is: $"<<rtlcost<<endl;
    cout<<"Have a nice day!"<<endl;
    
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

    //Variable Declaration
    float length, width, area;
    
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    length = getLen();
    
    width = getWid();
    
    area = getArea(length, width);
    
    seeData(length, width, area);

    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program

    //Random number seed
    unsigned seed = time(0);
    srand(seed);
    
    //Variable Declaration
    int flips;
    string results;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"How many times do you want to flip this coin?"<<endl;
    cin>>flips;
    
    //Input validation (for fun, of course)
    while (flips <0){
        cout<<"You can't flip a coin negative times, silly."<<endl;
        cout<<"How many times?"<<endl;
        cin>>flips;
    }
    coinage(flips);
    
    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program

    //Variable Declaration
    int workers, missday;
    float avgmiss;

    //Variable Initialization
    workers = numEmps();
    missday = getDays(workers);
    avgmiss = getAvg(workers, missday);
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"Average number of days absent: "<<avgmiss<<endl;
  
    //Exit function main, end of program

    //Variable Declaration
    float F2 = 0, i = 0, P2 = 0; //F2 = future value, r = monthly interest rate, P2 = present value
    int t = 0;        //t = number of months
    //Added a 2 to some variables so that the program that contains the both
    //of these programs doesn't freak out
    
    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the present value of the account: $";
    cin>>P2;
    cout<<endl;
    
    cout<<"Enter the monthly interest rate: ";
    cin>>i;
    cout<<endl;
    
    cout<<"Enter the number of months you plan on storing your money: ";
    cin>>t;
    cout<<endl;
    
    F2 = fValue(P2, i, t);
    //Re-Display Inputs and write the Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"You will have $"<<F2<<" after "<<t<<" months"<<endl;
    
    //Exit function main, end of program

    //Variable Declaration
    float mass, vlcty, KE;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the mass of the object in kilograms: ";
    cin>>mass;
    cout<<endl;
    cout<<"Enter the velocity of the object in m/s: ";
    cin>>vlcty;
    cout<<endl;
    
    KE = KEcalc(mass, vlcty);

    //Re-Display Inputs and write the Outputs
    cout<<setprecision(3)<<fixed;
    cout<<"KE = "<<KE<<" Joules"<<endl;
  
    //Exit function main, end of program

    //Variable Declaration
    float F = 0, r = 0, P = 0; //F = future value, r = annual interest rate, P = present value
    int n = 0;        //n = number of years

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the amount of money you want to save in the account: $";
    cin>>F;
    cout<<endl;
    
    cout<<"Enter the annual interest rate: ";
    cin>>r;
    cout<<endl;
    
    cout<<"Enter the number of years you plan on storing your money: ";
    cin>>n;
    cout<<endl;
    
    P = pValue(F, r, n);
    //Re-Display Inputs and write the Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"You must deposit $"<<P<<" in order to save $"<<F<<" in "<<n<<" years"
            <<endl;
    
    //Exit function main, end of program    
    
    return 0;
}


/*========================================================
 |              RETAIL CALCULATOR FUNCTION               |
 |                                                       |
 |Description: Takes markup percentage of input price    |
 |and adds it to the wholesale cost to get retail price  |
 |                                                       |
 |Inputs:                                                |
 |      cost - wholesale cost of item                    |
 |      markup - markup percentage of item               |
 |Output:                                                |
 |      total - total retail value                       |
 | =====================================================*/

float retail(float cost, float total, int markup){
    cout<<"Cost: $"<<cost<<"    Markup: "<<markup<<"%"<<endl;
    
    total = cost + ((static_cast<float>(markup)/100)*cost);
    
    return total;
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


//Get Length function is simple: it asks for the length of a rectangle
//and returns it to main

float getLen(){
    float length;
    cout<<"Enter the length of your rectangle: ";
    cin>>length;
    
    return length;
}

//Same for Get Width

float getWid(){
    float width;
    cout<<"Enter the length of your rectangle: ";
    cin>>width;
    
    return width;
}

//Get Area simply multiplies length and width together
//Length and width from main are entered into len and wid

float getArea(float len, float wid){
    return len*wid;
}

void seeData(float len, float wid, float area){
    cout<<len<<" X "<<wid<<" = "<<area<<endl;
}


void coinage(int flips){
    int side;
    for(int toss = 1; toss <= flips; toss++){
        side = rand()%2+1;
        if (side == 1){
            cout<<"Heads"<<endl;
        }
        else{
            cout<<"Tails"<<endl;
        }
    }
}



int numEmps(){
    int workers;
    cout<<"How many people work in the company?"<<endl;
    cin>>workers;
    while (workers < 1){
        cout<<"How can you run a company without any employees?"<<endl;
        cout<<"For real now, how many employees?"<<endl;
        cin>>workers;
    }
    return workers;
}

int getDays(int workers){
    int missday;
    cout<<"How many days did each employee miss in the past year?"<<endl;
    cin>>missday;
    while (missday < 0){
        cout<<"Negative days? Sounds like an absence overflow."<<endl;
        cout<<"How many days missed in a POSITIVE number?"<<endl;
        cin>>missday;
    }    
    return missday;
}

float getAvg(int workers, int missday){
    float average = static_cast<float>(missday)/static_cast<float>(workers);
    
    return average;
}


float fValue(float P2, float i, int t){
    float F2;
    i *= 0.01;
    i += 1;
    F2 = P2*(pow(i, t));
    
    return F2;
    
}


float pValue(float F,float r,int n){
    float P;
    P = F / (pow(1 + (r*0.01),n));
    
    return P;
    
}

float KEcalc(float mass, float vlcty){
    float KE = 0.5*(mass*(pow(vlcty, 2)));
    
    return KE;
}
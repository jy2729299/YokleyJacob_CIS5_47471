/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 28, 2017, 11:16 PM
 * Purpose: Solves all of assignment 6 (hopefully)
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//PROBLEM 1 - LARGEST/SMALLEST ARRAY
    //Variable Declaration
    const int SIZE = 10;
    int nums[SIZE];
    int low1, high1, compare;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    for(int i = 0; i < SIZE; i++){
        cout<<"Enter number "<<i+1<<": "<<endl;
        cin>>nums[i];
    }
    
    low1 = nums[0];
    high1 = nums[0];
    
    for(int i = 1; i < SIZE; i++){
        compare = nums[i];
        
        if(compare <low1){
            low1 = compare;
        }
        if(compare > high1){
            high1 = compare;
        }
    }
    
    cout<<"Smallest value: "<<low1<<endl;
    cout<<"Largest value: "<<high1<<endl;
    
//PROBLEM 2 - RAINFALL STATS
    //Variable Declaration
    const int SIZE2 = 12;
    float totrain[SIZE2];
    float total, average, highest, lowest, temp;
    

    //Variable Initialization
    for(int i = 0; i < SIZE2; i++){
        cout<<"Enter rainfall in inches for month "<<i+1<<": "<<endl;
        cin>>totrain[i];
        while (totrain[i] < 0){
            cout<<"Rainfall can not be negative. Please re-enter: "<<endl;
            cin>>totrain[i];
        }
    }
    cout<<setprecision(2)<<fixed;
    
    //Total rainfall for the year
    for(int i = 0; i < SIZE2; i++){
        total += totrain[i];
    }
    
    //Average of the total rainfall
    average = total/SIZE2;
    
    //Finding the lowest and highest amount of rain
    lowest = totrain[0];
    highest = totrain[0];
    
    for(int i = 1; i < SIZE2; i++){
        temp = totrain[i];
        
        if(temp <lowest){
            lowest = temp;
        }
        if(temp > highest){
            highest = temp;
        }
    }  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<endl;
    cout<<"Total rainfall: "<<total<<" in"<<endl;
    
    cout<<"Average monthly rainfall: "<<average<<" in"<<endl;
    
    if (totrain[0] == lowest){
        cout<<endl;
        cout<<"Month 1 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[1] == lowest){
        cout<<endl;
        cout<<"Month 2 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[2] == lowest){
        cout<<endl;
        cout<<"Month 3 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[3] == lowest){
        cout<<endl;
        cout<<"Month 4 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[4] == lowest){
        cout<<endl;
        cout<<"Month 5 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[5] == lowest){
        cout<<endl;
        cout<<"Month 6 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[6] == lowest){
        cout<<endl;
        cout<<"Month 7 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[7] == lowest){
        cout<<endl;
        cout<<"Month 8 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[8] == lowest){
        cout<<endl;
        cout<<"Month 9 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }    
    else if (totrain[9] == lowest){
        cout<<endl;
        cout<<"Month 10 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }
    else if (totrain[10] == lowest){
        cout<<endl;
        cout<<"Month 11 had the lowest rainfall: "<<lowest<<" in"<<endl;
    } 
    else if (totrain[11] == lowest){
        cout<<endl;
        cout<<"Month 12 had the lowest rainfall: "<<lowest<<" in"<<endl;
    }  
    
    if (totrain[0] == highest){
        cout<<endl;
        cout<<"Month 1 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[1] == highest){
        cout<<endl;
        cout<<"Month 2 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[2] == highest){
        cout<<endl;
        cout<<"Month 3 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[3] == highest){
        cout<<endl;
        cout<<"Month 4 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[4] == highest){
        cout<<endl;
        cout<<"Month 5 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[5] == highest){
        cout<<endl;
        cout<<"Month 6 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[6] == highest){
        cout<<endl;
        cout<<"Month 7 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[7] == highest){
        cout<<endl;
        cout<<"Month 8 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[8] == highest){
        cout<<endl;
        cout<<"Month 9 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[9] == highest){
        cout<<endl;
        cout<<"Month 10 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[10] == highest){
        cout<<endl;
        cout<<"Month 11 had the highest rainfall: "<<highest<<" in"<<endl;
    }
    else if (totrain[11] == highest){
        cout<<endl;
        cout<<"Month 12 had the highest rainfall: "<<highest<<" in"<<endl;
    } 

//PROBLEM 3 - CHIPS AND SALSA
    //Variable Declaration
    const int SIZE3 = 5;
    string salsa[SIZE3] = {"mild", "medium", "sweet", "hot", "zesty"};
    int sales[SIZE3];
    int low3, high3, saltemp, salsall;

    //Variable Initialization
    for (int i = 0; i < SIZE3; i++){
        cout<<"Enter number of "<<salsa[i]<<" jars sold: "<<endl;
        cin>>sales[i];
        while(sales[i]<0){
            cout<<"Sales can not be negative: ";
            cin>>sales[i];
        }        
    }
    
    low3 = sales[0];
    high3 = sales[0];
    
    for(int i = 1; i < SIZE3; i++){
        saltemp = sales[i];
        
        if(saltemp <low3){
            low3 = saltemp;
        }
        if(saltemp > high3){
            high3 = saltemp;
        }
    }
    
    for(int i = 0; i < SIZE3; i++){
        salsall += sales[i];
    }
  
    //Process Mapping - Inputs to Outputs

    //Re-Display Inputs and write the Outputs
    cout<<"   SALES REPORT      "<<endl;
    cout<<"====================="<<endl;
    cout<<right<<"Salsa"<<setw(13)<<"Sales"<<endl;
    cout<<right<<setw(0)<<salsa[0]<<setw(13)<<sales[0]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<salsa[1]<<setw(13)<<sales[1]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<salsa[2]<<setw(13)<<sales[2]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<salsa[3]<<setw(13)<<sales[3]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<salsa[4]<<setw(13)<<sales[4]<<right<<setw(0)<<endl;
    cout<<right<<setw(0)<<"TOTAL: "<<setw(13)<<right<<salsall<<setw(0)<<endl;
    
    if (sales[0] == low3){
        cout<<endl;
        cout<<"Mild had the lowest sales: "<<low3<<" jars"<<endl;
    }
    else if (sales[1] == low3){
        cout<<endl;
        cout<<"Medium had the lowest sales: "<<low3<<" jars"<<endl;
    }
    else if (sales[2] == low3){
        cout<<endl;
        cout<<"Sweet had the lowest sales: "<<low3<<" jars"<<endl;
    }
    else if (sales[3] == low3){
        cout<<endl;
        cout<<"Hot had the lowest sales: "<<low3<<" jars"<<endl;
    }
    else if (sales[4] == low3){
        cout<<endl;
        cout<<"Zesty had the lowest sales: "<<low3<<" jars"<<endl;
    }    

    if (sales[0] == high3){
        cout<<endl;
        cout<<"Mild had the highest sales: "<<high3<<" jars"<<endl;
    }
    else if (sales[1] == high3){
        cout<<endl;
        cout<<"Medium had the highest sales: "<<high3<<" jars"<<endl;
    }
    else if (sales[2] == high3){
        cout<<endl;
        cout<<"Sweet had the highest sales: "<<high3<<" jars"<<endl;
    }
    else if (sales[3] == high3){
        cout<<endl;
        cout<<"Hot had the highest sales: "<<high3<<" jars"<<endl;
    }
    else if (sales[4] == high3){
        cout<<endl;
        cout<<"Zesty had the highest sales: "<<high3<<" jars"<<endl;
    }

//PROBLEM 4 - LARGER THAN N
    //Variable Declaration
    //Initializing Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    int arrsize, n;
    int array[arrsize];

    //Variable Initialization
    cout<<"How many numbers do you want generated?"<<endl;
    cin>>arrsize;
    cout<<"Pick a number from 1 to 99: "<<endl;
    cin>>n;
    
    while(n < 1 || n > 99){
        cout<<"Pick a number from 1 to 99: "<<endl;
        cin>>n;        
    }
  
    //Process Mapping - Inputs to Outputs
    for (int i = 0; i < arrsize; i++){
        array[i] = rand()%99+1;
        if (array[i] > n){
            cout<<array[i]<<endl;
        }
    }

//PROBLEM 5 - MONKEY BUSINESS
    //Variable Declaration
    const int WEEK = 5;
    const int MONKEYS = 3;
    int monkey[MONKEYS][WEEK];
    int foodsum[MONKEYS];
    int avgfood, avg1, avg2, avg3, totfood;

    //Variable Initialization
    for(int i = 0; i < MONKEYS; i++){
        for (int j = 0; j < WEEK; j++){
            cout<<"Enter the amount of food in pounds eaten by monkey "<<i+1<<
                    " on day "<<j+1<<": "<<endl;
            cin>>monkey[i][j];
            while (monkey[i][j] < 0){
                cout<<"Can not be a negative number: "<<endl;
                cin>>monkey[i][j];
            }
            totfood += monkey[i][j];
            foodsum[i] += monkey[i][j];
        }
    }
    
    avgfood = totfood/WEEK;
    avg1 = foodsum[0]/WEEK;
    avg2 = foodsum[1]/WEEK;
    avg3 = foodsum[2]/WEEK;

    //Re-Display Inputs and write the Outputs
    
    cout<<"Average total: "<<avgfood<<" lbs"<<endl;
    if(avg1 <= avg2 && avg1 <= avg3){
        cout<<"Least food eaten by any one monkey: "<<foodsum[0]<< "lbs"<<endl;
    }
    else if(avg2 <= avg1 && avg2 <= avg3){
        cout<<"Least food eaten by any one monkey: "<<foodsum[1]<< "lbs"<<endl;
    }
    else{
        cout<<"Least food eaten by any one monkey: "<<foodsum[2]<< "lbs"<<endl;
    }
    
    if(avg1 >= avg2 && avg1 >= avg3){
        cout<<"Most food eaten by any one monkey: "<<foodsum[0]<< "lbs"<<endl;
    }
    else if(avg2 >= avg1 && avg2 >= avg3){
        cout<<"Most food eaten by any one monkey: "<<foodsum[1]<< "lbs"<<endl;
    }
    else{
        cout<<"Most food eaten by any one monkey: "<<foodsum[2]<< "lbs"<<endl;
    }
      
    //Exit function main, end of program
    return 0;
}
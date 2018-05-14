/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 16, 2017, 4:25 PM
 * Purpose: Final - All Problems
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const int COLS = 6;

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void fillVec(vector<int>& , vector<int>& , int );
void prntVec(vector<int>& , vector<int>& , int );
void readarr(string a[], int n, ifstream& infile);
void swaparr(string& a, string& b);
void prntarr(string a[],int n,int perLine);
void sortarr(string a[],int n);
void smallest(string a[],int n,int pos);
void readary(int [][COLS], int, ifstream&, ofstream&, int);
void addary(int [][COLS], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Get the system time
    unsigned seed = time(0);
    
    //Seed the random number generator
    srand(seed);
    
    //Variable Declaration
    
    //Process Mapping - Inputs to Outputs
    prob1();
    prob2();
    prob3();
    prob4();
    prob5();
    prob6();
    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

void prob1(){
    unsigned short num;
    unsigned short temp;
    signed short inv;
    signed short invtemp;
    signed short max2dig;    
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl;
    
    if (num < -32768 || num > 32767){
        cout<<"Conversion not possible. Doesn't fit range of signed short."
                <<endl;
    }
    else {    
        while(num != 0){
            num = static_cast<signed short>(num);
            temp = static_cast<signed short>(temp);
            temp = num % 10;        //Temp holds tenth value (the remainder) of number
            inv = inv * 10 + temp; //Inv multiplies itself by 10 and adds the remainder
            num /= 10;            //Process repeats until num divides itself to 0,
                                 //Creates a reverse number by adding the number placements "backwards"
        }
    //Re-Display Inputs and write the Outputs
        cout<<"Reverse: "<<inv<<endl;
        
        if (inv >= 11){
            invtemp = inv;
            while (invtemp != 1){
                invtemp = invtemp - 1;
                max2dig++;
            }
            if (max2dig > 99){
                max2dig = 99;
            }
            cout<<"Highest two digit number that can be subtracted: "<<max2dig
                    <<endl;
            cout<<inv<<" - "<<max2dig<<" = "<<inv - max2dig<<endl;
        }
    }
}

void prob2(){
    int random, x, guess, numgues, tentox, plgues;
    bool isgame;
    char cont;    
    do{
        x = (rand() % (5 - 1 + 1) + 1);
        tentox = pow(10, x);
        random = (rand() % (tentox - 1 + 1) + 1);
        numgues = log2(tentox) + 1;

        //Process Mapping - Inputs to Outputs
        cout<<endl;
        cout<<"I'm thinking of a number from 1 to "<<tentox<<"."<<endl;
        cout<<"Can you guess my number?"<<endl;
        cout<<"You have a maximum of "<<numgues<<" guesses."<<endl;
        cout<<endl;

        //Re-Display Inputs and write the Outputs
        while (guess != random && plgues != numgues){
            cout<<"Enter your guess: ";
            cin>>guess;
            cout<<endl;
            if (guess > random){
                cout<<"Too high. Try again."<<endl;
                cout<<endl;
            }
            else if (guess < random){
                cout<<"Too low. Try again."<<endl;
                cout<<endl;
            }
            else if (guess == random){
                cout<<"You guessed the number!"<<endl;
                cout<<endl;
                cout<<"Would you like to play again? (y/n)"<<endl;
                cin>>cont;
                if (cont == 'n'){
                    isgame = false;
                }
                else{
                    isgame = true;
                } 
            }
            else if (plgues == numgues){
                isgame = false;
                cout<<"Out of tries. Better luck next time!"<<endl;
                exit(EXIT_SUCCESS);
            }
            plgues++;
        }
    }while(isgame);    
}

void prob3(){
    //Variable Declaration
    int arrsize, cols = 2;
    int array[cols][arrsize];    
    int vecsize, number;
    vector<int> even;
    vector<int> odd;    
    //Process Mapping - Inputs to Outputs
    cout<<"Enter the size of both vectors: ";
    cin>>vecsize;
    cout<<endl;

    //Re-Display Inputs and write the Outputs
    fillVec(even, odd, vecsize);
    prntVec(even, odd, vecsize);
        
    cout<<"Enter size of array: ";
    cin>>arrsize;
    cout<<endl<<endl;
    
    
    //I can't figure this array part out for the life of me, but I'll at least
    //demonstrate how 2D arrays work by making a block of random numbers and 
    //printing them
    for (int i = 0; i < cols; i++){
        for (int j = 0; j < arrsize; j++){
            array[i][j] = (rand() % (99 - 10 + 1)) + 10;
        }
    }

    for (int i = 0; i < cols; i++){
        for (int j = 0; j < arrsize; j++){
            cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }                  
}

void fillVec(vector<int>& even, vector<int>& odd, int vecsize){
    int number;
    
    while(even.size() < vecsize){
        number = (rand() % (99 - 10 + 1)) + 10;
        if(number % 2 == 0)
        even.push_back(number);
    }
    
    while(odd.size() < vecsize){
        number = (rand() % (99 - 10 + 1)) + 10;
        if(number % 2 != 0)
        odd.push_back(number);
     }
}
void prntVec(vector<int>& even, vector<int>& odd, int col){
    cout<<"Enter the number of columns to print: ";
    cin>> col;
    cout<<endl;
    
    cout<<"EVEN: ";
    for(int i = 0; i < col; i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    
    cout<<"ODD:  ";    
    for(int j = 0; j < col; j++){
        cout<<odd[j]<<" ";
    }
    cout<<endl<<endl;
}

void prob4(){
    const int n = 5, ntimes = 10000;
    int freq[n] = {0, 0, 0, 0, 0};
    short int rndseq[n] = {18, 61, 88, 101, 121};
    short int iterate;   
    for (int i = 0; i < ntimes; i++){
        iterate = rand() % 5 + 1;
        if (iterate == 1){
            freq[0]++;
        }
        else if (iterate == 2){
            freq[1]++;
        }
        else if (iterate == 3){
            freq[2]++;
        }
        else if (iterate == 4){
            freq[3]++;
        }        
        else if (iterate == 5){
            freq[4]++;
        }        
    }

    //Re-Display Inputs and write the Outputs
    for (int i = 0; i < n; i++){
        cout<<rndseq[i]<<" occurred "<<freq[i]<<" times"<<endl;
    }    
}
void prob5(){
    int SIZE=10;
    string array[SIZE];
    ifstream infile;
    ofstream outfile;
    infile.open("input.dat");
    outfile.open("output.dat");
    
    //Process Mapping - Inputs to Outputs
    readarr(array,SIZE,infile);
    prntarr(array,SIZE,1);
    sortarr(array,SIZE);
    prntarr(array,SIZE,1);
    
    infile.close();
    outfile.close();
}

void readarr(string a[], int n, ifstream& infile){
     for(int i = 0; i < 10; i++){
        infile>>a[i];        
    }
}

void sortarr(string a[], int n){
    for(int i = 0; i < n - 1; i++){
        smallest(a, n, i);
    }
}

void smallest(string a[],int n,int pos){
    for(int i = pos + 1; i < n; i++){
        if(a[pos] < a[i])swap(a[pos], a[i]);
    }
}

void swaparr(string& a, string& b){
    string temp = a;
    a = b;
    b = temp;
}

void prntarr(string a[], int n, int perLine){
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
        if(i%perLine == (perLine - 1))cout<<endl;
    }
    cout<<endl;
}

void prob6(){
    const int COLS = 6;
    const int SIZE = 30;
    int table[SIZE][COLS];
    ifstream input;
    ofstream output;    
    
    //Variable Initialization
    input.open("table.dat");
    output.open("augtable.dat");
    
    //Process Mapping - Inputs to Outputs
    readary(table, SIZE, input, output, 6);
    addary(table, SIZE);
    
    input.close();
    output.close();    
}

void readary(int b[][COLS], int n, ifstream& input, ofstream& output, int perLine){
    for(int rows=0;rows<n;rows++){
        input>>b[rows][COLS];
        cout<<b[rows][COLS]<<" ";
        if(rows % perLine == (perLine - 1))cout<<endl;
    }
    cout<<endl;
}

void addary(int b[][COLS], int n){
    int rowSum[COLS] = {0};
    int colSum[5] = {0};
    
    //Summing table
    for(int i = 0;i < 5; i++){
        for(int j = 0; j < COLS; j++){
            rowSum[i] += b[i][j];
            colSum[j] += b[i][j];
        }
    }
   
    //Printing the array
    for(int i = 0; i != 5; i++){
        for(int j = 0; j != COLS; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    //Printing the augmented array
    for(int k = 0; k != 6; k++){
        cout<<rowSum[k]<<" ";
    }
    for (int l = 0; l != 5; l++){
        cout<<colSum[l]<<" ";
    }
    cout<<endl;
}
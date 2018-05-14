/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 4th, 2017, 10:44 AM
 * Purpose: Fibonacci Sequence
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
    int fi, fim1, fim2, counter;
    
    //Variable Initialization
    fim1 = fim2 = 1;    //Initialize the sequence
    counter = 3;        //Start with third term in sequence
    
    //Process Mapping - Inputs to Outputs
    cout<<fim1<<", "<<fim2<<", ";
    fi = fim1 + fim2;
    cout<<fi<<", ";
    //Swap and calculate
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
   
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
   
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<", ";
    
    fim2 = fim1;
    fim1 = fi;
    fi = fim1 + fim2;
    cout<<fi<<endl;
    //Re-Display Inputs and write the Outputs
    
    //Exit function main, end of program
    return 0;
}

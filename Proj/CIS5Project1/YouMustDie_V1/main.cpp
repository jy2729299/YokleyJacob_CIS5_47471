/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 17, 2017, 11:08 AM
 * Purpose: Project 1: "You Must Die - A Simple Die-Based Adventure Game" V1
 *
 * 
 * List of known bugs:
 * - Does not display "You have been slain!" when player health drops to 0 or below 0
 * - I'm not yet sure how to cap the player's health to a maximum so that the maximum can be upgraded in game, 
 * but can't be crossed with healing during battle
 * - Default doesn't work properly (entering a number forces you to enter a correct one, just doesn't display the error message. 
 * Entering a character starts an infinite loop)
 * - If rolls are equal in defense, heal, and run, the game has no idea what to do and just awkwardly restarts the loop without saying anything
 * - Successfully running away doesn't actually do anything
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //For rand and srand
#include <ctime>     //For the time function used to generate seeds
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    int life = 25;                            //Amount of life player starts with
    int bones = 20;                            //Skeleton enemy life
    unsigned int pldmg, endmg;                //Damage done to player and enemy
    unsigned int room = 1;                    //Current room number—starts at 1
    unsigned int dungeon;                     //User input for number of rooms in dungeon
    unsigned int pldie, endie, rmdie;         //Player die, enemy die, and travel die
    unsigned int aidie;                       //Die that determines how the enemy responds
    unsigned int pldiemx, endiemx, rmdiemx;   //Max number on each die (for increased attack power, probability, etc
    unsigned short batmenu;                   //Choice for battle menu
    
    //Set system time to now
    unsigned int seed = time(0);
    
    //Seed random number generator
    srand(seed);

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    
    //Title screen with lovely ascii art
    cout<<"======================================Welcome to==========================================="<<endl;
    cout<<" __   __  _______  __   __    __   __  __   __  _______  _______    ______   ___   _______ \n"
            "|  | |  ||       ||  | |  |  |  |_|  ||  | |  ||       ||       |  |      | |   | |       |\n"
            "|  |_|  ||   _   ||  | |  |  |       ||  | |  ||  _____||_     _|  |  _    ||   | |    ___|\n"
            "|       ||  | |  ||  |_|  |  |       ||  |_|  || |_____   |   |    | | |   ||   | |   |___ \n"
            "|_     _||  |_|  ||       |  |       ||       ||_____  |  |   |    | |_|   ||   | |    ___|\n"
            "  |   |  |       ||       |  | ||_|| ||       | _____| |  |   |    |       ||   | |   |___ \n"
            "  |___|  |_______||_______|  |_|   |_||_______||_______|  |___|    |______| |___| |_______|\n"<<endl;
    cout<<"============================A simple dice-based adventure!================================="<<endl;
    cout<<endl;
    cout<<"                                 Press enter to start!"<<endl;
    cin.get();
    

    //Re-Display Inputs and write the Outputs
    
    //Skeleton enemy
    cout<<"▒▒▒░░░░░░░░░░▄▐░░░░\n▒░░░░░░▄▄▄░░▄██▄░░░\n"
            "░░░░░░▐▀█▀▌░░░░▀█▄░\n░░░░░░▐█▄█▌░░░░░░▀█▄\n"
            "░░░░░░░▀▄▀░░░▄▄▄▄▄▀▀\n░░░░░▄▄▄██▀▀▀▀░░░░░\n"
            "░░░░█▀▄▄▄█░▀▀░░░░░░\n░░░░▌░▄▄▄▐▌▀▀▀░░░░░\n"
            "░▄░▐░░░▄▄░█░▀▀░░░░░\n░▀█▌░░░▄░▀█▀░▀░░░░░\n"
            "░░░░░░░░▄▄▐▌▄▄░░░░░\n░░░░░░░░▀███▀█░▄░░░\n"
            "░░░░░░░▐▌▀▄▀▄▀▐▄░░░\n░░░░░░░▐▀░░░░░░▐▌░░\n"
            "░░░░░░░█░░░░░░░░█░░\n░░░░░░▐▌░░░░░░░░░█░\n";
    cout<<"A skeleton appears!"<<endl;

//Fighting sequence—loop is executed as long as the player or the enemy is not dead (do[fighting]-while[player health is above 0 and enemy health is above 0])
do{
    cout<<"\nWhat do you want to do?\n\n"
            "1. Attack\n"
            "2. Defend\n"
            "3. Heal\n"
            "4. Run\n\n"
            "Enter the corresponding number...\n";
    cin>>batmenu;
    cout<<endl;
    
        switch(batmenu){
            //Attack
            case 1: {
                //Both the player and enemy roll a new number on their 6 sided die here
                pldie = rand()% 6 + 1;
                endie = rand()% 6 + 1;
                
                //Simple probability based AI—Random number from 1-100 emulates a percentage
                aidie = rand()% 100 + 1;
                
                //An example of the AI functioning—if the AIDie lands on anything from 1 to 66 (66% chance) then it will attack the player
                if (aidie >= 1 && aidie <= 66){
                    cout<<"Skeleton chooses to attack!"<<endl;
                    cout<<"Skeleton rolls a "<<endie<<"."<<endl;
                    life = life - endie;
                    cout<<"Current life is now "<<life<<"."<<endl;
                    bones = bones - pldie;
                    cout<<"You roll a "<<pldie<<"."<<endl;
                    if (bones > 0){
                        cout<<"Skeleton's life is now "<<bones<<endl;
                    }
                    else if (bones <= 0){
                        cout<<"Skeleton has been slain!"<<endl;
                    }
                    else if (life <= 0){
                        cout<<"You have been slain!"<<endl;
                    }
                    break;
                }
                else if (aidie > 66 && aidie <= 100){
                    cout<<"Skeleton chooses to defend!"<<endl;
                    cout<<"Skeleton rolls a "<<endie<<"."<<endl;
                    cout<<"You roll a "<<pldie<<"."<<endl;
                    if (endie > pldie){
                        cout<<"Skeleton blocked your attack!"<<endl;
                    }
                    else if (pldie > endie){
                        cout<<"Skeleton's defense failed!"<<endl;
                        bones = bones - pldie;
                        if (bones > 0){
                        cout<<"Skeleton's life is now "<<bones<<endl;
                        }
                        else if (bones <= 0){
                            cout<<"Skeleton has been slain!"<<endl;
                        }
                    }
                }
                break;
            }
            //Defend
            case 2: {
                pldie = rand()% 6 + 1;
                endie = rand()% 6 + 1;
                cout<<"If roll is greater than enemy's, defense will be successful!"<<endl;
                cout<<"You roll a "<<pldie<<"."<<endl;
                cout<<"Skeleton rolls a "<<endie<<"."<<endl;
                if (endie > pldie){
                        cout<<"Defense failed!"<<endl;
                        life = life - endie;
                        cout<<"Skeleton attacks!"<<endl;
                        cout<<"Current life is now "<<life<<"."<<endl;
                }
                else if (life <= 0){
                        cout<<"You have been slain!"<<endl;
                }
                else if (pldie > endie){
                    cout<<"You successfully block the skeleton's attack!"<<endl;                     
                }
                break;
            }
            //Heal
            case 3: {
                pldie = rand()% 6 + 1;
                endie = rand()% 6 + 1;
                cout<<"If roll is greater than enemy's, then enemy's attack will be absorbed as health!"<<endl;
                cout<<"You roll a "<<pldie<<"."<<endl;
                cout<<"Skeleton rolls a "<<endie<<"."<<endl;
                if (endie > pldie){
                        cout<<"Healing failed!"<<endl;
                        life = life - endie;
                        cout<<"Skeleton attacks!"<<endl;
                        cout<<"Current life is now "<<life<<"."<<endl;
                }
                else if (life <= 0){
                        cout<<"You have been slain!"<<endl;
                }
                else if (pldie > endie){
                    life = life + endie;
                    cout<<"Heal successful!"<<endl;                     
                    cout<<"Current life is now "<<life<<"."<<endl;
                }
                break;
            }
            //Run
            case 4: {
                pldie = rand()% 6 + 1;
                endie = rand()% 6 + 1;
                cout<<"You won't be able to run away if your roll is lower than the enemy's!"<<endl;
                cout<<"You roll a "<<pldie<<"."<<endl;
                cout<<"Skeleton rolls a "<<endie<<"."<<endl;
                if (endie > pldie){
                        cout<<"Can't escape!"<<endl;
                        life = life - endie;
                        cout<<"Skeleton attacks!"<<endl;
                        cout<<"Current life is now "<<life<<"."<<endl;
                }
                else if (life <= 0){
                        cout<<"You have been slain!"<<endl;
                }
                else if (pldie > endie){
                    cout<<"You fled the battle!"<<endl;                     
                }
                break;
            }
            default: {
                cout<<"Enter a valid input."<<endl;
            }
            break;
        }
}while (bones > 0 && life > 0);
    
  
    //Exit function main, end of program
    return 0;
}

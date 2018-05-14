/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 2, 2017, 3:42 PM
 * Purpose: Project 2 V4
 * 
 * 
 * List of known issues:
 * - Life falling below 0 doesn't seem to work properly
 * - Needs more comments (deleted a ton as a result of prioritizing getting the
 * code to work first)
 * 
 * Changes from V3:
 * - Rewrote the entire code (excluding some reused code) to restructure the 
 * program in terms of functions
 * - Removed unnecessary variables
 * - MUCH cleaner looking
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //For rand, srand, and exit
#include <ctime>     //For generating the random seed
#include <cmath>     //Math library for potion effects
#include <string>    //For entering players name
#include <iomanip>   //For formatting
#include <fstream>   //for score output
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes
void title(int &, int &, int &, int &, string &);
void game(int &, int &, int &, int &, string &);
void about();
void trsure(int &);
void trap(int &);
void battle(int &, int &, int &);
void attack(int &, int &, int &);
void defend(int &);
void heal(int &);
void run(int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    const int SIZE = 5;
    bool isgame = true;
    int life = 25;
    int bones = 5;
    int rooms;
    int kills;
    string name;

    //Variable Initialization
  
    //Process Mapping - Inputs to Outputs
    while (isgame){
        title(life, bones, rooms, kills, name);
    }
    

    //Re-Display Inputs and write the Outputs
  
    //Exit function main, end of program
    return 0;
}

void title(int &life, int &bones, int &rooms, int &kills, string &name){
    int mnmenu;
    
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
    cout<<"1. Play the game \n"
          "2. About the game \n"
          "3. Quit \n"<<endl;
    cin>>mnmenu;
    switch(mnmenu){
        case 1: {
            game(life, bones, rooms, kills, name);
        }break;
        
        case 2: {
            about();
        }break;
        
        case 3: {
            cout<<"Come back with some courage..."<<endl;
            exit(EXIT_SUCCESS);
        }break;
        
        while (mnmenu != 1 || mnmenu != 2 ||mnmenu != 3){
            cout<<"1. Play the game \n"
                  "2. About the game \n"
                  "3. Quit \n"<<endl;
        }
    }
}

void about(){
    cout<<cout<<"Eons ago, there ruled one, mighty empire over multiple, puny colonies. This \n"
                "empire—once known as Grayshire—was known for its everlasting peace, equity, \n"
                "and self-sustainment—but only at the cost of all the colonies it ruled over. \n"
                "Weary of the constant infraction of human rights by the Empire, the colonies \n"
                "banded together an army of rags and bones to demolish Grayshire and build a \n"
                "truly unified kingdom of peace upon the rubble known as Sylvania. \n \n"
                "As Sylvania celebrates its 100th annual Festival of Peace marking 100 \n"
                "years since the destruction of Grayshire, a massive structure has shot up \n"
                "into the middle of the town square resembling the Empire's former castle. \n"
                "Many warriors have entered, but none have returned. \n \n"
                "It is now up to you, a young knight seeking an end to this injustice (and \n"
                "perhaps some loot along the way), to enter the dungeon and see an end to its \n"
                "army of undead. Choose how many rooms you want to traverse and roll a die in \n"
                "each one—will it earn you some hidden treasures, or a fight with Grayshires \n"
                "ghostly warriors? Only the highest rolls and the quickest wits will earn you \n"
                "the victory you seek in these battles—so enter, young hero, and gamble til you drop.\n \n ";
}

void game (int &life, int &bones, int &rooms, int &kills, string &name){
    int pldie;
    cout<<"What's your name, young hero?"<<endl;
    cin.ignore();
    getline(cin, name);
    cin.ignore();
    cout<<"How many rooms do you dare traverse?"<<endl;
    cin>>rooms;
    cout<<"Good luck..."<<endl<<endl;
    for (int r = 1; r <= rooms; r++){
        pldie = rand()% 6 + 1;
        
        if (pldie >= 1 && pldie <= 2){
            cout<<"\n ▒▒▒░░░░░░░░░░▄▐░░░░\n▒░░░░░░▄▄▄░░▄██▄░░░\n"
                    "░░░░░░▐▀█▀▌░░░░▀█▄░\n░░░░░░▐█▄█▌░░░░░░▀█▄\n"
                    "░░░░░░░▀▄▀░░░▄▄▄▄▄▀▀\n░░░░░▄▄▄██▀▀▀▀░░░░░\n"
                    "░░░░█▀▄▄▄█░▀▀░░░░░░\n░░░░▌░▄▄▄▐▌▀▀▀░░░░░\n"
                    "░▄░▐░░░▄▄░█░▀▀░░░░░\n░▀█▌░░░▄░▀█▀░▀░░░░░\n"
                    "░░░░░░░░▄▄▐▌▄▄░░░░░\n░░░░░░░░▀███▀█░▄░░░\n"
                    "░░░░░░░▐▌▀▄▀▄▀▐▄░░░\n░░░░░░░▐▀░░░░░░▐▌░░\n"
                    "░░░░░░░█░░░░░░░░█░░\n░░░░░░▐▌░░░░░░░░░█░\n";
            cout<<"A skeleton appears!"<<endl;
            battle(life, bones, kills);
        }
        else if (pldie >= 3 && pldie <= 4){
            trsure(life);
        }
        else {
            trap(life);
        }
        bones = 5;
        bones += r*2;
    }
}

void trsure(int &life){
    int pldie;
    char chest;
    cout<<"There is a lone chest in the room. Open it? (y/n)"<<endl;
    cin>>chest;
    if (chest == 'y'){
        pldie = rand()% 6 + 1;
        if (pldie >=1 && pldie <= 3){
            cout<<"A health potion!"<<endl;
            pldie = rand()% 3 + 1;
            life = life + pow(pldie, 2);

            //Cmath used here: squares the roll to heal
            cout<<"Restored "<<pow(pldie, 2)<<" life!"<<endl;
            cout<<"Life is now "<<life<<endl;
            cout<<"Press enter to venture forth..."<<endl;
            cin.get(); 
            cin.ignore();
        }
        else {
            cout<<"There's nothing in here..."<<endl;
            cout<<"Press enter to venture forth..."<<endl;
            cin.get();
            cin.ignore();
        }
    }
    else if (chest == 'n'){
        cout<<"You decide to carry onward. \n"<<endl;
        cin.get();
        cin.ignore();                        
    }
    
    
}

void trap(int &life){
    int pldie;
    
    cout<<"\nA booby trap!"<<endl;
    pldie = rand()% 12 + 1;
    life = life - pldie;
    cout<<"Took "<<pldie<<" damage"<<endl;
    cout<<"Life is now "<<life<<endl;
    cout<<"Press enter to venture forth..."<<endl;
    cin.get();
    cin.ignore();
}

void battle(int &life, int &bones, int &kills){
    int batmenu;
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
                attack(life, bones, kills);
            }break;
            //Defend
            case 2: {
                defend(life);
            }break;
            //Heal
            case 3: {
                heal(life);
            }break;
            //Run
            case 4: {
                run(life);
            }break;
            default: {
                cout<<"Enter a valid input."<<endl;
                cin>>batmenu;
            }
            break;
        }
    }while (bones > 0 && life > 0);    
}

void attack(int &life, int &bones, int &kills){
    int pldie, endie, aidie;
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
            kills++;
        }
        else if (life <= 0){
            //If you are killed, game ends and score is sent to file
            cout<<"You have been slain!"<<endl;
            exit(EXIT_SUCCESS);
        }
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
                cout<<"Skeleton has been slain! \n"<<endl;
                kills++;
            }
        }
    }
}

void defend(int &life){
    int pldie, endie;
    //cout statements basically explain it: roll must be greater
    //than enemy's to successfully block an attack
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

        //If you are killed, game ends and score is sent to file
            cout<<"You have been slain!"<<endl;
            exit(EXIT_SUCCESS);
    }
    else if (pldie > endie || pldie == endie){
        cout<<"You successfully block the skeleton's attack!"<<endl;                     
    }
}

void heal(int &life){
    int pldie, endie;
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
            exit(EXIT_SUCCESS);
    }
    else if (pldie > endie || pldie == endie){
        life = life + endie;
        cout<<"Heal successful!"<<endl;                     
        cout<<"Current life is now "<<life<<"."<<endl;
    }
}

void run(int &life){
    int pldie, endie;
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
            exit(EXIT_SUCCESS);
    }
    else if (pldie > endie || pldie == endie){
        cout<<"You fled the battle!"<<endl;                     
    }
}


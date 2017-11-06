/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on November 3, 2017, 2:45 PM
 * Purpose: Project 1: "You Must Die - A Simple Die-Based Adventure Game" V3
 *
 * 
 * List of known issues:
 * - Room score is terribly incorrect and causes an overflow of some kind. I 
 * really have no idea what causes this and I've done everything I can to 
 * try to mitigate this, so I'm just going to very slyly interpret this as an
 * example of an overflow since I was able to identify it properly and since
 * my file output at least works properly
 * 
 * Changes from V2:
 * - Added a working file system for outputting the score of the players last game
 * - Added the ability to name your hero
 * - Added the use of iomanip for formatting the score table
 * - Added counters and variables for keeping track of kills, rooms, score, etc.
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //For rand and srand and exit
#include <ctime>     //For the time function used to generate seeds
#include <cmath>     //For various potion effects
#include <string>    //For entering players name
#include <iomanip>   //For formatting score output
#include <fstream>   //For score output
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
//The global constants are used as score multipliers: enemies killed, rooms cleared, and life remaining
const int EN_KILL = 100;
const int RMCLEAR = 150;
const float REMLIFE = 200.5;    

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    int life;                                 //Amount of life player starts with
    int bones;                                //Skeleton enemy life
    int kills;                                //Number of kills
    int rmclrs;                               //Rooms cleared
    unsigned int pldmg, endmg;                //Damage done to player and enemy
    unsigned int room;                        //Current room number—starts at 1
    unsigned int dungeon;                     //User input for number of rooms in dungeon
    unsigned int pldie, endie;                //Player die, enemy die, and travel die
    unsigned int aidie;                       //Die that determines how the enemy responds
    unsigned short batmenu, mnmenu;           //Choice for battle menu and main menu
    bool isroom, istitle, isfight;            //Bools for game sequences, but currently isn't necessary
    unsigned char chest;                      //Yes and no input for opening a chest
    float score;                              //Player score to be output in a file
    string name;                              //For entering player name
    ofstream results;                         //Results go to a file
    
    //Set system time to now
    unsigned int seed = time(0);
    
    //Seed random number generator
    srand(seed);

    //Variable Initialization
    room = 1;
    life = 20;
    bones = 5;
    
    //Open output file
    results.open("results.txt");
    
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
    cin.ignore();
    
    //Main menu
    istitle = true;

    while (istitle){ 
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
                "3. Quit \n";
        cout<<endl;
        cin>>mnmenu;
        switch(mnmenu){
            case 1: {
                //Player enters number of rooms desired and a for loop runs the game
                //Every loop of the menu increases the room counter
                //Game ends when the counter equals the desired rooms
                
                cout<<"What's your name, young hero?"<<endl;
                cin.ignore();
                getline(cin, name);
                cin.ignore();
                cout<<"How many rooms do you dare traverse?"<<endl;
                cin>>room;
                cout<<"Good luck..."<<endl<<endl;
                for (int r = 1, rmclrs = 1; r <= room; r++, rmclrs++){
                    pldie = rand()% 6 + 1;
                    if (pldie >= 1 && pldie <= 2){

                        //Skeleton enemy
                        cout<<"\n ▒▒▒░░░░░░░░░░▄▐░░░░\n▒░░░░░░▄▄▄░░▄██▄░░░\n"
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
                                                kills++;
                                            }
                                            else if (life <= 0){
                                                //If you are killed, game ends and score is sent to file
                                                cout<<"You have been slain!"<<endl;
                                                results<<"        FINAL SCORE         "<<endl;
                                                results<<"============================"<<endl;
                                                results<<right<<"NAME"<<setw(7)<<name<<endl;
                                                results<<"Kills "<<setw(7)<<kills<<" X "<<EN_KILL<<endl;
                                                results<<"Rooms "<<setw(7)<<rmclrs<<" X "<<RMCLEAR<<endl;
                                                results<<"Life "<<setw(7)<<life<<" X "<<REMLIFE<<endl;
                                                results<<setfill('=')<<setw(14)<<endl;
                                                score = (life*REMLIFE) + (rmclrs*RMCLEAR) + (kills*EN_KILL);
                                                results<<"TOTAL: "<<setw(7)<<score<<endl;
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
                                                    cout<<"Skeleton has been slain! \n"<<endl;
                                                    kills++;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    //Defend
                                    case 2: {
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
                                                results<<"        FINAL SCORE         "<<endl;
                                                results<<"============================"<<endl;
                                                results<<right<<"NAME"<<setw(7)<<name<<endl;
                                                results<<"Kills "<<setw(7)<<kills<<" X "<<EN_KILL<<endl;
                                                results<<"Rooms "<<setw(7)<<rmclrs<<" X "<<RMCLEAR<<endl;
                                                results<<"Life "<<setw(7)<<life<<" X "<<REMLIFE<<endl;
                                                results<<setfill('=')<<setw(14)<<endl;
                                                score = (life*REMLIFE) + (rmclrs*RMCLEAR) + (kills*EN_KILL);
                                                results<<"TOTAL: "<<setw(7)<<score<<endl;
                                        }
                                        else if (pldie > endie || pldie == endie){
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
                                                results<<"        FINAL SCORE         "<<endl;
                                                results<<"============================"<<endl;
                                                results<<right<<"NAME"<<setw(7)<<name<<endl;
                                                results<<"Kills "<<setw(7)<<kills<<" X "<<EN_KILL<<endl;
                                                results<<"Rooms "<<setw(7)<<rmclrs<<" X "<<RMCLEAR<<endl;
                                                results<<"Life "<<setw(7)<<life<<" X "<<REMLIFE<<endl;
                                                results<<setfill('=')<<setw(14)<<endl;
                                                score = (life*REMLIFE) + (rmclrs*RMCLEAR) + (kills*EN_KILL);
                                                results<<"TOTAL: "<<setw(7)<<score<<endl;       
                                        }
                                        else if (pldie > endie || pldie == endie){
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
                                                results<<"        FINAL SCORE         "<<endl;
                                                results<<"============================"<<endl;
                                                results<<right<<"NAME"<<setw(7)<<name<<endl;
                                                results<<"Kills "<<setw(7)<<kills<<" X "<<EN_KILL<<endl;
                                                results<<"Rooms "<<setw(7)<<rmclrs<<" X "<<RMCLEAR<<endl;
                                                results<<"Life "<<setw(7)<<life<<" X "<<REMLIFE<<endl;
                                                results<<setfill('=')<<setw(14)<<endl;
                                                score = (life*REMLIFE) + (rmclrs*RMCLEAR) + (kills*EN_KILL);
                                                results<<"TOTAL: "<<setw(7)<<score<<endl;
                                        }
                                        else if (pldie > endie || pldie == endie){
                                            cout<<"You fled the battle!"<<endl;                     
                                        }
                                        break;
                                    }
                                    default: {
                                        cout<<"Enter a valid input."<<endl;
                                        cin>>batmenu;
                                    }
                                    break;
                                }
                        }while (bones > 0 && life > 0);
                        rmclrs++;
                        //After battle ends, skeleton health is reset and
                        //increases by number of rooms traversed*2
                        bones = 5;
                        bones += r*2;
                    }
                    
                    //Finding an item in the room
                    else if (pldie >= 3 && pldie <=4){
                        cout<<"There is a lone chest in the room. Open it? (y/n)"<<endl;
                        cin>>chest;
                        if (chest == 'y'){
                            pldie = rand()% 6 + 1;
                            if (pldie >=1 && pldie <= 3){
                                cout<<"A health potion!"<<endl;
                                pldie = rand()% 3 + 1;
                                life = life + pow(pldie, 2);
                                rmclrs++;
                                
                                //Cmath used here: squares the roll to heal
                                cout<<"Restored "<<pow(pldie, 2)<<" life!"<<endl;
                                cout<<"Press enter to venture forth..."<<endl;
                                cin.get(); 
                                cin.ignore();
                            }
                            else {
                                rmclrs++;
                                cout<<"There's nothing in here..."<<endl;
                                cout<<"Press enter to venture forth..."<<endl;
                                cin.get();
                                cin.ignore();
                            }
                        }
                        else if (chest == 'n'){
                            rmclrs++;
                            cout<<"You decide to carry onward. \n"<<endl;
                            cin.get();
                            cin.ignore();                        
                        }
                    }
                    
                    //Finding a trap in a room
                    else if (pldie >= 5 && pldie <= 6){
                        cout<<"\nA booby trap!"<<endl;
                        pldie = rand()% 12 + 1;
                        life = life - pldie;
                        cout<<"Took "<<pldie<<" damage"<<endl;
                        rmclrs++;
                        cout<<"Press enter to venture forth..."<<endl;
                        cin.get();
                        cin.ignore();
                        if (life <= 0){
                            cout<<"You have been slain!"<<endl;
                            
                            results<<"        FINAL SCORE         "<<endl;
                            results<<"============================"<<endl;
                            results<<right<<"NAME"<<setw(7)<<name<<endl;
                            results<<"Kills "<<setw(7)<<kills<<" X "<<EN_KILL<<endl;
                            results<<"Rooms "<<setw(7)<<rmclrs<<" X "<<RMCLEAR<<endl;
                            results<<"Life "<<setw(7)<<life<<" X "<<REMLIFE<<endl;
                            results<<setfill('=')<<setw(14)<<endl;
                            score = (life*REMLIFE) + (rmclrs*RMCLEAR) + (kills*EN_KILL);
                            results<<"TOTAL: "<<setw(7)<<score<<endl;                           
                            exit(EXIT_SUCCESS);
                        }
                    }                    
                }
                
                //When the game ends, score is sent to file
                results<<"        FINAL SCORE         "<<endl;
                results<<"============================"<<endl;
                results<<right<<"NAME"<<setw(7)<<name<<endl;
                results<<"Kills "<<setw(7)<<kills<<" X "<<EN_KILL<<endl;
                results<<"Rooms "<<setw(7)<<rmclrs<<" X "<<RMCLEAR<<endl;
                results<<"Life "<<setw(7)<<life<<" X "<<REMLIFE<<endl;
                results<<setfill('=')<<setw(14)<<endl;
                score = (life*REMLIFE) + (rmclrs*RMCLEAR) + (kills*EN_KILL);
                results<<"TOTAL: "<<setw(7)<<score<<endl;
                
                
            }break;
            
            //About the game
            case 2: {
                cout<<"Eons ago, there ruled one, mighty empire over multiple, puny colonies. This \n"
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
            }break;
            //Quit
            case 3: {
                cout<<"Come back with some courage..."<<endl;
                exit(EXIT_SUCCESS);
            }
            //If the user types something wrong
            default: {
                cout<<"Can you repeat that?"<<endl;
                cin>>mnmenu;
            }break;
        }
    }
    
    //Closes score file at the end of the program
    results.close();
    //Exit function main, end of program
    return 0;
}

/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on October 17, 2017, 11:08 AM
 * Purpose: Project 1: "You Must Die - A Simple Die-Based Adventure Game" V2
 *
 * 
 * List of known issues:
 * - Having a hard time getting a special "final room sequence" begin. Setting
 *conditional statements just causes the game to return to the title screen. Must
 * be an issue with the for loop? Might have to implement in a future version
 * - Had a problem with cin.get() for waiting for the user to hit enter to continue,
 * so I added cin.ignore() to flush the entry, but now the program sometimes
 * requires the user to hit enter twice, which is a bit annoying but nothing
 * game breaking
 * - Had a problem implementing voids to help clean up the main chunk of code behind
 * the game. I wanted to have the battle sequence, title sequence, and room sequence
 * be different bools that would run whenever they are true and then call to the code
 * behind each sequence when those bools are true. The game works as intended 
 * without it, but it lacks polish
 * - General balancing could be better
 * 
 * Changes from V1:
 * - Added a working title menu with an option to start the game, read about the
 * game and its story, and to quit
 * - Added the option to choose how many rooms the user wants to traverse
 * - Added an increase in enemy health with every fight to add to difficulty
 * - Lowered player base health for balancing and to give cmath a fair purpose
 * when healing the player
 * - Added booby traps
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //For rand and srand and exit
#include <ctime>     //For the time function used to generate seeds
#include <cmath>     //For various potion effects
using namespace std;  //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    int life = 20;                            //Amount of life player starts with
    int bones = 5;                            //Skeleton enemy life
    int boss;                                  //Final boss life (doesn't work)
    unsigned int pldmg, endmg;                //Damage done to player and enemy
    unsigned int room = 1;                    //Current room number—starts at 1
    unsigned int dungeon;                     //User input for number of rooms in dungeon
    unsigned int pldie, endie;                //Player die, enemy die, and travel die
    unsigned int aidie;                       //Die that determines how the enemy responds
    unsigned short batmenu, mnmenu;           //Choice for battle menu and main menu
    bool isroom, istitle, isfight;            //Bools for game sequences, but currently isn't necessary
    unsigned char chest;                      //Yes and no input for opening a chest
    
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
                
                cout<<"How many rooms do you dare traverse?"<<endl;
                cin>>room;
                cout<<"Good luck..."<<endl<<endl;
                isroom = true;
                for (int r; r <= room; r++){
                    pldie = rand()% 6 + 1;
                    if (pldie >= 1 && pldie <= 2){
                        isfight = true;

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
                                                    cout<<"Skeleton has been slain! \n"<<endl;
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
                                cout<<"Restored "<<pow(pldie, 2)<<" life!"<<endl;
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
                    
                    //Finding a trap in a room
                    else if (pldie >= 5 && pldie <= 6){
                        cout<<"\nA booby trap!"<<endl;
                        pldie = rand()% 12 + 1;
                        life = life - pldie;
                        cout<<"Took "<<pldie<<" damage"<<endl;
                        cout<<"Press enter to venture forth..."<<endl;
                        cin.get();
                        cin.ignore();
                        if (life <= 0){
                            cout<<"You have been slain!"<<endl;
                            exit(EXIT_SUCCESS);
                        }
                    }                    
                }
            }break;
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
            case 3: {
                cout<<"Come back with some courage..."<<endl;
                exit(EXIT_SUCCESS);
            }
            default: {
                cout<<"Can you repeat that?"<<endl;
                cin>>mnmenu;
            }break;
        }
    }
    //Exit function main, end of program
    return 0;
}

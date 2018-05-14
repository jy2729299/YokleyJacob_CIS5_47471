/* 
 * File:   main.cpp
 * Author: Jacob Yokley
 * Created on December 11, 2017, 9:17 PM
 * Purpose: Project 2 V5
 * 
 * Changes from V4:
 * - Re-implemented a scoring system using arrays and sorting. Some parts of the
 * game implement a bubble sort and others use a selection sort
 * - Upped player life to make game more balanced
 * - Added cheat codes with an implemented search function
 * - Added traps in treasure chests
 * - Added comments
 * 
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
const int XSCORE = 100;

//Function Prototypes
void title(int &, int &, int &, int &, string &, int &, int *, string *, int, 
        int &, int, int *);
void game(int &, int &, int &, int &, int &, string &, int *, string *, int,
        int &, int, int *);
void about();
void trsure(int &);
void trap(int &, int &, int &, int *, string *, int, int &, string);
void battle(int &, int &, int &, int *, string *, int, int &, string);
void attack(int &, int &, int &, int *, string *, int, int &, string);
void defend(int &, int &, int &, int *, string *, int, int &, string);
void heal(int &, int &, int &, int *, string *, int, int &, string);
void run(int &, int &, int &, int *, string *, int, int &, string);
void hscores(int *, string *, int, int &, int &, string);
void bubscre(int *, string *, int, int &, int &, string);
void prtscre(int *, string *, int);
int chtsrch(const int *cheats, int CODES, int &usrcode);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    const int SIZE = 5;
    const int CODES = 2;
    int scores[SIZE] = {1000, 2000, 3000, 4000, 5000};
    string players[SIZE] = {"<Name>", "<Name>", "<Name>", "<Name>", "<Name>"};
    int cheats[CODES] = {12345, 1337};
    bool isgame = true;
    int life = 35;
    int bones = 5;
    int rooms = 0;
    int kills = 0;
    int rmclrs = 0;
    string name;
    int usrcode;
  
    //Process Mapping - Inputs to Outputs
    while (isgame){
        title(life, bones, rooms, kills, name, rmclrs, scores, players, SIZE, 
                usrcode, CODES, cheats);
    }
  
    //Exit function main, end of program
    return 0;
}
/*=============================================================================
 *                             TITLE SCREEN
 * Description: The "outer shell" of the game. Branches into all the functions
 * that actually create gameplay
 * 
 * Variables: mnmenu = User's choice for the main menu options
 *            ifcode = Used for storing cheat code position from chtsrch
 *            therefore finding which code the user chose
 *
 =============================================================================*/


void title(int &life, int &bones, int &rooms, int &kills, string &name, 
        int &rmclrs, int *scores, string *players, int SIZE, int &usrcode, 
        int CODES, int *cheats){
    int mnmenu;
    int ifcode;
    
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
          "3. Cheat Codes \n"  
          "4. Quit \n"<<endl;
    cin>>mnmenu;
    switch(mnmenu){
        case 1: {
            game(life, bones, rooms, kills, rmclrs, name, scores, players, 
                    SIZE, usrcode, CODES, cheats);
        }break;
        
        case 2: {
            about();
        }break;
        case 3: {
            ifcode = chtsrch(cheats, CODES, usrcode);
            cout<<endl;
            if (ifcode == 0){
                cout<<"That's the stupidest code I've ever heard! That's the \n"
                        "kind of thing an idiot puts on his luggage!"<<endl;
            }
            else if (ifcode == 1){
                life = 100;
                cout<<"LEET! Player life should be noticeably...beefier"<<endl;
            }
            else{
                cout<<"Nice try. Play the game like a real man now, ok?"<<endl;
            }
        }break;
        case 4: {
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

/*=============================================================================
 *                             ABOUT SCREEN
 * Description: Just displays the game's story in case the player cares about
 * the medieval lore of some nerdy freshman's intro to programming project
 * 
 * Variables: None
 *
 =============================================================================*/

void about(){
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
}

/*=============================================================================
 *                             GAMEPLAY FUNCTION
 * Description: The main adventuring portion of the game. Branches out into all
 * the different "rooms" that exist in the dungeon: a battle room, 
 * treasure room, and trap room. Asks the user for how many rooms they wish to
 * traverse and then runs a for loop up until that number of rooms. This means
 * that successfully progressing through each room adds to the counter, and the 
 * game will therefore end when the player progresses through all rooms.
 * 
 * Variables: pldie = player's "dice" that randomly chooses a number. The 
 *            number selected will direct which room the player enters
 *
 =============================================================================*/

void game (int &life, int &bones, int &rooms, int &kills, int &rmclrs, 
        string &name, int *scores, string *players, int SIZE, int &usrcode, 
        int CODES, int *cheats){
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
            battle(life, bones, kills, scores, players, SIZE, rmclrs, name);
        }
        else if (pldie >= 3 && pldie <= 4){
            trsure(life);
        }
        else {
            trap(life, bones, kills, scores, players, SIZE, rmclrs, name);
        }
        bones = 5;
        bones += r*2;
        rmclrs = r;
    }
    cout<<endl;
    bubscre(scores, players, SIZE, rmclrs, kills, name);
    prtscre(scores, players, SIZE);
    cout<<endl;
    title(life, bones, rooms, kills, name, rmclrs, scores, players, SIZE, 
                usrcode, CODES, cheats);
}

/*=============================================================================
 *                             TREASURE ROOM
 * Description: Player is offered a choice to open a treasure chest, which has 
 * a chance of healing or hurting the player. The chest could also contain 
 * nothing at all, because that's just life sometimes
 * 
 * Variables: pldie = player die that picks a random number to decide whether or
 *            not the treasure actually contains something
 *            chest = player's choice as to whether or not they want to open the
 *                    chest. Chests have a risk of being traps
 *
 =============================================================================*/

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
        else if (pldie == 4){
            cout<<"It's a trap!"<<endl;
            pldie = rand()% 3 + 1;
            life = life - pow(pldie, 2);    
            cout<<"Lost "<<pow(pldie, 2)<<" life!"<<endl;
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

/*=============================================================================
 *                             TRAP ROOM
 * Description: Player comes across a booby trap and the program assumes they
 * do not have the situational awareness to avoid the tarp
 * 
 * Variables: pldie = player die that picks a random number to decide whether or
 *            not the treasure actually contains something
 *
 =============================================================================*/

void trap(int &life, int &bones, int &kills, int *scores, string *players, 
        int SIZE, int &rmclrs, string name){
    int pldie;
    
    cout<<"\nA booby trap!"<<endl;
    pldie = rand()% 12 + 1;
    life = life - pldie;
    cout<<"Took "<<pldie<<" damage"<<endl;
    if (life <= 0){
        cout<<"You have been slain!"<<endl;
        hscores(scores, players, SIZE, rmclrs, kills, name);
        prtscre(scores, players, SIZE);
        exit(EXIT_SUCCESS);
    }    
    cout<<"Life is now "<<life<<endl;
    cout<<"Press enter to venture forth..."<<endl;

    cin.get();
    cin.ignore();
}

/*=============================================================================
 *                             BATTLE ROOM
 * Description: Now here's the real meat and potatoes of this game. This is a 
 * switch menu under a do-while loop that has very simple parameters: the player
 * is offered choices to fight the enemy with so long as both the player and the
 * enemy are alive. The menu choices actually branch out into other functions
 * 
 * Variables: batmenu = players choice for the battle menu
 *
 =============================================================================*/

void battle(int &life, int &bones, int &kills, int *scores, string *players, 
        int SIZE, int &rmclrs, string name){
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
                attack(life, bones, kills, scores, players, SIZE, rmclrs, name);
            }break;
            //Defend
            case 2: {
                defend(life, bones, kills, scores, players, SIZE, rmclrs, name);
            }break;
            //Heal
            case 3: {
                heal(life, bones, kills, scores, players, SIZE, rmclrs, name);
            }break;
            //Run
            case 4: {
                run(life, bones, kills, scores, players, SIZE, rmclrs, name);
            }break;
            default: {
                cout<<"Enter a valid input."<<endl;
                cin>>batmenu;
            }
            break;
        }
    }while (bones > 0 && life > 0);    
}

/*=============================================================================
 *                                 ATTACK MODE
 * Description: Player enters attack mode, and both the enemy and player roll a
 * random number. The number displayed is the damage they do to one another. 
 * There is a twist, however—the enemy has another random number gen from 1-100
 * that acts as a "brain" for the enemy. There's a chance that the enemy will 
 * choose not to attack the player back, but defend instead. If this happens, 
 * the player's roll must be greater than the enemy's to break tbeir defenses 
 * and harm them. Otherwise, the enemy will block the attack and the next turn
 * will occur.
 * 
 * Variables: pldie = player die that picks a random number to determine damage
 *                    to enemy
 *            endie = enemy die that picks a random number to determine damage
 *                    to player
 *            aidie = enemy's "brain" that makes a choice to defend or attack
 *                    the player
 *
 =============================================================================*/

void attack(int &life, int &bones, int &kills, int *scores, string *players, 
        int SIZE, int &rmclrs, string name){
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
            hscores(scores, players, SIZE, rmclrs, kills, name);
            prtscre(scores, players, SIZE);
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

/*=============================================================================
 *                             DEFENSE MODE
 * Description: If the player is feeling superstitious, they can choose to block
 * the enemy's attack to live to fight another turn. The player must roll higher
 * than the enemy for the block to be successful, or else they will take damage
 * without hurting the enemy
 * 
 * Variables: pldie = player's random number for defense
 *            endie = enemy's random number for attacking
 *
 =============================================================================*/

void defend(int &life, int &bones, int &kills, int *scores, string *players, 
        int SIZE, int &rmclrs, string name){
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
            hscores(scores, players, SIZE, rmclrs, kills, name);
            prtscre(scores, players, SIZE);
            exit(EXIT_SUCCESS);
    }
    else if (pldie > endie || pldie == endie){
        cout<<"You successfully block the skeleton's attack!"<<endl;                     
    }
}

/*=============================================================================
 *                             HEALING MODE
 * Description: If the player is low on health, they can gamble to attempt to 
 * regain some. Once again, if they roll lower than the enemy, they will not
 * heal and will be attacked. Otherwise, they will restore the numbers they
 * rolled
 * 
 * Variables: pldie = player's random number for healing
 *            endie = enemy's random number for attacking
 *
 =============================================================================*/

void heal(int &life, int &bones, int &kills, int *scores, string *players, 
        int SIZE, int &rmclrs, string name){
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
            hscores(scores, players, SIZE, rmclrs, kills, name);
            prtscre(scores, players, SIZE);
            exit(EXIT_SUCCESS);
    }
    else if (pldie > endie || pldie == endie){
        life = life + endie;
        cout<<"Heal successful!"<<endl;                     
        cout<<"Current life is now "<<life<<"."<<endl;
    }
}

/*=============================================================================
 *                             RUN MODE
 * Description: If the player is a total wuss, they can choose to flee the 
 * battle. Same drill as above—if the player is successful, the enemy "dies" to
 * end the battle
 * 
 * Variables: pldie = player's random number for running
 *            endie = enemy's random number for attacking
 *
 =============================================================================*/

void run(int &life, int &bones, int &kills, int *scores, string *players, 
        int SIZE, int &rmclrs, string name){
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
            hscores(scores, players, SIZE, rmclrs, kills, name);
            prtscre(scores, players, SIZE);
            exit(EXIT_SUCCESS);
    }
    else if (pldie > endie || pldie == endie){
        cout<<"You fled the battle!"<<endl;
        bones = 0;
    }
}

/*=============================================================================
 *                             HIGH SCORES
 * Description: Sorts the players score in the score array using a selection
 * sort. 
 * 
 * Variables: scan = for searching through the scores array
 *            mindex = the minimum position in the array
 *            minVal = the minimum value in the array
 *
 =============================================================================*/

void hscores(int *scores, string *players, int SIZE, int &rmclrs, int &kills,
        string name){
    scores[5] = (kills*XSCORE) + (rmclrs*XSCORE);
    scores[4] = 5000;
    scores[3] = 4000;
    scores[2] = 3000;
    scores[1] = 2000;
    scores[0] = 1000;    
    int scan, mindex, minVal;
    for (scan = 0; scan < (SIZE - 1); scan++){
        mindex = scan;
        minVal = scores[scan];
        for(int index = scan + 1; index < SIZE; index++){
            if (scores[index] > minVal){
                minVal = scores[index];
                mindex = index;
            }
        }
        scores[mindex] = scores[scan];
        scores[scan] = minVal;
    }
}

/*=============================================================================
 *                         BUBBLE HIGH SCORES
 * Description: Sorts the players score in the score array using a bubble sort. 
 * 
 * Variables: scan = for searching through the scores array
 *            mindex = the minimum position in the array
 *            minVal = the minimum value in the array
 *            swap = functions the do-while loop by ending it once it becomes
 *            false
 *            temp = temporary variable for storing values before sorting
 *
 =============================================================================*/

void bubscre(int *scores, string *players, int SIZE, int &rmclrs, int &kills,
        string name){
    scores[5] = (kills*XSCORE) + (rmclrs*XSCORE);
    scores[4] = 5000;
    scores[3] = 4000;
    scores[2] = 3000;
    scores[1] = 2000;
    scores[0] = 1000;
    int scan, mindex, minVal;
    bool swap;
    int temp;
    do{
        swap = false;
        for (int count = 0; count < (SIZE - 1); count++){
            if (scores[count] > scores[count + 1]){
                temp = scores[count];
                scores[count] = scores[count + 1];
                scores[count + 1] = temp;
                swap = true;
            }
        }
    }while (swap);
}

/*=============================================================================
 *                        PRINTING HIGH SCORES
 * Description: Prints the sorted scores array into a list of high scores
 * 
 * Variables: num = mainly just used because putting i from the for loop
 *            into the cout statement wasn't working properly, so it acts as a
 *            substitute
 *
 =============================================================================*/

void prtscre(int scores[], string players[], int SIZE){
    int num;
    for (int i = 0; i < SIZE; i++)
        num = 0;
        cout<<"HIGH SCORES"<<endl;
        cout<<"------------------"<<endl;
        cout<<num + 1<<setw(5)<<scores[num]<<endl;
        num += 1;
}

/*=============================================================================
 *                             CHEAT SEARCH
 * Description: Uses a linear search to search the cheats array and compare the
 * user's entered cheat code. Returns the position of the code if it's found in
 * the array. This position is used in the ifcode variable to create the code 
 * result
 * 
 * Variables: index = used as a subscript to search array
 *            pos = to record position of search value
 *            found = flag to indicate if the value was found
 *
 =============================================================================*/

int chtsrch(const int *cheats, int CODES, int &usrcode){
    int index = 0; 
    int pos = -1; 
    bool found = false; 
    cout<<"Enter a cheat code: "<<endl;
    cin>>usrcode;
    cin.ignore();
    while (index < CODES && !found){
        if (cheats[index] == usrcode){   
            found = true; 
            pos = index; 
        }
        index++; 
    }
    return pos; 
}
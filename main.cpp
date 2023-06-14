
#include <iostream>
#include <time.h>
#include <string>
#include "Reward.hpp"
#include "Cobble.hpp"
#include "Chroma.hpp"
#include <fstream>
#include <sstream>

int keys = 20;

using namespace std;

//Functie pentru a scrie din fisier un string
void writeInFile(string s){

    FILE *out = fopen("output.txt", "a");
    fprintf(out , "%s \n", s.c_str());
    fclose(out);
}

//Functie pentru a citi tot din fisier
void showFileContents(){

    FILE *read = fopen("output.txt", "r");
    char c;

    while (fscanf(read, "%c", &c) != EOF)
        printf("%c", c);

    fclose(read);
}

//Functie pentru generarea starii calitatii reward-ului
string generateWear()
{
    int random = rand()%5;
    switch(random)
    {
        case 0:
        {
            return "Factory-New";
            break;
        }
        case 1:
        {
            return "Minimal-Wear";
            break;
        }
        case 2:
        {
            return "Field-Tested";
            break;
        }
        case 3:
        {
            return "Well-Worm";
            break;
        }
        case 4:
        {
            return "Battle-Scarred";
            break;
        }
        default : return NULL ;
    }
}

//Functie pentru printarea unui game menu
void printMenu()
{
    cout << "CS : GO Case Opener\n" <<
         "You currently have " << keys << " keys\n" <<
         "Choose from the following options:\n" <<
         "1. View Cobblestone Souvenir Package\n" <<
         "2. Chroma case\n" <<
         "4. Buy 20 more keys\n" <<
         "5. Exit game\n";
}

//Functie pentru a vedea alegerea userului si a executa ce a ales
void executeOption(int choice)
{
    switch(choice)
    {
        case 1:
        {
            Cobble c = Cobble();
            cout << "You can get any of the following rewards from this case:\n";
            Reward* rewards = c.getAllRewards();
            for(int i=0; i<10; i++) cout << rewards[i].showcase() << "\n";
            cout << "Do you wish to use one key to open this case?\n1.Yes\n2.No\n";
            int open;
            cin >> open;
            if(open ==2) return;
            if(keys<=0)
            {
                cout << "You do not have enough keys!\n";
                return;
            }
            keys--;
            Reward reward = c.getReward();
            string wear = generateWear();
            reward.setWear(wear);
            writeInFile(reward.toString());
            cout << "You got a:\n" << reward.toString() + "\n";
            break;
        }
        case 2:
        {
            Chroma c = Chroma();
            cout << "You can get any of the following rewards from this case:\n";
            Reward* rewards = c.getAllRewards();
            for(int i=0; i<10; i++) cout << rewards[i].showcase() << "\n";
            cout << "Do you wish to use one key to open this case?\n1.Yes\n2.No\n";
            int open;
            cin >> open;
            if(open ==2) return;
            if(keys<=0)
            {
                cout << "You do not have enough keys!\n";
                return;
            }
            keys--;
            Reward reward = c.getReward();
            string wear = generateWear();
            reward.setWear(wear);
            writeInFile(reward.toString());
            cout << "You got a:\n" << reward.toString() + "\n";
            break;
        }
        case 4:
        {
            cout << "You have bought 20 more keys for 44 euros!";
            keys+=20;
            break;
        }
        case 5:
        {
            return;
            break;
        }
    }

}


int main()
{
    srand(time(NULL));
    cout << "Enter your username:";
    string username;
    cin >> username;
    writeInFile(username);
    int choice = 0;
    do
    {
        printMenu();
        cin >> choice;
        executeOption(choice);
    }
    while(choice!=5);

    cout << "This is the list of winnings for the following users:\n\n";
    showFileContents();
    return 0;
}

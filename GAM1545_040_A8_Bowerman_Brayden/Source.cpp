#include<iostream>
#include<limits>
#include<string>
#include<ctime>
#include<chrono>
#include<thread>

using namespace std; //std::
using namespace this_thread; // sleep_for, sleep_until
using namespace chrono; //nanoseconds, system_clock, seconds

const int SP = 150;

int skillpoints[SP] = {};

int GetInteger(); //Declares GetInteger

//Entry Point
int main()
{
    system("Color 1F");
    string name,race,cl;
    int i = 0,skillcount = 150,statc = 0,statin = 0;

    cout << "-=Welcome to VOID RPG Character Creator!=-\n";

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(2));

    cout << "-=Loading Assets=-\n";

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));

    cout << "-=Verifing Respources=-\n";

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));

    cout << "-=Compiling Scripts=-\n";

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(2));
    system("cls");

    cout << "-=COMPLETE=-\n";

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    system("cls");

    cout << "Please enter your character's name:\n";

    cin >> name;

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
    system("cls");

    cout << name << ", the following are species you may choose...\n";

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));


    cout << "1. Human\n2. Orc\n3. Elf\n4. Dwarf\n";

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));

    cout << "Please select your species by entering a number between 1 and 4:\n";

    while(true)
        {
            i = GetInteger();

            if (i == 1)
            {

                race = "Human";
                break;
            }
            else if (i == 2)
            {

                race = "Orc";
                break;

            }
            else if (i == 3)
            {

                race = "Elf";
                break;
            }
            else if (i == 4)
            {

                race = "Dwarf";
                break;
            }
            else
            {

                cout << "Invalid input.\nPlease enter a valid input:\n";

            }
    }

        cout << name << " the " << race << ", the following are classes you may choose...\n";

        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(2));

        cout << "1. Archer\n2. Assassin\n3. Healer\n4. Sorcerer\n5. Thief\n6. Warrior\n";

        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));

        cout << "Please select your class by entering a number between 1 and 6:\n";

        i = 0;

        while(true)
        {
            i = GetInteger();

            if (i == 1)
            {

                cl = "Archer";
                break;
            }
            else if (i == 2)
            {

                cl = "Assassin";
                break;

            }
            else if (i == 3)
            {

                cl = "Healer";
                break;
            }
            else if (i == 4)
            {

                cl = "Sorcerer";
                break;
            }
            else if (i == 5)
            {

                cl = "Thief";
                break;
            }
            else if (i == 6)
            {

                cl = "Warrior";
                break;
            }
            else
            {

                cout << "Invalid input.\nPlease enter a valid input:\n";

            }
        }

        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(1));
        system("cls");

        cout << name << ", you have selected: " << cl << " as your class.\nExcellent!\n";

        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(2));
        system("cls");

        int statArray[8] = {};
        int statbuy = 0;

        do
        {
            cout << "There are: " << skillcount << " skill points remaining...\n";

            cout << "\n1. Health: " << statArray[0] << "\n2. Alchemy: " << statArray[1] << "\n3. Intelligence: " << statArray[2] << "\n4. Agility: " << statArray[3] << "\n5. Strength: " << statArray[4] << "\n6. Speed: " << statArray[5] << "\n7. Endurance: " << statArray[6] << "\n8. Luck: " << statArray[7] << "\n";

            sleep_for(nanoseconds(10));
            sleep_until(system_clock::now() + seconds(1));

            cout << "Please input a number between 1 and 8, to put skill points into the selected skill:\n";

                statc = GetInteger();
                if (statc == 1)
                {
                    cout << "How many skill points would you like to put into Health?\n";
                    statin = GetInteger();
                    if (statin > skillcount)
                    {
                        cout << "Invalid Input.\nNot enough skill points remaining...\nYou have: " << skillcount << " skill points remaining...\n";
                    }
                    else
                    {
                        statbuy = statin;
                        skillcount -= statbuy;
                        statArray[0] += statbuy;
                    }
                }
                else if (statc == 2)
                {
                    cout << "How many skill points would you like to put into Alchemy?\n";
                    statin = GetInteger();
                    if (statin > skillcount)
                    {
                        cout << "Invalid Input.\nNot enough skill points remaining...\nYou have: " << skillcount << " skill points remaining...\n";
                    }
                    else
                    {
                        statbuy = statin;
                        skillcount -= statbuy;
                        statArray[1] += statbuy;
                    }
                }
                else if (statc == 3)
                {
                    cout << "How many skill points would you like to put into Intelligence?\n";
                    statin = GetInteger();
                    if (statin > skillcount)
                    {
                        cout << "Invalid Input.\nNot enough skill points remaining...\nYou have: " << skillcount << " skill points remaining...\n";
                    }
                    else
                    {
                        statbuy = statin;
                        skillcount -= statbuy;
                        statArray[2] += statbuy;
                    }
                }
                else if (statc == 4)
                {
                    cout << "How many skill points would you like to put into Agility?\n";
                    statin = GetInteger();
                    if (statin > skillcount)
                    {
                        cout << "Invalid Input.\nNot enough skill points remaining...\nYou have: " << skillcount << " skill points remaining...\n";
                    }
                    else
                    {
                        statbuy = statin;
                        skillcount -= statbuy;
                        statArray[3] += statbuy;
                    }
                }
                else if (statc == 5)
                {
                    cout << "How many skill points would you like to put into Strength?\n";
                    statin = GetInteger();
                    if (statin > skillcount)
                    {
                        cout << "Invalid Input.\nNot enough skill points remaining...\nYou have: " << skillcount << " skill points remaining...\n";
                    }
                    else
                    {
                        statbuy = statin;
                        skillcount -= statbuy;
                        statArray[4] += statbuy;
                    }
                }
                else if (statc == 6)
                {
                    cout << "How many skill points would you like to put into Speed?\n";
                    statin = GetInteger();
                    if (statin > skillcount)
                    {
                        cout << "Invalid Input.\nNot enough skill points remaining...\nYou have: " << skillcount << " skill points remaining...\n";
                    }
                    else
                    {
                        statbuy = statin;
                        skillcount -= statbuy;
                        statArray[5] += statbuy;
                    }
                }
                else if (statc == 7)
                {
                    cout << "How many skill points would you like to put into Endurance?\n";
                    statin = GetInteger();
                    if (statin > skillcount)
                    {
                        cout << "Invalid Input.\nNot enough skill points remaining...\nYou have: " << skillcount << " skill points remaining...\n";
                    }
                    else
                    {
                        statbuy = statin;
                        skillcount -= statbuy;
                        statArray[6] += statbuy;
                    }
                }
                else if (statc == 8)
                {
                cout << "How many skill points would you like to put into Luck?\n";
                statin = GetInteger();
                if (statin > skillcount)
                {
                    cout << "Invalid Input.\nNot enough skill points remaining...\nYou have: " << skillcount << " skill points remaining...\n";
                }
                else
                {
                    statbuy = statin;
                    skillcount -= statbuy;
                    statArray[7] += statbuy;
               
                }
                }
                else
                {
                cout << "Invalid Input.\nPlease enter a valid input...\n";
       
                }


            
                sleep_for(nanoseconds(10));
                sleep_until(system_clock::now() + seconds(3));
                system("cls");
        }while (skillcount > 0);

        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(3));
        system("cls");

        cout << "You are: " << name << " the " << race << ".\nYour class is: " << cl << ", and your stats are:\n\n1. Health: " << statArray[0] << "\n2. Alchemy: " << statArray[1] << "\n3. Intelligence: " << statArray[2] << "\n4. Agility: " << statArray[3] << "\n5. Strength: " << statArray[4] << "\n6. Speed: " << statArray[5] << "\n7. Endurance: " << statArray[6] << "\n8. Luck: " << statArray[7] << "\n";

        system("pause");
        system("cls");
        cout << "-=Thank you for playing VOID RPG Character Creator!=-\n";

        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + seconds(5));

        return 0;

}

//Defines GetInteger
int GetInteger()
{

    int value = 0;
    while (!(cin >> value))
    {

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }

    return value;

}
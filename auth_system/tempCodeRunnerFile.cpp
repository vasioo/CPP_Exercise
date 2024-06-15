#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void login();
void registration();
void forgot();

int main()
{
    int c;
    cout << "\t\t\t________________________________________________\n\n\n";
    cout << "\t\t\t 	          Welcome to the login page          \n\n\n";
    cout << "\t\t\t____________         MENU         ______________\n\n";
    cout << "\t\t\t                                                \n\n";
    cout << "\t| Press 1 to LOGIN         |" << endl;
    cout << "\t| Press 2 to REGISTER      |" << endl;
    cout << "\t| Press 3 for PASSWORD     |" << endl;
    cout << "\t| Press 4 to EXIT          |" << endl;
    cout << "\n\t\t\t Please enter your choice : ";
    cin >> c;
    cout << endl;

    switch (c)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout << "\t\t\t Thank you! \n\n";
        exit(0);
        break;

    default:
        system("cls");
        cout << "\t\t\t Please use the nums from the menu! \n"
             << endl;
        main();
        break;
    }
    return 0;
}

void login()
{
    int count;
    string userId, password, id, pass;
    system("cls");
    cout << "\t\t\t Please enter the username and password: " << endl;
    cout << "\t\t\t USERNAME: ";
    cin >> userId;
    cout << "\n\t\t\t PASSWORD: ";
    cin >> password;

    ifstream input("records.txt");

    while (input >> id >> pass)
    {
        if (id == userId && pass == password)
        {
            count = 1;
            system("cls");
            break;
        }
    }
    input.close();

    if (count == 1)
    {
        cout << userId << "\n Your login was successfull!\n Thanks for logging in! \n";
        main();
    }
    else
    {
        cout << "\n ! Login failed ! \n Please enter correct details!\n";
    }
}

void registration()
{
    string ruserId, rpassword, rid, rpass;
    system("cls");

    cout << "\t\t\t Enter the username : ";
    cin >> ruserId;
    cout << endl;

    cout << "\t\t\t Enter the password : ";
    cin >> rpassword;
    cout << endl;

    ofstream f1("records.txt", ios::app);
    f1 << ruserId << ' ' << rpassword << endl;
    system("cls");
    cout << "Registration is successfull!" << endl;
    main();
}

void forgot()
{
    int option;
    system("cls");
    cout << "\t\t\t You forgot the password? No worries \n";
    cout << "Press 1 to search your id by username : " << endl;
    cout << "Press 2 to go back to the main menu" << endl;
    cout << "\t\t\t Enter your choice: ";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        int count = 0;
        string suserId, sid, spass;
        cout << "\n\t\t\tEnter the username which your remembered: ";
        cin >> suserId;
        ifstream f2("records.txt");
        while (f2 >> sid >> spass)
        {
            if (sid == suserId)
            {
                count = 1;
            }
        }
        f2.close();
        if (count == 1)
        {
            cout << "\n\n Your account is found! \n";
            cout << "\n\n Your password is : " << spass;
            main();
        }
        else
        {
            cout << "\n\t Sorry! Your acc is not found!\n";
            main();
        }
        break;
    }
    case 2:
    {
        main();
        break;
    }
    default:
        cout << "\t\t\t Wrong choice! Please try again." << endl;
        forgot();
    }
}
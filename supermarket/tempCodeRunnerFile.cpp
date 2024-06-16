#include <iostream>
#include <fstream>

using namespace std;

class Shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void Shopping::menu()
{
m:
    int choice;
    string email;
    string password;
    cout << "\t\t\t\t_______________________________________\n";
    cout << "\t\t\t\t                                       \n";
    cout << "\t\t\t\t         Supermarket Main menu         \n";
    cout << "\t\t\t\t                                       \n";
    cout << "\t\t\t\t_______________________________________\n";
    cout << "\t\t\t\t                                       \n";
    cout << "\t\t\t\t|  1) Administrator  |\n";
    cout << "\t\t\t\t|                    |\n";
    cout << "\t\t\t\t|  2) Buyer          |\n";
    cout << "\t\t\t\t|                    |\n";
    cout << "\t\t\t\t|  3) Exit           |\n";
    cout << "\t\t\t\t|                    |\n";
    cout << "\t\t\t\tPlease select!";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\t\t\t Please login \n";
        cout << "\t\t\t Enter email \n";
        cin >> email;
        cout << "\t\t\t Enter password \n";
        cin >> password;

        if (email == "vasko@email.com" && password == "vasio")
        {
            administrator();
        }
        else
        {
            cout << "Invalid email/password!";
        }
        break;
    case 2:
        buyer();
    case 3:
        exit(0);
    default:
        cout << "Please select from our options!";
    }
    goto m;
}

void Shopping::administrator()
{
    m:
    int choice;
    cout << "\n\n\n\t\t\t Administrator menu";
    cout << "\n\t\t\t|_______1) Add the product_______|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_______2) Modify the product____|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_______3) Delete the product____|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_______4) Back to main menu_____|";
    cout << "\n\t\t\t|                                |";

    cout << "\n\n\t Please enter your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        rem();
        break;
    case 4:
        menu();
    default:
        cout << "Invalid choice!";
    }
    goto m;
}

void Shopping::buyer()
{
m:
    int choice;
    cout << "\t\t\t    Buyer            \n";
    cout << "\t\t\t_____________________\n";
    cout << "                           \n";
    cout << "\t\t\t1) Buy Product       \n";
    cout << "                           \n";
    cout << "\t\t\t2) Go back           \n";
    cout << "\t\t\t Enter your choice:  \n";

    cin >> choice;

    switch (choice)
    {
    case 1:
        receipt();
        break;
    case 2:
        menu();
    default:
        cout << "Invalid choice!";
    }
    goto m;
}

void Shopping::add()
{
m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout << "\n\n\t\t\t Add new product";
    cout << "\n\n\t Product code of the product: ";
    cin >> pcode;
    cout << "\n\n\t Name of the product: ";
    cin >> pname;
    cout << "\n\n\t Price of the product: ";
    cin >> price;
    cout << "\n\n\t Discount on the product: ";
    cin >> dis;

    data.open("database.txt", ios::in);

    if (!data)
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d;

        while (!data.eof())
        {
            if (c == pcode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }
        data.close();
    }
    if (token == 1)
    {
        goto m;
    }
    else
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    cout << "\n\n\t\t Record inserted!";
}

void Shopping::edit()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;

    cout << "\n\t\t\t Modify the record";
    cout << "\n\t\t\t Product code: ";
    cin >> pkey;

    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\nFile does not exist!";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> dis;

        while (!data.eof())
        {
            if (pkey == pcode)
            {
                cout << "\n\t\t Product new code : ";
                cin >> c;
                cout << "\n\t\t Product name : ";
                cin >> pname;
                cout << "\n\t\t Product price : ";
                cin >> price;
                cout << "\n\t\t Product discount : ";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << "\n";
                cout << "\n\n\t\t Record edited ";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n Record not found sorry!";
        }
    }
}

void Shopping::rem()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    cout << "\n\n\t Delete product";
    cout << "\n\n\t Product code: ";
    cin >> pcode;
    data.open("database.txt", ios::in);

    if (!data)
    {
        cout << "File does not exist";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pcode == pkey)
            {
                cout << "\n\n\t Product deleted successfully!";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n Record not found";
        }
    }
}

void Shopping::list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout << "\n\n|________________________________________\n";
    cout << "ProNo\t\tName\t\tPrice\n";
    cout << "\n\n|________________________________________\n";
    data >> pcode >> pname >> price >> dis;
    while (!data.eof())
    {
        cout << pcode << "\t\t" << pname << "\t\t" << price << "\n";
        data >> pcode >> pname >> price >> dis;
    }
    data.close();
}

void Shopping::receipt()
{
    m:
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c = 0;
    float amount = 0;
    float dis = 0;
    float total = 0;

    cout << "\n\n\t\t\t RECEIPT";
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n Empty database";
    }
    else
    {
        data.close();

        list();
        cout << "\n________________________________________\n";
        cout << "\n|                                      |\n";
        cout << "\n          Please place the order        \n";
        cout << "\n|                                      |\n";
        cout << "\n________________________________________\n";

        do
        {
            cout << "\n\n Enter the product code: ";
            cin >> arrc[c];
            cout << "\n\n Enter the product quantity: ";
            cin >> arrq[c];

            for (int i = 0; i < c; i++)
            {
                if (arrc[i] == arrc[c])
                {
                    cout << "\n\n Duplicate product code. Please try again!";
                    goto m;
                }
            }
            c++;
            cout << "\n\nDo you want to buy another product or not. (y/n)";
            cin >> choice;
        } while (choice == 'y');

        cout << "\n\n\t\t\t_____________________________RECEIPT_________________________________\n";
        cout << "\nProduct No\t Product name\t Product quantity\t Price\t Amount\t Amount with discount\n";
        for (int i = 0; i < c; i++)
        {
            data.open("database.txt", ios::in);
            data >> pcode >> pname >> price >> dis;
            while (!data.eof())
            {
                if (pcode == arrc[i])
                {
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100);
                    total = total + dis;
                    cout<<"\n"<<pcode<<"\t"<<pname<<"\t"<<arrq[i]<<"\t"<<price<<"\t"<<amount<<"\t"<<dis;
                }
                    data>>pcode>>pname>>price>>dis;
            }
        }
            data.close();

    }
    cout<<"\n\n___________________________";
    cout<<"\n Total amount : "<<total;
}

int main()
{
    Shopping s;
    s.menu();
    return 0;
}
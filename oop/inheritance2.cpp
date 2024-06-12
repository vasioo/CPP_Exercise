#include <iostream>
using namespace std;

class Party
{
public:
    int meals;
    void food()
    {
        cout << "Enter number of meals: ";
        cin >> meals;
    }
};

class Drinks
{
public:
    int drinks;
    void liquor()
    {
        cout << "Enter number of drinks: ";
        cin >> drinks;
    }
};

class Bill : public Party, public Drinks
{
    int total_meals;
    int total_drinks;
    int total_bill;

public:
    void total()
    {
        total_meals = meals * 90;
        total_drinks = drinks * 60;
        total_bill = total_meals + total_drinks;
        cout << "Total bill is: " << total_bill << endl;
    }
};

int main()
{
    Bill b;
    b.food();
    b.liquor();
    b.total();

    return 0;
}
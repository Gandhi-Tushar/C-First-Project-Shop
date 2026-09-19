//                         Designed by Tushar Gandhi
#include <iostream>
#include <limits>
using namespace std;
class Shop
{
    string itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void DisplayPrice(void);
};
void Shop::setPrice(void)
{
    cout << "Enter name of item number " << counter + 1 << endl;
    getline(cin, itemId[counter]);
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    string consent;
    Shop Hatti;
    Hatti.initCounter();
    Hatti.setPrice();
    for (int i = 0; 30 < 40; i++)
    {
        cout << "Do You Want to add another item? Enter (Y/N):";
        cin >> consent;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if ((consent == "Y") || (consent == "y"))
        {
            Hatti.setPrice();
        }
        else if (consent == "N" || (consent == "n"))
        {
            break;
        }
        else
        {
            cout << "Error! Please RESTART the program (enter Y/N only from next time)" << endl;
            system("pause");
            exit(0);
        }
    }
    Hatti.DisplayPrice();
    return 0;
}
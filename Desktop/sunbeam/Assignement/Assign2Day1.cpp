#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:

    void initDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter Day: ";
        cin >> day;

        cout << "Enter Month: ";
        cin >> month;

        cout << "Enter Year: ";
        cin >> year;
    }

    void printDateOnConsole()
    {
        cout << "Date is: " << day << "/" << month << "/" << year << endl;
    }

    bool isLeapYear()
    {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main()
{
    Date d1;
    int choice;

    do
    {
        cout << "\n----- DATE MENU -----" << endl;
        cout << "1. Initialize Date" << endl;
        cout << "2. Accept Date" << endl;
        cout << "3. Print Date" << endl;
        cout << "4. Check Leap Year" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            d1.initDate();
            cout << "Date Initialized." << endl;
        }
        else if(choice == 2)
        {
            d1.acceptDateFromConsole();
        }
        else if(choice == 3)
        {
            d1.printDateOnConsole();
        }
        else if(choice == 4)
        {
            if(d1.isLeapYear())
                cout << "Year is Leap Year." << endl;
            else
                cout << "Year is NOT Leap Year." << endl;
        }
        else if(choice == 0)
        {
            cout << "Exiting..." << endl;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }

    } while(choice != 0);

    return 0;
}

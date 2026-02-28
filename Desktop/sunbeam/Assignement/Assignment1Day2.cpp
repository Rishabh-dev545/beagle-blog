#include <iostream>
using namespace std;

class Box
{
    int length;
    int width;
    int height;

public:

    // Default constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    // Single parameter constructor
    Box(int x)
    {
        length = x;
        width = x;
        height = x;
    }

    // Three parameter constructor
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    int calculateVolume()
    {
        return length * width * height;
    }
};

int main()
{
    int choice = 0;

    while(choice != 4)
    {
        cout << "\n\n1. Calculate Volume with default values";
        cout << "\n2. Calculate Volume with same value";
        cout << "\n3. Calculate Volume with different values";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            Box b1;
            cout << "Volume = " << b1.calculateVolume();
        }
        else if(choice == 2)
        {
            int x;
            cout << "Enter value: ";
            cin >> x;

            Box b2(x);
            cout << "Volume = " << b2.calculateVolume();
        }
        else if(choice == 3)
        {
            int l, w, h;
            cout << "Enter length width height: ";
            cin >> l >> w >> h;

            Box b3(l, w, h);
            cout << "Volume = " << b3.calculateVolume();
        }
        else if(choice == 4)
        {
            cout << "Exiting program...";
        }
        else
        {
            cout << "Invalid choice!";
        }
    }

    return 0;
}
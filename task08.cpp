#include <iostream>
using namespace std;

float changePositive(float parameter);

main()
{
    system("cls");

    float x, y, h;

    while (true)
    {
        cout << "Enter the coordinates of h (int): ";
        cin >> h;
        cout << endl;

        cout << "Enter the X coordinate: ";
        cin >> x;
        cout << endl;

        cout << "Enter the Y coordinate: ";
        cin >> y;
        cout << endl;

        if (h != 2)
        {
            x = x / h;
            y = y / h;
        }
        else
        {
            x = x;
            y = y;
        }

        if ((x >= 0 || x <= 2) && (y == 2))
        {
            cout << "border";
        }
        else if ((x >= 4 || x <= 6) && (y == 2))
        {
            cout << "border";
        }
        else if ((x >= 0 || x <= 6) && (y == 0))
        {
            cout << "border";
        }
        else if ((y >= 2 || y <= 8) && (x == 2))
        {
            cout << "border";
        }
        else if ((y >= 2 || y <= 8) && (x == 4))
        {
            cout << "border";
        }
        else if ((y >= 0 || y <= 2) && (x == 0))
        {
            cout << "border";
        }
        else if ((y >= 0 || y <= 2) && (x == 6))
        {
            cout << "border";
        }
        else if ((x >= 0 || x < 2) && (y > 2))
        {
            cout << "Outside";
        }
        else if ((x > 4 || x <= 6) && (y > 2))
        {
            cout << "Outside";
        }
        else if ((x >= 2 || x <= 4) && (y > 8))
        {
            cout << "Outside";
        }
        else if ((x > 2 || x < 4) && (y >= 0 || y < 8))
        {
            cout << "Inside";
        }
        else if ((x > 0 || x < 6) && (y > 0 || y < 2))
        {
            cout << "Inside";
        }
        cout << endl;
    }
}
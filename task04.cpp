#include <iostream>
using namespace std;

main()
{
    system("cls");

    string time;
    char code;
    float minutes, charges, finalcharges;

    while (true)
    {

        cout << "Enter which type of customer you are (Residental/Premium) Select (r/p) : ";
        cin >> code;
        cout << endl;

        cout << "Enter the call time 'D' for Daytime and 'N' for Nighttime  : ";
        cin >> time;
        cout << endl;

        cout << "Enter the Number of Minutes the service was used: ";
        cin >> minutes;
        cout << endl;

        //Calculation for Premium Values
        if (code == 'r')
        {
            if (minutes <= 50 && minutes >= 0)
            {
                finalcharges = 10;
            }
            else if (minutes > 50)
            {
                minutes = minutes - 50;
                charges = minutes * 0.20;
                finalcharges = charges + 10;
            }
            else
            {
                cout << "Invalid Value";
            }
        }
        else if (code == 'p')
        {
            //Calculation for Premium Values
            if (time == "D")
            {
                if (minutes <= 75 && minutes >= 0)
                {
                    finalcharges = 25;
                }
                else if (minutes > 75)
                {
                    minutes = minutes - 75;
                    charges = minutes * 0.10;
                    finalcharges = charges + 25;
                }
                else
                {
                    cout << "Invalid Value";
                }
            }
            else if (time == "N")
            {
                if (minutes <= 100 && minutes >= 0)
                {
                    finalcharges = 25;
                }
                else if (minutes > 100)
                {
                    minutes = minutes - 100;
                    charges = minutes * 0.05;
                    finalcharges = charges + 25;
                }
                else
                {
                    cout << "Invalid Value";
                }
            }
            else
            {
                cout << "Invalid Value";
            }
        }
        else
        {
            cout << "Invalid Statement";
        }

        cout << "The Charges are: " << finalcharges << "$";
        cout << endl;
        cout << endl;
    }
}
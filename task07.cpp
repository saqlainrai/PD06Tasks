#include <iostream>
using namespace std;

float changePositive(float parameter);

main()
{
    system("cls");

    int shour, sminute;
    int ahour, aminute;
    float differhour, differminute;
    int arrivaltimeminutes, starttimeminutes;
    int differenceminutes;

    while (true)
    {

        cout << "Enter Exam Starting time(hour): ";
        cin >> shour;
        cout << endl;

        cout << "Enter Exam Starting time(minutes): ";
        cin >> sminute;
        cout << endl;

        cout << "Enter Student hour of arrival: ";
        cin >> ahour;
        cout << endl;

        cout << "Enter Student minute of arrival: ";
        cin >> aminute;
        cout << endl;

        arrivaltimeminutes = (ahour * 60) + aminute;
        starttimeminutes = (shour * 60) + sminute;

        differenceminutes = arrivaltimeminutes - starttimeminutes;

        differhour = differenceminutes / 60;
        differminute = differenceminutes % 60;

        if ((differhour >= 0 && differminute > 0)||(differhour > 0 && differminute >= 0))
        {
            cout << "Late" << endl;
            if (differhour != 0)
            {
                cout << differhour << " Hours " << differminute << " Minutes after Start Time";
            }
            else
            {
                cout << differminute << " Minutes after Start Time";
            }
        }
        else if (differhour == 0 && (differminute <= 0 && differminute >= -30))
        {
            cout << "On Time" << endl;
            differminute = changePositive(differminute);
            cout << differminute << " Minutes before Exam";
        }
        else if ((differhour == 0 && differminute < -30)||(differhour < 0 && differminute <= 0))
        {
            if (differhour != 0)
            {
            cout << "Early" << endl;
            differminute = changePositive(differminute);
            differhour = changePositive(differhour);
            cout << differhour << " Hours " << differminute << " Minutes before exam Time";
            }
            else
            {
                cout << "Early" << endl;
                differminute = changePositive(differminute);
                cout << differminute << " Minutes before exam Time";
            }
        }
        cout << endl;
    }
}
float changePositive(float parameter)
{
    float parameterf;

    if (parameter < 0)
    {
        parameterf = parameter * -1;
    }
    else
    {
        parameterf = parameter;
    }
    return parameterf;
}
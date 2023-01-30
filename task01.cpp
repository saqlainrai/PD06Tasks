#include <iostream>
using namespace std;

main()
{
    system("cls");

    string temperature, humidity;

    while (true)
    {

        cout << "Enter the type of temperature: ";
        cin >> temperature;
        cout << endl;

        cout << "Enter the type of humidity: ";
        cin >> humidity;
        cout << endl;

        if ( temperature == "warm" )
        {
            if (humidity=="dry")
            {
                cout<<"Play Tennis";
            }
            else if (humidity=="humid")
            {
                cout<<"Swim";
            }
            else
            {
                cout << "Invalid Value" ; 
            }
        }
        else if ( temperature == "cold" && humidity == "dry" )
        {
            cout<<"Play BasketBall";
        }
        else if ( temperature == "cold" && humidity == "dry" )
        {
            cout << "Watch TV" ;
        }
        else
        {
            cout << "Invalid Value" ; 
        }
            cout<<endl<<endl;

    }
    
}
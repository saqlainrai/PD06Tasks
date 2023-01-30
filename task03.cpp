#include <iostream>
using namespace std;

main()
{
    system("cls");

    string month;
    int date;

    while (true)
    {

        cout << "Enter the date of Birth: ";
        cin >> date;
        cout << endl;

        cout << "Enter the Month of Birth: ";
        cin >> month;
        cout << endl;

        if ((( date >= 21 && date <= 31 ) && month == "March" ) || (( date >= 1 && date <= 19 ) && month == "April"))
        {
            cout << "Your Zodiac Sign:  Aries"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Ram"<<endl<<endl;
        }
        else if ((( date >= 20 && date <= 30 ) && month == "April" ) || (( date >= 1 && date <= 20 ) && month == "May"))
        {
            cout << "Your Zodiac Sign:  Taurus"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Bull"<<endl<<endl;
        }
        else if ((( date >= 21 && date <= 31 ) && month == "May" ) || (( date >= 1 && date <= 20 ) && month == "June"))
        {
            cout << "Your Zodiac Sign:  Gemini"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Twins"<<endl<<endl;
        }
        else if ((( date >= 21 && date <= 30 ) && month == "June" ) || (( date >= 1 && date <= 22 ) && month == "July"))
        {
            cout << "Your Zodiac Sign:  Cancer"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Crab"<<endl<<endl;
        }
        else if ((( date >= 23 && date <= 31 ) && month == "July" ) || (( date >= 1 && date <= 22 ) && month == "August"))
        {
            cout << "Your Zodiac Sign:  Leo"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Lion"<<endl<<endl;
        }
        else if ((( date >= 23 && date <= 31 ) && month == "August" ) || (( date >= 1 && date <= 22 ) && month == "September"))
        {
            cout << "Your Zodiac Sign:  Virgo"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Virgin"<<endl<<endl;
        }
        else if ((( date >= 23 && date <= 30 ) && month == "September" ) || (( date >= 1 && date <= 22 ) && month == "October"))
        {
            cout << "Your Zodiac Sign:  Libra"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Scales"<<endl<<endl;
        }
        else if ((( date >= 23 && date <= 31 ) && month == "October" ) || (( date >= 1 && date <= 21 ) && month == "November"))
        {
            cout << "Your Zodiac Sign:  Scorpio"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Scorpion"<<endl<<endl;
        }
        else if ((( date >= 22 && date <= 30 ) && month == "November" ) || (( date >= 1 && date <= 21 ) && month == "December"))
        {
            cout << "Your Zodiac Sign:  Sagittarius"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Archer"<<endl<<endl;
        }
        else if ((( date >= 22 && date <= 31 ) && month == "December" ) || (( date >= 1 && date <= 19 ) && month == "January"))
        {
            cout << "Your Zodiac Sign:  Capricorn"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Goat"<<endl<<endl;
        }
        else if ((( date >= 20 && date <= 31 ) && month == "January" ) || (( date >= 1 && date <= 18 ) && month == "February"))
        {
            cout << "Your Zodiac Sign:  Aquarius"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Water Bearer"<<endl<<endl;
        }
        else if ((( date >= 19 && date <= 29 ) && month == "February" ) || (( date >= 1 && date <= 20 ) && month == "March"))
        {
            cout << "Your Zodiac Sign:  Pisces"<<endl<<endl;
            cout << "Your Zodiac Symbol:  The Fishes"<<endl<<endl;
        }
        else
        {
            cout << "You have entered a Invalid Value" <<endl ;
        }
        cout << endl ;
    }
    
}
#include <iostream>
using namespace std;

main()
{
    system("cls");

    string month;
    int days;
    float priceforApt, priceforStu;
    float priceforAptf, priceforStuf;

    while (true)
    {

        cout << "Enter the Month : ";
        cin >> month;
        cout << endl;

        cout << "Enter the Number of stay : ";
        cin >> days;
        cout << endl;

        if (month == "May" || month == "October")
        {
            priceforStu = days * 50;
            priceforApt = days * 65;

            if (days > 7 && days <= 14 )
            {
                priceforStuf = priceforStu - ( 5 * priceforStu) / 100;
            }
            else if (days > 14)
            {
                priceforAptf = priceforApt - ( 10 * priceforApt) / 100;
                priceforStuf = priceforStu - ( 30 * priceforStu) / 100;
            }
            else
            {
                priceforStuf = priceforStu ;
                priceforAptf = priceforApt ;
            }
            
        }

        else if (month == "June" || month == "September")
        {
            priceforStu = days * 75.20;
            priceforApt = days * 68.70;

            if (days > 14)
            {
                priceforAptf = priceforApt - ( 10 * priceforApt) / 100;
                priceforStuf = priceforStu - ( 20 * priceforStu) / 100;
            }
            else
            {
                priceforStuf = priceforStu ;
                priceforAptf = priceforApt ;
            }
            
        }

        else if (month == "July" || month == "August")
        {
            priceforApt = days * 77;
            priceforStuf = days * 76;

            if ( days > 14 )
            {
                priceforAptf = priceforApt - (10 * priceforApt) / 100;
            }
            else
            {
                priceforAptf = priceforApt ;
            }
        }

        else
        {
            cout << "Invalid Value Input"<<endl;
            priceforAptf = 0 ;
            priceforStuf = 0 ;
        }

        cout << "Apartment: " << priceforAptf << "$" << endl;
        cout << "Studio: " << priceforStuf << "$" << endl;
    }
}
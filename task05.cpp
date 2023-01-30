#include <iostream>
using namespace std;

float checkBill(string day, string fruit, float quantity);

main()
{
    system("cls");

    string fruit, day;
    float quantity, sum;

    while (true)
    {

        cout << "Enter the type of Fruit : ";
        cin >> fruit;
        cout << endl;

        cout << "Enter the Day of Week : ";
        cin >> day;
        cout << endl;

        cout << "Enter the Quantity of Fruit Bought: ";
        cin >> quantity;
        cout << endl;

        sum = checkBill(day, fruit, quantity);

        cout << "The Total Bill is : " << sum << endl;
    }
}
float checkBill(string day, string fruit, float quantity)
{
    float bill;

    if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
        {
            bill = 2.70 * quantity;
        }
        else if (fruit == "apple")
        {
            bill = 1.25 * quantity;
        }
        else if (fruit == "orange")
        {
            bill = 0.90 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            bill = 1.60 * quantity;
        }
        else if (fruit == "kiwi")
        {
            bill = 3.0 * quantity;
        }
        else if (fruit == "pineapple")
        {
            bill = 5.60 * quantity;
        }
        else if (fruit == "grapes")
        {
            bill = 4.20 * quantity;
        }
        else
        {
            cout << "Invalid Fruit Value";
        }
    }
    else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana")
        {
            bill = 2.50 * quantity;
        }
        else if (fruit == "apple")
        {
            bill = 1.20 * quantity;
        }
        else if (fruit == "orange")
        {
            bill = 0.85 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            bill = 1.45 * quantity;
        }
        else if (fruit == "kiwi")
        {
            bill = 2.70 * quantity;
        }
        else if (fruit == "pineapple")
        {
            bill = 5.50 * quantity;
        }
        else if (fruit == "grapes")
        {
            bill = 3.85 * quantity;
        }
        else
        {
            cout << "Invalid Fruit Value";
        }
    }
    else
    {
        cout << "Invalid Day Value";
    }

    return bill;
}
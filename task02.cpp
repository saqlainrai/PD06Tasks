#include <iostream>
using namespace std;

string calculateGrade(float sumpercentage);

main()
{
    system("cls");

    string name;
    float english, math, chemistry, sScience, biology;
    float sum, sumpercentage;
    string grade;

    // we are taking function and variable in string datatype coz, char will not store A+, B+ like values.

    while (true)
    {

        cout << "Enter the Name of Student: ";
        cin >> name;
        cout << endl;

        cout << "Enter Marks of English: ";
        cin >> english;
        cout << endl;

        cout << "Enter Marks of Maths: ";
        cin >> math;
        cout << endl;

        cout << "Enter Marks of Chemistry: ";
        cin >> chemistry;
        cout << endl;

        cout << "Enter Marks of Social Science: ";
        cin >> sScience;
        cout << endl;

        cout << "Enter Marks of Biology: ";
        cin >> biology;
        cout << endl;

        sum = english+math+chemistry+sScience+biology;

        sumpercentage = (sum * 100) / 500 ;

        grade = calculateGrade(sumpercentage);

        cout<<endl;

        cout << "The Student :  " << name <<endl<<endl;
        cout << "HAS FOLLOWING CREDENTIALS" <<endl<<endl;

        cout << "TOTAL MARKS : " << sum <<endl;
        cout << "PERCENTAGE : " << sumpercentage <<endl;
        cout << "GRADE : " << grade <<endl;

    }
    
}
string calculateGrade(float sumpercentage)
{
    string alp;
    float a;
    a = sumpercentage;

    if ( a >= 90 && a <= 100)
    {
        alp = "A+";
    }
    else if ( a >= 80 && a < 90 )
    {
        alp = "A";
    }
    else if ( a >= 70 && a < 80 )
    {
        alp = "B+";
    }
    else if ( a >= 60 && a < 70 )
    {
        alp = "B";
    }
    else if ( a >= 50 && a < 60)
    {
        alp = "C";
    }
    else if ( a >= 40 && a < 50)
    {
        alp = "D";
    }
    else if ( a >= 0 && a < 40 )
    {
        alp = "F";
    }
    else
    {
        cout << "Invalid Value";
    }

    return alp;
}
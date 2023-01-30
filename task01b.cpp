#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printMaze();
void clear(int x , int y, char previous);
void showPacman(int x, int y);
void showGhost(int x, int y);

int pacmanX = 3, pacmanY = 3;
int ghostX = 2, ghostY = 5;

main()
{
    int gx = 1, gy = 1 ;
    string direction = "right" ;
    char previousChar = ' ' ;

    system("cls");

    printMaze();
    showGhost(gx, gy);

    while (true)
    {
        if ( direction == "right" )
        {
            char nextlocation = getCharAtxy(gx + 1, gy );
            if (nextlocation == '%')
            {
                direction == "left" ;
            }
            else if ( nextlocation == ' ' || nextlocation == '.')
            {
                clear (gx, gy, previousChar);
                gx = gx + 1 ;
                previousChar = nextlocation ;
                showGhost(gx, gy);
            }
        }
        else if ( direction == "left" )
        {
            char nextlocation = getCharAtxy(gx - 1, gy );
            if (nextlocation == '%')
            {
                direction == "right" ;
            }
            else if ( nextlocation == ' ' || nextlocation == '.')
            {
                clear (gx, gy, previousChar);
                gx = gx - 1 ;
                previousChar = nextlocation ;
                showGhost(gx, gy);
            }
        }
        Sleep(200);
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void printMaze()
{
    cout << "%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%                  %" << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%" << endl;
}
void clear(int x , int y, char previous)
{
    gotoxy( x , y );
    cout << previous ;
}
void showPacman()
{
    gotoxy(pacmanX, pacmanY);
    cout << "P";
}
void showGhost(int x, int y)
{
    gotoxy( x, y );
    cout << "G";
}
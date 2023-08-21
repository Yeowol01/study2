#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define FG FOREGROUND_GREEN

void SetColorOne(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void main()
{
    SetColorOne(FG);

    int    Computer[3] = { 0, };
    int    User[3] = { 0, };
    int    NumberTable[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int    UserInputTable[20][3] = { 0, };
    int    UserInputCount = 0;

}